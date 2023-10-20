#pragma once
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "c_utils.h"
#include "c_decls.hpp"
DECL_TYPE(cxx_string_t)
extern "C" {
cxx_string_t cxx_string_alloc();
void cxx_string_c_dealloc(cxx_string_t * s);
void cxx_string_c_set(cxx_string_t * s, const char *val);
char * cxx_string_c_get(cxx_string_t s);
void cxx_string_c_copy(cxx_string_t * s, cxx_string_t o);
void cxx_string_c_append_str(cxx_string_t l,cxx_string_t r);
void cxx_string_c_append(cxx_string_t l,const char *r);
int64_t cxx_string_c_size(cxx_string_t s);
void cxx_string_c_clear(cxx_string_t s);
}  // end extern "C"

