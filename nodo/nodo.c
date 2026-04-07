#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int dato)
{
    Nodo *newNodo = (Nodo*)malloc(sizeof(Nodo));
    if(newNodo != NULL) {
        newNodo->dato=dato;
        newNodo->siguiente=NULL;
    }
    return newNodo;
}
void nodo_destruir(Nodo* nodo)
{
    if(nodo != NULL) {
        free(nodo);
    }
}
