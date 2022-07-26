#include <stdlib.h>


#define IF_ELSE(cond, if_true, if_false) \
    ((cond) ? (if_true) : (if_false))

#define MALLOC(type, size) \
    ((type *) malloc(sizeof(type) * size))

#define MALLOC_EMPTY(type, size) \
    ({ \
        type * ptr = MALLOC(type, size); \
        memset(ptr, 0, sizeof(type) * size); \
        ptr; \
    })

#define MALLOC1(type) \
    MALLOC(type, 1)

#define REALLOC(ptr, type, size) \
    ((type *) realloc(ptr, sizeof(type) * size))

#define FREE(ptr) \
    free(ptr)

#define POW2(n) \
    (1 << n)
