#include "../lista/lista.h"
#include <stdlib.h>
#include <stdbool.h>
#include "cola.h"


Cola* cola_crear()
{
    return (Cola*)lista_crear();
}

int cola_vacia(Cola* cola)
{
    return lista_vacia((Lista*)cola);
}

void cola_enqueue(Cola* cola, int dato)
{
    lista_insertar_tail((Lista*)cola, dato);
}

int cola_dequeue(Cola* cola)
{
    return lista_eliminar_head((Lista*)cola);
}

int cola_frente(Cola* cola)
{
    if (cola_vacia(cola)) return -1;
    return ((Lista*)cola)->head->dato;
}

void cola_destruir(Cola* cola)
{
    lista_destruir((Lista*)cola);
}
// A partir de lista.h se renombra con typedef a cola.h y se utilizan o "reciclan" las funciones ya creadas para la lista






































