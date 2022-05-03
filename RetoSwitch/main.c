#include <stdio.h>
#include <stdlib.h>
//Programa que pide continuar con la historia
int main()
{
    printf("Estas navegando en el mar y ves tres objetos: \n");
    printf("Escribe 1 si deseas seguir a las gaviotas \n");
    printf("Escribe 2 si deseas ver lo que hay en la botella \n");
    printf("Esribe 3 si deseas ir a la pequeña isla \n");
    int option;
    scanf("%i",&option);
    switch(option)
    {
    case 1:
        printf("Sigues a las gaviotas y te llevan a un puerto");
        break;
    case 2:
        printf("La botella tiene un mensaje de un hombre perdido");
        break;
    case 3:
        printf("En la isla no hay nada que te pueda ayudar a sobrevivir");
        break;
    default:
        printf("Elegiste una opción no válida");
        break;
    }
    return 0;
}
