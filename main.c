#include <stdio.h>
#include "pila/pila.h"
#include "cola/cola.h"

int main() {

    Pila* p = pila_crear();
    Cola* c = cola_crear();

    // Prueba de pila; primero 10, luego 20, sale 20 primero(LIFO)
    pila_push(p,10);
    pila_push(p,20);

    // Prueba de cola: primero 1, luego 2, debe salir 1 primero(FIFO)
    cola_enqueue(c,1);
    cola_enqueue(c,2);

    printf("=== Verificación de Lógica ===\n");
    printf("Pila (Pop debe ser 20): %d\n", pila_pop(p));
    printf("Cola (Dequeue debe ser 1): %d\n", cola_dequeue(c));

    if (pila_pop(p) == 10 && cola_dequeue(c) == 2) {
        printf("\n===Repositorio copilado correctamente===\n");
    }

    pila_destruir(p);
    cola_destruir(c);

    return 0;
}
