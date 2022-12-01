#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void pierwsze(){
    int liczba1 = 67;
    float liczba2 = ((float)liczba1);
    printf("Liczba z dokladnoscia do jednego miejsca po przecinku wynosi: %.1f\n", liczba2);
    printf("Liczba z dokladnoscia do trzech miejsc po przecinku wynosi: %.3f\n", liczba2);
    printf("Liczba w formacie napisowym to: %c\n", liczba1);
}

void drugie(){
    int kod;
    printf("Podaj kod ASCII: ");
    scanf("%d", &kod);
    printf("Liczba %d to %c w ASCII\n", kod, kod);
}

void trzecie(){
    float wzrost;
    float waga;
    float BMI;
    printf("Ten program oblicza BMI\n");
    printf("Podaj swoj wzrost [m]\n");
    scanf("%f", &wzrost);
    printf("Podaj swoja wage [kg]\n");
    scanf("%f", &waga);
    BMI = waga / (wzrost * wzrost);
    printf("Twoje BMI wynosi: %.2f\n", BMI);
}

int main() {

    return 0;
}
