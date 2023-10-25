#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int szam;
    printf("Kerem, adjon meg egy szamot 0 es 10 kozott: ");
    scanf("%d", &szam);

    if (szam >= 0 && szam <= 10) {
        int faktorialis = factorial(szam);
        printf("%d faktorialisa = %d\n", szam, faktorialis);
    } else {
        printf("A megadott szam nem felel meg a kriteriumoknak.\n");
    }

    return 0;
}