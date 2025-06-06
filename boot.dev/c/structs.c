#include <stdio.h>
int main(){

   //una struct agrupa varios datos bajo un solo nombre
   // sirve para representar una entidad completa que tiene varias caracteristicas.
   // son solo data, no tiene comportamientos
   struct Persona{
       char *name;
       int edad;
       float estatura;
   };

   //zero initializer
   // inicializa todas las caracteristicas a 0
   struct Persona odin = {0};

   //positional initializer
   struct Persona fer = {"odin", 28, 123};

   //Designated initializer
   struct Persona fernando = {
       .name = "odin",
       .edad = 28,
       .estatura = 178
   };

   //acceder a los fields de una struct
   // se accede con el operador . "punto"
   fer.edad = 31;

   //permite regresar varios valores de una funcion con una struct

   //typedef
   // sirve para darle un nuevo nombre a un tipo de dato ya existente

   typedef struct perro {
       char *name;
       float weight;

   }perro_t;

   perro_t pinto = {.name = "pikito",.weight = 55.5};

   //ordenar los campos de una struct desde el mas grande ayuda a reducir el padding.






}
