#ifndef PRIME_NUMBER_INC_
#define PRIME_NUMBER_INC_

#include "ln.h"

typedef void (*next_prime_cb)(ln_t *, ln_t *, void *);

void next_prime(ln_t * _number, next_prime_cb _cb, void * _data);

#endif /* PRIME_NUMBER_INC */