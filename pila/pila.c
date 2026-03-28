#include "pila.h"
#include <stdilib.h>
#include <stdbool.h>
#include "../lista/lista.h"

Pila* pila_crear() 
{
   return(pila*)lista_crear();
}

int pila_vacia(Pila* pila)
{
   if(pila == NULL || lista_vacia((Lista*)pila)) {
    return 1;
   }
   return 0;
}

void pila_push(Pila* pila, int dato)
{
    if(pila != NULL) {
        lista_insertar_tail((Lista*)pila,dato);
    }
}

int pila_pop(Pila* pila)
{
    if (pila_vacia(pila)) {
    return -1;
    }
    return lista_eliminar_tail((Lista*)pila);
}

int pila_top(Pila* pila)
{
    if(pila_vacia(pila)) {
    return -1;
    }
    return ((Lista*)pila)->tail->dato;
}

void pila_destruir(Pila* pila)
{
    if(pila != NULL) {
        lista_destruir((Lista*)pila);
    }
}
