#include <stdio.h>
#include <stdlib.h>

int main (){

int A;

printf("INTRODUCE LOS RENGLONES DE LA PIRAMIDE:");
scanf("%d", &A);

for(int i=1; i<=A; i++)
    {
    for(int j=1; j<=A-i; j++)
        printf(" ");
    for(int j=1; j<=2*i-1; j++)
        printf("*");
        printf("\n");
}
}
