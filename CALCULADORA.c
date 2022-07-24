/*Calculadora simples feita em C através do curso da Udemy de C e C++.
No início pode parecer um pouco complexa, porém logo você irá memorizar esse código.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    float A, B;
    int OPCAO;

    printf("Por favor digite o primeiro número: \n");
    scanf("%f", &A);
    fflush(stdin);

    printf("Por favor digite o segundo número: \n");
    scanf("%f", &B);
    fflush(stdin);

    printf("Agora escolha uma opção:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    scanf("%d", &OPCAO);

    switch(OPCAO){
        case 1:
            printf("O resultado é: %.2f\n", A + B);
            break;
        case 2:
            printf("O resultado é: %.2f\n", A - B);
            break;
        case 3:
            printf("O resultado é: %.2f\n", A * B);
            break;
        case 4:
            printf("O resultado é: %.2f\n", A / B);
            break;
        default:
            printf("Opção inválida!\n");
            break;

    }
    system("pause");
    return 0;
}