#include "packed.h"
#include <stdio.h>

typedef PACKED_STRUCT(
        a {
            int a;
            char b;
            short c;
            int d;
        }
    ) a;

int main() {


    struct b {
        int a;
        char b;
        short c;
        int d;
    };

    printf("Sizeof packed: %lu, sizeof non-packed: %lu\n", sizeof(a), sizeof(struct b));
}
