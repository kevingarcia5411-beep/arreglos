#include <stdio.h>
#include <string.h>

int main()
{


    char lista [3][16];
    int longitud = strlen(lista[0]);

    for (int i = 0; i < 3; i++) {
        printf("ingresa el nombre del alumno %d: ", i + 1);

         //fgets = donde guardo, cuanto, donde viene
        fgets(lista[i], sizeof(lista[i]),stdin);}

         printf("el primer alumno es %s\n", lista[0]);

/*
         strlen(lista[0]);
         printf("la longitud de %5 es %d", lista [1],longitud);

         fgets strcpy strcmp strcat strlenght
*/


    return 0;
}
