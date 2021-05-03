#include <stdlib.h>
#include <stdio.h>

int main () {

    int Cislo, NejCislo;

    while (Cislo != 0) {

        scanf("%d", &Cislo);
        if (Cislo > NejCislo) NejCislo = Cislo;

    }

    printf("Nejvetsi cislo je %d", NejCislo);

} 

