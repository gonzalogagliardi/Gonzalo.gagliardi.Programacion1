#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include <string.h>
void invertirCadena(char cadena[]);
int main()
{
    char nombre[30];


    printf("\nIngrese cadena: ");
    fflush(stdin);
    scanf("%s", nombre);
    invertirCadena(nombre);

    return 0;
}

void invertirCadena(char cadena[])
{
    char aux[30];
    int tam;
    int i ;

    tam = strlen(cadena);

    for ( i=0; i<tam; i++)
        {
        aux[i]= cadena [tam-i];

        }

       printf("%s", aux);
}

