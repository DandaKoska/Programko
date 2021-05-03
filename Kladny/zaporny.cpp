#include <stdio.h>
#include <stdlib.h>

int main() {


    int cislo=1 , kladny, zaporny;

    while (cislo != 0) {

        scanf("%d", &cislo);

        if (cislo > 0) kladny++;
        if (cislo < 0) zaporny++;

}
zaporny = zaporny- 1; 

    printf("pocet kladnych cisel: %d\n", kladny);
    printf("pocet zapornych cisel: %d", zaporny);
    

}
