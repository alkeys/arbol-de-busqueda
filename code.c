#include "head.h"
#include <stdio.h>

Arbol *nuevoNodo(dato Dato)
{
    Arbol *newARbol = (Arbol *)malloc(sizeof(Arbol));
    newARbol->Dato = Dato;
    newARbol->der = NULL;
    newARbol->izq = NULL;
    return newARbol;
}

void insertar(Arbol *nodo, int dato)
{
    if (nodo == NULL)
    {
        nodo = nuevoNodo(dato);
        return 0;
    }
    //si es mallor se ira ala deracha xD
    if (nodo->Dato < dato)
    {
        if (nodo->der == NULL)
        {
            nodo->der = nuevoNodo(dato);
        }else{
            insertar(nodo->der,dato);
        }
    }
    else
    {
        //verficar si esta vacio el nodo 
        if(nodo->izq=NULL){
            nodo=nuevoNodo(dato);
        }else{
            insertar(nodo->izq,dato);
        }
    }
}
