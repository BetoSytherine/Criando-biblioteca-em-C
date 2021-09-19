#include <stdio.h>
#include "ajuda.h"

int main(){
    int  n1, n2, soma, mlt;
msg();

printf("Digite o valor do n1: ");
scanf("%d", &n1);

printf("Digite o valor do n2: ");
scanf("%d", &n2);
soma = mais(n1, n2);
printf(" A soma de %d e %d equivale a: %d\n", n1, n2, soma);

mlt = vezes( n1, n2);

printf("E a multiplicao de %d e %d equivael a: %d", n1, n2, mlt );





return 0;}
