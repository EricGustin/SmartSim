/* The C wrappers in this file were autogenerated by c_code_generator.py */

#include "c_client.h"
extern "C" void put_array_double_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_array_double(key, array, *dimensions, *ndims);
}

extern "C" void put_array_float_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_array_float(key, array, *dimensions, *ndims);
}

extern "C" void put_array_int64_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_array_int64(key, array, *dimensions, *ndims);
}

extern "C" void put_array_int32_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_array_int32(key, array, *dimensions, *ndims);
}

extern "C" void put_array_uint64_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_array_uint64(key, array, *dimensions, *ndims);
}

extern "C" void put_array_uint32_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_array_uint32(key, array, *dimensions, *ndims);
}

extern "C" void get_array_double_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_array_double(key, array, *dimensions, *ndims);
}

extern "C" void get_array_float_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_array_float(key, array, *dimensions, *ndims);
}

extern "C" void get_array_int64_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_array_int64(key, array, *dimensions, *ndims);
}

extern "C" void get_array_int32_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_array_int32(key, array, *dimensions, *ndims);
}

extern "C" void get_array_uint64_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_array_uint64(key, array, *dimensions, *ndims);
}

extern "C" void get_array_uint32_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_array_uint32(key, array, *dimensions, *ndims);
}

extern "C" void put_scalar_double_c(void* SmartSimClient_p, const char* key, double scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_scalar_double(key, scalar);
}

extern "C" void put_scalar_float_c(void* SmartSimClient_p, const char* key, float scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_scalar_float(key, scalar);
}

extern "C" void put_scalar_int64_c(void* SmartSimClient_p, const char* key, int64_t scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_scalar_int64(key, scalar);
}

extern "C" void put_scalar_int32_c(void* SmartSimClient_p, const char* key, int32_t scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_scalar_int32(key, scalar);
}

extern "C" void put_scalar_uint64_c(void* SmartSimClient_p, const char* key, uint64_t scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_scalar_uint64(key, scalar);
}

extern "C" void put_scalar_uint32_c(void* SmartSimClient_p, const char* key, uint32_t scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_scalar_uint32(key, scalar);
}

extern "C" double get_scalar_double_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_scalar_double(key);
}

extern "C" float get_scalar_float_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_scalar_float(key);
}

extern "C" int64_t get_scalar_int64_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_scalar_int64(key);
}

extern "C" int32_t get_scalar_int32_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_scalar_int32(key);
}

extern "C" uint64_t get_scalar_uint64_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_scalar_uint64(key);
}

extern "C" uint32_t get_scalar_uint32_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_scalar_uint32(key);
}

extern "C" int poll_key_and_check_scalar_double_c(void* SmartSimClient_p, const char* key, double scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_key_and_check_scalar_double(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" int poll_key_and_check_scalar_float_c(void* SmartSimClient_p, const char* key, float scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_key_and_check_scalar_float(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" int poll_key_and_check_scalar_int64_c(void* SmartSimClient_p, const char* key, int64_t scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_key_and_check_scalar_int64(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" int poll_key_and_check_scalar_int32_c(void* SmartSimClient_p, const char* key, int32_t scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_key_and_check_scalar_int32(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" int poll_key_and_check_scalar_uint64_c(void* SmartSimClient_p, const char* key, uint64_t scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_key_and_check_scalar_uint64(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" int poll_key_and_check_scalar_uint32_c(void* SmartSimClient_p, const char* key, uint32_t scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_key_and_check_scalar_uint32(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" void put_exact_key_array_double_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_array_double(key, array, *dimensions, *ndims);
}

extern "C" void put_exact_key_array_float_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_array_float(key, array, *dimensions, *ndims);
}

extern "C" void put_exact_key_array_int64_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_array_int64(key, array, *dimensions, *ndims);
}

extern "C" void put_exact_key_array_int32_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_array_int32(key, array, *dimensions, *ndims);
}

extern "C" void put_exact_key_array_uint64_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_array_uint64(key, array, *dimensions, *ndims);
}

extern "C" void put_exact_key_array_uint32_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_array_uint32(key, array, *dimensions, *ndims);
}

extern "C" void get_exact_key_array_double_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_exact_key_array_double(key, array, *dimensions, *ndims);
}

extern "C" void get_exact_key_array_float_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_exact_key_array_float(key, array, *dimensions, *ndims);
}

extern "C" void get_exact_key_array_int64_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_exact_key_array_int64(key, array, *dimensions, *ndims);
}

extern "C" void get_exact_key_array_int32_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_exact_key_array_int32(key, array, *dimensions, *ndims);
}

extern "C" void get_exact_key_array_uint64_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_exact_key_array_uint64(key, array, *dimensions, *ndims);
}

extern "C" void get_exact_key_array_uint32_c(void* SmartSimClient_p, const char* key, void* array, int** dimensions, int* ndims)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->get_exact_key_array_uint32(key, array, *dimensions, *ndims);
}

extern "C" void put_exact_key_scalar_double_c(void* SmartSimClient_p, const char* key, double scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_scalar_double(key, scalar);
}

extern "C" void put_exact_key_scalar_float_c(void* SmartSimClient_p, const char* key, float scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_scalar_float(key, scalar);
}

extern "C" void put_exact_key_scalar_int64_c(void* SmartSimClient_p, const char* key, int64_t scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_scalar_int64(key, scalar);
}

extern "C" void put_exact_key_scalar_int32_c(void* SmartSimClient_p, const char* key, int32_t scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_scalar_int32(key, scalar);
}

extern "C" void put_exact_key_scalar_uint64_c(void* SmartSimClient_p, const char* key, uint64_t scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_scalar_uint64(key, scalar);
}

extern "C" void put_exact_key_scalar_uint32_c(void* SmartSimClient_p, const char* key, uint32_t scalar)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  s->put_exact_key_scalar_uint32(key, scalar);
}

extern "C" double get_exact_key_scalar_double_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_exact_key_scalar_double(key);
}

extern "C" float get_exact_key_scalar_float_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_exact_key_scalar_float(key);
}

extern "C" int64_t get_exact_key_scalar_int64_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_exact_key_scalar_int64(key);
}

extern "C" int32_t get_exact_key_scalar_int32_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_exact_key_scalar_int32(key);
}

extern "C" uint64_t get_exact_key_scalar_uint64_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_exact_key_scalar_uint64(key);
}

extern "C" uint32_t get_exact_key_scalar_uint32_c(void* SmartSimClient_p, const char* key)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->get_exact_key_scalar_uint32(key);
}

extern "C" int poll_exact_key_and_check_scalar_double_c(void* SmartSimClient_p, const char* key, double scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_exact_key_and_check_scalar_double(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" int poll_exact_key_and_check_scalar_float_c(void* SmartSimClient_p, const char* key, float scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_exact_key_and_check_scalar_float(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" int poll_exact_key_and_check_scalar_int64_c(void* SmartSimClient_p, const char* key, int64_t scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_exact_key_and_check_scalar_int64(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" int poll_exact_key_and_check_scalar_int32_c(void* SmartSimClient_p, const char* key, int32_t scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_exact_key_and_check_scalar_int32(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" int poll_exact_key_and_check_scalar_uint64_c(void* SmartSimClient_p, const char* key, uint64_t scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_exact_key_and_check_scalar_uint64(key, scalar, poll_frequency_ms, num_tries);
}

extern "C" int poll_exact_key_and_check_scalar_uint32_c(void* SmartSimClient_p, const char* key, uint32_t scalar, int poll_frequency_ms, int num_tries)
{
  SmartSimClient *s = (SmartSimClient *)SmartSimClient_p;
  return s->poll_exact_key_and_check_scalar_uint32(key, scalar, poll_frequency_ms, num_tries);
}

