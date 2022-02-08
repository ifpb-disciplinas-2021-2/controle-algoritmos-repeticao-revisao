/*
Escreva um programa em linguagem C que leia 5 números reais, verifique e exiba quantos
dos números lidos são maiores que 10.
*/
#include <stdio.h>
int main(){
    float numero;
    int quantidade=0;
    for(int contador=1; contador<=5; contador=contador+1){
        scanf("%f", &numero);
        // printf("Numero: %f\n", numero);
        if(numero > 10){
            quantidade = quantidade +1;
        }
    }
    printf("Encontramos %d números maiores que 10\n", quantidade);
    return 0;
}