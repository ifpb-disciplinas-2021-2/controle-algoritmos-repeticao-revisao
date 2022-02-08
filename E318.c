/*
Escreva um programa em linguagem C que calcule e exiba o valor de H, a partir dos N
primeiros termos. Como entrada, o usuário necessita informar um número (N) positivo e
não nulo (deve ser validado esse valor).

H = 1 − 1/3 + 1/5 - 1/7 + 1/9 - 1/11

*/
#include <stdio.h>
int main(){
    int n; //2
    float H = 0;
    int contador = 1;
    scanf("%d", &n);
    int sinal = 1;
    while(contador <= n){
        //calculando o valor de H
        if(contador % 2 != 0){ //impar
            H = H + (float) 1/(2*contador-1);  //  * 1
        }else{
            H = H - (float) 1/(2*contador-1);  // * -1
        }
        // H = H + (sinal * (float) 1/(2*contador-1));  
        // sinal = -1 * sinal; //invertendo o sinal
        contador++; //atualizar a variável da expressão lógica
    }
    printf("H: %.3f \n", H);

    return 0;
}