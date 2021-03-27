#include <stdio.h>
#include <stdlib.h>

int main(){
int cislo1;
int cislo2;
int cislo3;

printf("Program na výpoèítání platu na brigádì za jeden den \n");
printf("Zadej mzdu za 1h: ");
 scanf("%d",&cislo1);
  printf("zadej odpracovaných hodin:");
    scanf("%d",&cislo2);
    printf("Zadej poèet odpracovaných dní :");
    scanf("%d",&cislo3);
 	int suma = cislo1 * cislo2 * cislo3;
    printf( "Tva mzda za den je: %d  ", suma);
    if(suma>30000){
    	printf("Máš jsi blázen :D \n");
	}

printf("\nII 	I   I");
printf("\nI I	I   I");
printf("\nI  I	I  I");
printf("\nI  I	I I");
printf("\nI  I	I  I");
printf("\nI I	I    I");
	system("PAUSE");


}
