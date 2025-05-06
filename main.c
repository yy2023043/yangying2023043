#include <stdlib.h>
#include <stdio.h>
#include "fibo.h"

int main(int argc, char * argv [])
{
    long ret;
    int n;
    if (argc < 2) {
        fprintf(stderr, "missing index.\n");
        return -1;
    }
    n = atoi(argv[1]);
    ret = fibo(n);
    printf("fibo (%d) is %ld\n", n, ret);
    return EXIT_SUCCESS;
}

