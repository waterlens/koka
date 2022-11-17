#include <stdio.h>
#include <time.h>
#include <kklib.h>

MAKE_FUNCTION(drop)
MAKE_FUNCTION(alloc)

__attribute__((always_inline)) inline uint64_t counter() {
    unsigned ui;
    return __rdtscp(&ui);
}
