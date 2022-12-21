#include "packed.h"
#include <stdio.h>

int main() {
    PACKED_STRUCT(
        a {
            int a;
            char b;
            short c;
            int d;
        }
    );

    struct b {
        int a;
        char b;
        short c;
        int d;
    };

    printf("Sizeof packed: %lu, sizeof non-packed: %lu\n", sizeof(struct a), sizeof(struct b));
}
