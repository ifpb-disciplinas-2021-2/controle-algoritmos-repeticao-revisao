/*
Escreva um programa em linguagem C que leia uma quantidade indeterminada de números
inteiros, calcule e exiba quantos números positivos e negativos foram digitados. O algo-
ritmo deve continuar até ser digitado o zero.
*/
#include<stdio.h>
int main(){
    int numero;
    int positivos = 0;
    int negativos = 0;
    scanf("%d", &numero); //1
    while(numero !=0 ){
        if(numero > 0) 
            positivos = positivos + 1;
        if(numero < 0) 
            negativos = negativos + 1;
        scanf("%d", &numero);    //0
    }
    printf("Encontramos %d positivos e %d negativos\n", positivos, negativos);
    return 0;
}