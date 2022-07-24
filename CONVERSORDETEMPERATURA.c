/*Código simples que converte a temperatura de Celsius para Fahrenheit, utilizei um código feito em Portugol e re-digitei em C*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    float C, F;

    printf("Por favor digite a temperatura em Celsius: \n");
    scanf("%f", &C);

    F = (1.8 * C) + 32;

    printf("\n%2.f Celsius = %2.f Fahrenheit\n\n", C, F);

    system("pause");
    return 0;

}
