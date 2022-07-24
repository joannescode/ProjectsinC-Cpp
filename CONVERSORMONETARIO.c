/*Código simples que converte o valor em R$ para USD baseando-se na cotação que o usuário digitar*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    float COT, R, D;

    printf("Por favor digite a cotação atual do Dólar: USD $");
    scanf("%f", &COT);
    fflush(stdin);

    printf("Por favor digite o valor em Reais: BRL R$");
    scanf("%f", &R);
    fflush(stdin);

    D = R / COT;

    printf("O valor em Dólar é: USD $%f", D);

    system("pause");
    return 0;
}
