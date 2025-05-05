/* Este programa calcula la suma de dos números decimales */

#include <stdio.h>

int main(void)
{
   printf("Este programa realiza la suma de dos números decimales e imprime \n el resultado en la pantalla\n");
   int entero1; /*primer número a introducir por el usuario*/
   int entero2;
   
   printf("Introduzca el primer número a sumar: \n");
   scanf("%d", &entero1);

   printf("Introduzca el segundo número a sumar: \n");
   scanf("%d", &entero2);

   int resultado = entero1 + entero2;
   printf("La suma de estos números es\n%d \n", resultado);	

   return 0;
}
