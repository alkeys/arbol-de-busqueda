
#include <stdio.h>
#include <stdlib.h>
#include "head.h"


/*
 * 
 */
int main(int argc, char** argv) {
   Arbol *mi_arbol;
   Arbol *aux;
   mi_arbol=nuevoNodo(9);
   insertar(mi_arbol,10);
   insertar(mi_arbol,11);
   insertar(mi_arbol,12);
   aux=buscar(mi_arbol,10);
   printf("%d",aux->Dato);
   printf("%d",alturaArbol(mi_arbol,11));
   
    
    return (EXIT_SUCCESS);
}

