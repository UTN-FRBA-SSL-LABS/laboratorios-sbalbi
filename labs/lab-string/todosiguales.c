#include <stdio.h>
#include "String.h"

/*
 * todosiguales — imprime 1 si todos los argumentos son iguales, 0 si no.
 *
 * Uso: ./todosiguales hola hola hola  →  1
 *      ./todosiguales hola mundo      →  0
 *
 * Pista: compara cada argumento contra argv[1] usando AreEqual.
 *        Iterá con puntero (char **arg), no con indice entero.
 */
int main(int argc, char *argv[]) {
    // Si no hay suficientes argumentos (o solo hay uno), manejamos el caso base
    if (argc < 2) {
        printf("1\n");
        return 0;
    }

    // Iteramos con un puntero comenzando desde argv[1]
    for (char **arg = argv + 1; *arg != NULL; arg++) {
        // Si alguno es distinto de argv[1], imprimimos 0 y salimos
        if (AreEqual(*arg, argv[1]) == 0) {
            printf("0\n");
            return 0;
        }
    }

    // Si el bucle termina sin encontrar diferencias, todos son iguales
    printf("1\n");
    return 0;
}
