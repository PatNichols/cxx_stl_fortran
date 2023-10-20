#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif
void set_c_exit_function( void (*new_exit_fun)() );
void c_fatal_error();
void *Malloc(size_t n);
void *Calloc(size_t n);
void *Realloc(void *p,size_t new_sz,size_t old_sz);
char *StrAlloc(size_t n);
char *Strdup(const char *str);
#ifdef __cplusplus
}
#endif

