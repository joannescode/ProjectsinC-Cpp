/* Código simples para realizar uma contagem regressiva.*/

#include <stdio.h>
#include <stdlib.h>


int main (){

    int i = 0;

    for(i = 0; i <= 10; i++){
        printf("%d\n", i);
    }

    while(i <= 20){
        printf("%d\n", i);
        i++;
    }

    do { 
        printf("%d\n", i);
        i++;
    } while(i <= 30);

    system("pause");
    return 0;
}