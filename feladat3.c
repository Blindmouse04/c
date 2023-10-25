#include <stdio.h>

int main() {
    int aktualis_ora, kesleltetes_ora;

    printf("Kerlek add meg az aktualis orat: ");
    scanf("%d", &aktualis_ora);

    printf("Kerlek add meg, hany oraval kesobb szolaljon meg az ebresztoora: ");
    scanf("%d", &kesleltetes_ora);

    int ebreszto_ora = (aktualis_ora + kesleltetes_ora) % 24;

    printf("Az ebresztoora %d orakor fog megszolalni.\n", ebreszto_ora);

    return 0;
}
