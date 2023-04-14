#include "packed.h"
#include <cstdio>

int main() {
    packed_struct a {
            int a;
            char b;
            short c;
            int d;
        };

    struct b {
        int a;
        char b;
        short c;
        int d;
    };

    printf("Sizeof packed: %lu, sizeof non-packed: %lu\n", sizeof(a), sizeof(b));
}
