/*
Escreva em um programa em C que exiba a tabuada dos números entre 3 e 6 (inclusive).

3 x 1 = 3   4 x 1 = 4
*/
#include <stdio.h>
int main(){

    for(int n = 3; n <=6; n++){
        for(int multiplicador =1; multiplicador <=10; multiplicador++){
            int resposta =  n * multiplicador;
            printf("%d x %d = %d\n", n, multiplicador,resposta);
        }
    }
    return 0;
}