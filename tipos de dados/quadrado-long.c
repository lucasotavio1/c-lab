#include <stdio.h>

long long quadrado(long base) {
    return (long long) base * base;
}

int main(void) {
    long num = 100000;

    printf("%ld^2 = %lld\n", num, quadrado(num));

    return 0;
}

