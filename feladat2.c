#include <stdio.h>

int main() {
    int szam;

    printf("Kerlek add meg a szamot: ");
    scanf("%d", &szam);

    (szam % 2 == 0) ? printf("A megadott szam paros.\n") : printf("A megadott szam paratlan.\n");

    return 0;
}