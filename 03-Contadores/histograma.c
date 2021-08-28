#include <stdio.h>
#include <string.h>
#include "histograma.h"

void histograma(const char *nombreArchivo){
    FILE* file = fopen(nombreArchivo, "r");
    int longitud = 0, contador = 0, posicionesTotalesEnArray;
    int longitudes[100];

    //Leo ints y los agrego al array mientras no llegue al EOF
    fscanf(file, "%d", &longitud);
    while (!feof(file)){
        longitudes[contador] = longitud;
        fscanf(file, "%d", &longitud);
        //Uso el contador para luego saber hasta donde tengo que leer del array para el histograma
        contador ++;
    }

    //Guardo la posición máxima del array
    posicionesTotalesEnArray = --contador;
    //Reseteo el contador
    contador = 0;
    fclose(file);
    
    //Imprimo el histograma
    do
    {
        if (contador != 0 || !strcmp(nombreArchivo, "longitudesGoto.txt"))
            printf("%3d|", contador);
        for(int i = 0 ; i < longitudes[contador]; i++)
            printf("%c",'*');
        printf("\n");
        contador++;
    } while(contador <= posicionesTotalesEnArray);
    printf("\n \t L o n g i t u d \n");
}