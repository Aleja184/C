#include <stdio.h>
#include <stdlib.h>
//Programa que pide el ingreso de notas y devuelve el promedio de la fila
int main()
{
    float bidimensional[5][6];
    float sum;
    for(int i=0;i<5;i++){//Para leer la fila
        for(int j=0;j<6;j++){//Para leer la columna
            if(j==0){
               printf("Introduce una nota entre 6 y 10: \n");//Verificación que la nota esté entre 6 y 10
               scanf("%f",&bidimensional[i][j]);
               while(bidimensional[i][j]<6 || bidimensional[i][j]>10){
                printf("Valor erroneo, escribe una nota entre 6 y 10: \n");
                scanf("%f",&bidimensional[i][j]);
               }
               sum+=bidimensional[i][j];
            }else if(j>0 && j<5){
                printf("Introduce la nota: \n");
                scanf("%f",&bidimensional[i][j]);
                sum+=bidimensional[i][j];//A la variable sum se le suma el valor que se encuentra en la posición
            }else{
                bidimensional[i][j]= sum/5;//A la ultima posición de la matriz se le pone el promedio
            }
        }
        printf("El promedio de la fila %i es: %f \n",i+1,bidimensional[i][5]);
        sum=0;
    }
    return 0;
}
