#!/usr/bin/env python3
#PBS -N smartsimtest
#PBS  -r n
#PBS  -j oe
#PBS  -V
#PBS  -l walltime=00:20:00
#PBS  -A P93300606
##PBS  -q regular
#PBS  -V
#PBS  -l select=1:ncpus=1:ompthreads=1:mpiprocs=1

import os, sys, time
cesmroot = os.environ.get('CESM_ROOT')
if cesmroot is None:
    raise SystemExit("ERROR: CESM_ROOT must be defined in environment")

_LIBDIR = os.path.join(cesmroot,"cime","scripts","Tools")
sys.path.append(_LIBDIR)
_LIBDIR = os.path.join(cesmroot,"cime","scripts","lib")
sys.path.append(_LIBDIR)

import socket
import numpy as np

from smartsim import Experiment, constants
from smartsim.database import PBSOrchestrator

from smartredis import Client
from CIME.utils import run_cmd

"""
Launch a distributed, in memory database cluster and use the
SmartRedis python client to send and recieve some numpy arrays.

This example runs in an interactive allocation with at least three
nodes and 1 processor per node.

i.e. qsub -l select=3:ncpus=1 -l walltime=00:10:00 -A <account> -q premium -I
"""

def collect_db_hosts(num_hosts):
    """A simple method to collect hostnames because we are using
       openmpi. (not needed for aprun(ALPS), Slurm, etc.
    """

    hosts = []
    if "PBS_NODEFILE" in os.environ:
        node_file = os.environ["PBS_NODEFILE"]
        with open(node_file, "r") as f:
            for line in f.readlines():
                host = line.split(".")[0]
                hosts.append(host)
    else:
        raise Exception("could not parse interactive allocation nodes from PBS_NODEFILE")

    # account for mpiprocs causing repeats in PBS_NODEFILE
    hosts = list(set(hosts))
    if len(hosts) >= num_hosts:
        return hosts[:num_hosts]
    else:
        raise Exception("PBS_NODEFILE {} had {} hosts, not {}".format(node_file, len(hosts),num_hosts))


def launch_cluster_orc(exp, db_hosts, port):
    """Just spin up a database cluster, check the status
       and tear it down"""

    print(f"Starting Orchestrator on hosts: {db_hosts}")
    # batch = False to launch on existing allocation
    db = PBSOrchestrator(port=port, db_nodes=len(db_hosts), batch=False,
                          run_command="mpirun", hosts=db_hosts)

    # generate directories for output files
    # pass in objects to make dirs for
    exp.generate(db, overwrite=True)

    # start the database on interactive allocation
    exp.start(db, block=True)

    # get the status of the database
    statuses = exp.get_status(db)
    print(f"Status of all database nodes: {statuses}")

    return db

# create the experiment and specify PBS because cheyenne is a PBS system
exp = Experiment("launch_cluster_db", launcher="pbs")

db_port = 6780
db_hosts = collect_db_hosts(1)
# start the database
db = launch_cluster_orc(exp, db_hosts, db_port)

## test sending some arrays to the database cluster
## the following functions are largely the same across all the
## client languages: C++, C, Fortran, Python
#
## only need one address of one shard of DB to connect client
#db_address = ":".join((socket.gethostbyname(db_hosts[0]), str(db_port)))

#s, o, e = run_cmd("mpirun -n 36 --hostfile {} ./hello".format(new_host_file), verbose=True)
#print("After hello {} {} {} ".format(s,o,e))
#client = Client(address=db_address, cluster=True)
#
## put into database
#test_array = np.array([1,2,3,4])
#print(f"Array put in database: {test_array}")
#client.put_tensor("test", test_array)
#
## get from database
#returned_array = client.get_tensor("test")
#print(f"Array retrieved from database: {returned_array}")
#
## shutdown the database because we don't need it anymore
time.sleep(1200)
exp.stop(db)
