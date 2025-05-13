/* Uso de instrucciones if, operadores de relación y operadores de igualdad  */

#include <stdio.h>

/* La función main inicia la ejecución del programa */
int main(){
   int num1; /*Primer número que ingresa el usuario y se almacena */
   int num2; /*Segundo número que ingresa el usuario y se almacena */
   printf("Este programa le dice qué tipo de relación hay entre dos números \n");
   printf("enteros \n");
   printf("Ingrese los números: \n");

   scanf("%d%d", &num1, &num2); /* lectura de los enteros */

   if (num1 == num2) {
	 printf("Posición en memoria del num1: %p \n", (void*)&num1);
      	 printf("Posición en memoria del num2: %p \n", (void*)&num2);

	 printf("%d es igual a %d \n", num1, num2);
   }

   return 0;
}
