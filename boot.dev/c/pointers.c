#include <stdio.h>

int main(){

    //la memoria es un array de bytes y los datos se guardan en el array.
    // si puede imprimir la direccion de una variable con "&"
    int age = 37;
      printf("The address of age is: %p\n", &age);

    //pointer
    // es una variable que guarda una direccion de memoria.
    //las structs son pasadas por valor,
    // pasar una struct a una funcion crea una copia en la funcion.
    // modificar una struct pasada por valor solo modifica la copia.

    //syntax


    //declarar un pointer
    int *pointer_to_something;

    //obtener la direccion de una variable
    int numero1 = 42;
    int *pointer_to_num = &numero1;

    //Dereferencing Pointers
    // accede al valor almacenado en la direccion
    // tambien sirve para modificar el valor que se guarda en la direccion de memoria
    int value_at_pointer = *pointer_to_num;

    //asterisco
    // funciona para declarar un pointer
    // funciona para deferenciar el valor de un pointer

    //para acceder a la data de la struct a la que apunta el puntero
    typedef struct cats{
        int x;
        int y;
        int z;
    }cats_t;
    cats_t gato1 = {10, 20, 30};
    cats_t *ptrToPoint = &gato1;
    printf("X: %d\n", ptrToPoint->x);

}
