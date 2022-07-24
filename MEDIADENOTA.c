/*Código que retorna a média final das notas digitadas, utilizando as funções if e else if para retornar uma condição*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    float NOTA1, NOTA2, NOTA3, R;

    printf("Por favor digite a primeira nota do aluno: \n");
    scanf("%f", &NOTA1);

    printf("Por favor digite a segunda nota do aluno: \n");
    scanf("%f", &NOTA2);

    printf("Por favor digite a terceira nota do aluno: \n");
    scanf("%f", &NOTA3);

    printf("A média final do aluno foi: %.2f\n", R = (NOTA1 + NOTA2 + NOTA3) /3);

    if(R >= 7.00){
        printf("O aluno foi aprovado!\n");
    }else if(R >= 5.00 && R <= 6.00){
        printf("O aluno está de exame!\n");
    }else if (R < 5.00){
        printf("O Aluno foi reprovado!\n");
    }

    system("pause");
    return 0;
}