#include <stdio.h>
#include <stdlib.h>
//Programa que devuelve el inverso de una palabra
int main()
{
    printf("Cadena de caracteres \n");
    char word[50];
    printf("Ingrese una palabra: \n");
    gets(word);
    int size = strlen(word);
    char word_inverse[size];
    int acum = 0;
    for(int i=size-1;i>=0;i--){
        word_inverse[acum]=word[i];//Recorre la palabra alrevés y la agrega al array word.
        acum++;
    }
    printf("El inverso es: ");
    puts(word_inverse);

    return 0;
}
