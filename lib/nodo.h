#ifndef Nodo_H
#define Nodo_H
#include <stdbool.h>

typedef int Dato;
typedef struct _Nodo Nodo;

struct _Nodo{
    Dato dato;
    Nodo* sig;
};

Nodo* crear_nodo();
bool borrar_nodo(Nodo* n);
Nodo* asignar_dato(Nodo* n, Dato d);
Dato ObtenerDato(Nodo* n);
Nodo* Asignar_referencia(Nodo* n, Nodo* e);
Nodo* ObtenerRef(Nodo* c);

#endif