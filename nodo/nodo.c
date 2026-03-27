#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int dato)
{
    Nodo *newNodo = (Nodo*)malloc(Nodo));
    if(newNodo != NULL) {
        newNodo->dato;
        newNodo->siguiente;
    }
    return newNodo;
}
void nodo_destruir(Nodo* nodo)
{
    if(nodo != NULL) {
        free(nodo);
    }
}
