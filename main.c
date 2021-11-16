
#include <stdio.h>
#include <stdlib.h>
#include "head.h"


/*
 * 
 */
int main(int argc, char** argv) {
   Arbol *mi_arbol;
   mi_arbol=nuevoNodo(9);
   insertar(mi_arbol,10);
   insertar(mi_arbol,11);
   insertar(mi_arbol,12);
   
   mostrar(mi_arbol);
    
    return (EXIT_SUCCESS);
}

