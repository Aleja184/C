#include <stdio.h>
#include <stdlib.h>
//Programa para hacer la conversión de pesos colomabianos a dolares, y viceversa.
float change_pesos(float peso){ //Función para hacer el cambio de peso a dolar
    peso = peso*0.00027;
    return peso;
}
float change_dollar(float dollar){//Función para hacer el cambio de dolar a peso
    dollar = dollar*3760.86;
    return dollar;
}
int main()
{
    float pesos = 0;
    float dollar = 0;
    char letter;
    printf("Presione P si quiere hacer la conversión a dolar: \nPresione D si quiere hacer la conversión a peso:\n");
    scanf("%c",&letter);
    while(letter!='P' && letter!= 'p' && letter!='d' && letter!='D'){
        printf("Letra equivocada, intente de nuevo: ");
        scanf("%c",&letter);
    }
    if(letter == 'P' || letter=='p'){
        printf("Ingrese los pesos: \n");
        scanf("%f",&pesos);
        printf("El cambio a dollar es: \n%f",change_pesos(pesos));
    }else if(letter== 'D' || letter=='d'){
        printf("Ingrese los dollar: \n");
        scanf("%f",&dollar);
        printf("El cambio a peso es:\n %f",change_dollar(dollar));
    }

    return 0;
}
