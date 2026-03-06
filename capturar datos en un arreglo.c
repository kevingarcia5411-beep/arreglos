#include <stdio.h>

int main()
{
    float temp1, temp2;
    int N=4;
    float temp[N];
    int dummy;


    printf("direccion de mem de 2 flotantes: &temp1 : %i, \n&temp2 %i!\n", &temp1, &temp2);
    printf ("direccion de temp[N] :%i,\n", temp);
    printf ("direcion de memoria de %temp[N]:%i,\n", &temp);
    printf ("direccion de &dummy:%i\n", &dummy);


    printf("%f\n", temp[0]=20.5);
    printf("%f\n", temp[0]=18.2);

    for(int i = 0; i < N; i++) {
        printf("hora %d: %f °C\n", i, temp[i]);
    }
    return 0;


    /* al ejecturar el programa nos arroja la direccion de memoria, ahi se ve el espacio que ocupa cada dato
    y se puede observar como en el arreglo "temp[24] la direccion de memoria es un bloque mas abajo */


}
