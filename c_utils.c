#include "c_utils.h"

#ifdef __cplusplus
extern "C" {
#endif

static void default_exit_fun() { exit(-1);}

static void (*c_exit_fun)() = &default_exit_fun;

void set_c_exit_function( void (*new_exit_fun)() ) { c_exit_fun = new_exit_fun;}

void c_fatal_error() { (*c_exit_fun)();}

void *Malloc(size_t n) {
    void * p = malloc(n);
    if ( !p ) {
        fprintf(stderr,"Malloc failed for %lu bytes\n",n);
        c_fatal_error();
    }
    return p;
}

void *Calloc(size_t n) {
    void * p = Malloc(n);
    memset(p,0,n);
    return p;
}

void *Realloc(void *p,size_t new_sz,size_t old_sz) {
    size_t cpy_size;
    void * tmp = 0x0;
    
    if ( !p ) {
        p = Malloc(new_sz);
        return p;
    }
    if ( new_sz == old_sz) return p;
    cpy_size = ( new_sz > old_sz ) ? old_sz:new_sz;
    tmp = Malloc(new_sz);
    memcpy(tmp,p,cpy_size);
    free(p);
    p = tmp;
    return p; 
}

char *StrAlloc(size_t n) {
    return (char*)Malloc((n+1));
}

char *Strdup(const char *str) {
    char * n = strdup(str);
    if ( n == 0 ) {
        fprintf(stderr,"could not strdup string\n");
        c_fatal_error();
    }
    return n;
}

#ifdef __cplusplus
}
#endif
