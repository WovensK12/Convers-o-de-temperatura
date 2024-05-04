//bibliotecas
#include <stdio.h>

int main () 
{
    //Variaveis
    int p1 = 0, p2 = 0, temp1 = 0, tempResult = 0;

    //escolha da primeira temperatura de conversao
    printf("Ecolha a primeira temperatura de conversao:\n");
    printf("1 - Celcius\n");
    printf("2 - Farenhaint\n");
    printf("3 - Kelvin\n");
    scanf("%i", &p1);

    //escolha da segunda temperatura de conversao
    printf("\nEcolha a segunda temperatura de conversao:\n");
    printf("1 - Celcius\n");
    printf("2 - Farenhaint\n");
    printf("3 - Kelvin\n");
    scanf("%i", &p2);

    //escolha do número da temperatura
    printf("\nEscreva o valor da temperatura de conversao:\n");
    scanf("%d", &temp1);

    //Contas e respostas da conversao
    if (p1 == p2 || p2 == p1){
        printf("O resultado da conversao e: %d", temp1);
    }
    else if (p1 == 1 && p2 == 2){
        tempResult = (temp1 * 5/9) + 32;
        printf("O resultado da conversao e: %d", tempResult);
        printf("°F");
    }
    else if (p1 == 1 && p2 == 3){
        tempResult = temp1 + 273;
        printf("O resultado da conversao e: %d", tempResult);
        printf("K");
    }
    else if (p1 == 2 && p2 == 1){
        tempResult = (temp1 - 32) * 5/9;
        printf("O resultado da conversao e: %d", tempResult);
        printf("°C");
    }
    else if (p1 == 2 && p2 == 3){
        tempResult =(temp1- 32) * 5/9 + 273;
        printf("O resultado da conversao e: %d", tempResult);
        printf("K");

    }
    else if (p1 == 3 && p2 == 1){
        tempResult = temp1 - 273;
        printf("O resultado da conversao e: %d", tempResult);
        printf("°C");
    }
    else if (p1 == 3 && p2 == 2){
        tempResult = (temp1 - 273,15) * 9/5 + 32;
        printf("O resultado da conversao e: %d", tempResult);
        printf("°F");
        
    }

    return 0;

}