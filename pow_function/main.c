#include <stdio.h>
#include <stdlib.h>
//Programa para hacer el resultado de una operación de potencia
int pow_function(int base, int expo){ //Función para realizar la operacion que pide como parametro la base y el exponente
    for(int i = 1; i<expo;i++){
        base*=base;
    }
    return base;
}
int main()
{
    int base;
    int expo;
    printf("Ingrese la base: \n");
    scanf("%i",&base);
    printf("Ingrese el exponente: \n");
    scanf("%i",&expo);
    printf("El resultado es: \n %i",pow_function(base,expo));
}
