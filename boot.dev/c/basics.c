#include <stdio.h>



int main() {
    // size_of
    // sizeof nos permite obtener el size en bytes de el type de una variable
    // Use %zu is for printing `sizeof` result
    // size_t es un tipo de dato que se usa para representar tamaños
  printf("El size de un int es: %zu\n", sizeof(int));

  //loop for
  //un loop for consta de 3 partes, inicializacion, condicion, final expression
  // for(inicializacion;condition;final-expression);
  // inicializacion solo se ejcuta una vez al inicio
  // condicion, si es true ejecuta el body del loop for
  // final expression se ejecuta al final de cada iteracion.
  for(int i = 0; i <5; i++){
      printf("%d\n", i);
  }

  //while loop
  // es un loop que se ejecuta basado en una condicion
  // se siguira ejecutando mientras la condicion sea cierta
  int  i =0;
  while (i < 5) {
      printf("%d\n",i);
  }

  // Do while loop
  // revisa la condicion despues de ejcutar el codigo
  do {
      printf("%d\n", i);
      i++;
  }while (i<5);

  //pragma once
  // se escribe en el header file y le dice al compilador que solo se debe incluir una vez
  // es para evitar errores en caso de referenciar varias veces un header file en un mismo archivo
  #pragma once

  //Header guards
  // se usan para evitar que el mismo archivo se incluya mas de una vez
  // se escribe en mayusculas y con h al final.
  #ifndef MYHEADER_H
  #define MYHEADER_H

}
