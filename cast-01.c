#include <stdio.h>
int main(){
    int numerador = 1;
    int denominador = 3;
    int resposta;
    int resto;
    resposta = numerador / denominador;
    resto = numerador % denominador; //resto da divisão

    float div = (float) numerador / denominador; //int -> float (cast)
    printf("Resposta: %d, resto: %d, em float: %f \n", resposta, resto, div);
    return 0;
}