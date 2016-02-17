#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "caesar.h"

int main(int argc, char* argv[]) {
    if(argc < 3) {
        printf("Usage: caesar <key> <clear-text>");
        return 0;
    }

    int key = atoi(argv[1]);
    printf("clear:  %s\n", argv[2]);

    caesar(key, argv[2]); 

    printf("cipher: %s\n", argv[2]);
}
