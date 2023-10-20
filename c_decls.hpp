#pragma once

#define VOID_TO_CXX(type,pin,pout) type * pout = reinterpret_cast< type * >(pin)

#define CXX_TO_VOID(p) reinterpret_cast< void * >(p)

#define DECL_TYPE(type) typedef void * type;
