#include <stdio.h>
#include <math.h>

int main() {
    double betet, kamatlaba, evkoeziKamatokSzama, idotartam, futamidoVegeErteke;

    printf("Kerem, adja meg a kezdeti betet osszeget (Ft): ");
    scanf("%lf", &betet);

    printf("Kerem, adja meg a nevleges kamatlabat (szazalekban): ");
    scanf("%lf", &kamatlaba);

    printf("Kerem, adja meg az evek szamat: ");
    scanf("%lf", &idotartam);

    evkoeziKamatokSzama = 12;

    kamatlaba /= 100.0;

    futamidoVegeErteke = betet * pow(1 + (kamatlaba / evkoeziKamatokSzama), evkoeziKamatokSzama * idotartam);

    printf("A futamido vegen nezett ertek: %.2lf Ft\n", futamidoVegeErteke);

    return 0;
}