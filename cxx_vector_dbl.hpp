#pragma once
#include <cstdlib>
#include <vector>
#include <iostream>
#include <stdexcept>
#include "c_utils.h"
#include "c_decls.hpp"

DECL_TYPE(cxx_vector_dbl_t)

extern "C" {

cxx_vector_dbl_t cxx_vector_dbl_c_alloc();
void cxx_vector_dbl_c_dealloc(cxx_vector_dbl_t * p);
void cxx_vector_dbl_c_copy(cxx_vector_dbl_t * p, cxx_vector_dbl_t q);
void cxx_vector_dbl_c_push_back(cxx_vector_dbl_t vp,double x);
void cxx_vector_dbl_c_set(cxx_vector_dbl_t vp,int64_t i,double x);
double cxx_vector_dbl_c_get(cxx_vector_dbl_t vp,int64_t i);
int64_t cxx_vector_dbl_c_size(cxx_vector_dbl_t vp);
void cxx_vector_dbl_c_resize(cxx_vector_dbl_t vp,int64_t n);
void cxx_vector_dbl_c_clear(cxx_vector_dbl_t vp);
int cxx_vector_dbl_c_empty(cxx_vector_dbl_t vp);

}
