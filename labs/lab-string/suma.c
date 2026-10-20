#include <stdio.h>
#include "Conversion.h"

/*
 * suma — imprime la suma de todos los argumentos interpretados como enteros.
 *
 * Uso: ./suma 1 2 3    →  6
 *      ./suma -5 10    →  5
 *
 * Pista: usa ToInteger de Conversion.h para convertir cada argumento.
 *        Iterá con puntero (char **arg), no con indice entero.
 */

/*
 * suma — imprime la suma de todos los argumentos enteros pasados por consola.
 *
 * Uso: ./suma 5 10 -3 -> 12
 */
int main(int argc, char *argv[]) {
    (void)argc; // Evita warnings si no usamos argc directamente

    int total = 0;

    // Iteramos con un puntero comenzando desde argv[1]
    for (char **arg = argv + 1; *arg != NULL; arg++) {
        total += ToInteger(*arg);
    }

    // Imprimimos el resultado final seguido de un salto de línea
    printf("%d\n", total);

    return 0;
}