#include <stdio.h>
#include "../src/carrito.h"
#include "minunit/minunit.h"

/*
 * Tests de integracion: verifican que las funciones trabajan bien
 * en combinacion, no de forma aislada.
 */

/* ═══════════════════════════════════════════════════════════════════════════
 *  PARTE D — Escribir el test guiado (ver README.md, Parte 8)
    * ═══════════════════════════════════════════════════════════════════════════ */
void test_compra_con_descuento() {
    Carrito c;
    carrito_init(&c);
    
    Producto p1 = {"Pan", 200, 3}; 
    Producto p2 = {"Leche", 350, 2};  
    
    carrito_agregar(&c, p1);
    carrito_agregar(&c, p2);
    
    int total = carrito_total(&c);
    int descuento = carrito_descuento(total, 10); 
    
    ASSERT_IGUAL(200*3 + 350*2, total);
    ASSERT_IGUAL(total - (total * 10 / 100), descuento); 
}
/* ═══════════════════════════════════════════════════════════════════════════
 *  PARTE E — Disenar un test propio (ver README.md, Parte 9)
 * ═══════════════════════════════════════════════════════════════════════════ */

/* TODO: escribir test_agregar_hasta_llenar() */

int main(void) {
    printf("=== Tests de integracion ===");
    /* Descomentar a medida que agregues las funciones: */
    test_compra_con_descuento();
    /* test_agregar_hasta_llenar();  */
    RESUMEN();
    return EXIT_CODE();
}
