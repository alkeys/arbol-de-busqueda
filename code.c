#include "head.h"
#include <stdio.h>
#include <stdlib.h>

Arbol *nuevoNodo(dato Dato)
{
    Arbol *newARbol = (Arbol *) malloc(sizeof(Arbol));
    newARbol->Dato = Dato;
    newARbol->der = NULL;
    newARbol->izq = NULL;
    return newARbol;
}

void insertar(Arbol *nodo, int dato)
{
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


void mostrar (Arbol *arbolNodo)
{
  if (arbolNodo == NULL)
    {
      return;
    }
  printf (" %d", arbolNodo->Dato);
  mostrar (arbolNodo->der);
  mostrar (arbolNodo->izq);
}



void borrarArbol (Arbol *raiz){
    if (raiz != NULL){
        borrarArbol (raiz->izq);
        borrarArbol (raiz->der);
        free (raiz);
        raiz = NULL;
    }
}

Arbol* buscar (Arbol *raiz, int dato){
    if (raiz == NULL){
        return NULL;
    }else{
        if (dato == raiz->Dato){
            return raiz;
        }else{
            if (dato < raiz->Dato){
                return buscar (raiz->izq, dato);
            }else{
                return buscar (raiz->der, dato);
            }
        }
    }
}


int alturaArbol(Arbol *raiz, int dato){
    int H=0;
    Arbol *arbolAux=raiz;
    while (arbolAux != NULL){
        if (dato == arbolAux->Dato){           
            return H;
        }else{
            H++;
            if (dato < arbolAux->Dato){               
                arbolAux=arbolAux->izq;
            }else{
                if (dato > arbolAux->Dato){               
                    arbolAux=arbolAux->der;
                }
            }
        }
    }
printf("\nno se encontro el valor\n");
return 0;
}