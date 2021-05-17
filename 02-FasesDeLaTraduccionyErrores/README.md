## Preprocesamiento.
1.b Preprocesamiento de archivo hello2.c
     Para empezar la primer caracteristica que se puede observar al final del archivo hello2.i es que la directiva #include<stdio.h> y el comentario "medio" fueron retirados. Esto teoricamente se debe a que el preprocesador al leer las directivas lo que hace es importar los archivos dentro de "<>" y los copia tal cual en el programa. Por otro lado con respecto al comentario el preprocesador lo que hace es eliminarlo y reemplazarlo por un espacio. Ademas cabe destacar que se pueden observar series de comandos que el preprocesador incluye en el programa asi como tambien definiciones que tiene <stdio.h>.
 
1.d Semantica de la primera linea de hello3.c
    Con respecto a la semantica de la primer linea del programa hello3.c, se puede observar que se invoca a la funcion printf con argumentos como "const char *restrict s" que quiere decir que hay un puntero llamado s de tipo restrict que apunta a un caracter constante.


    Con respecto a la semantica de la primer linea del programa hello3.c, en primer lugar el restrict en el formato const char * restrict es un "contrato" entre el código de llamada y la función printf (). Permite que printf () asuma que los únicos cambios posibles en los datos apuntados por formato ocurren en lo que hace la función directamente y no como un efecto secundario de otros apuntadores.Esto permite que printf () consista en código que no se preocupa por el cambio de formato de cadena debido a tales efectos secundarios. Dado que el formato apunta a datos constantes, printf () tampoco puede cambiar los datos. Sin embargo, esto es complementario a la función de restricción.

1.e La principal diferencia es la ca

## 2 Compilacion.

2.b $ gcc -S hello4.s 

2.c El lenguaje ensamblador es un programa que permite llevar los códigos de operación y operandos en forma de instrucciones o nemónicos fácilmente entendibles e identificables por el programador a códigos de lenguaje máquina que se presentan con números hexadecimales en memoria.  

2.d $ gcc -c hello4.s

## 3 Vinculación.

3.a $ gcc hello4.o -o hello4
     No se pudo generar el ejecutable ya que hay un error y es que la funcion prontf no pertenence a la biblioteca estandar por lo tanto cuando el linker o ensamblador la quiera buscar no la va a encontrar.

3.b Solo corregi la sintaxis de la funcion prontf a printf
    $ gcc hello5.c -o hello5

3.c $ ./hello5.exe
    La respuesta es 4200688

    El hecho de que aparezca el numero 4200688 es porque printf busca en memoria el valor de un entero hasta hallar un cero y corta, mostrando el valor de la posicion de memoria.

## 4 Correccion de Bug.

4.a Corregi borrando "%d" para que asi printf no busque en memoria y imprima un valor cualquiera.

$ ./hello6.exe
La respuesta es 

## 5 Remoción de prototipo.

5.b Primero cabe destacar que no se haya ninguna directiva de preprocesador como hemos utilizado en programas anteriores y es por eso que aparecen advertencias como: 

note: include '<stdio.h>' or provide a declaration of 'printf'
  +++ |+#include <stdio.h>
    1 | int main(void){

La compilación finalizó con advertencias... 

Sin embargo la funcion printf compila de forma implicita sin ningun error igualmente. 
El hecho de pasarle y agregarle como parametro la variable "i" evita que suceda el bug visto en hello6.c de buscar en memoria hallar un cero y que se imprima el valor de la variable entera que printf espera y que le pasamos como parametro.

## 6 Compilacion Separada: Contratos y Modulos.

6.b Para este caso lo que hice fue importar con un include todo el codigo que habia en el archivo studio1.c que en este caso es la declaracion de la funcion prontf que simplemente es la funcion printf y funciono.

6.c En el caso de eliminar el argumento "int i" aparece un error ya que la funcion prontf espera recibir una declaracion especifica o unos puntos suspensivos "..." que representan .  

