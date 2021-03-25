#include <stdio.h>
#include <stdlib.h>

int main(){
int cislo1;
int cislo2;


printf("Program na výpočítání platu na brigádě za jeden den \n");
printf("Zadej mzdu za 1h: ");
 scanf("%d",&cislo1);
  printf("zadej odpracovaných hodin:");
    scanf("%d",&cislo2);
 	int suma = cislo1 * cislo2;
    printf( "Tva mzda za den je: %d  ", suma);
    if( suma > 1000){
    	printf(" Jsi na to dobre ;D ");
	}

printf("\nII 	I   I");
printf("\nI I	I   I");
printf("\nI  I	I  I");
printf("\nI  I	I I");
printf("\nI  I	I  I");
printf("\nI I	I    I");
	system("PAUSE");


}
