/*Yañez Perez Michelle 
*/
#include <stdio.h>

int main() {
    float compra, total;

    printf("Ingresa el monto de la compra: ");
    scanf("%f", &compra);

    if (compra > 2500.0f) {
        total = compra * 0.92f;
    } else {
        total = compra;
    }

    printf("Total a pagar: %.2f\n", total);

    return 0;
}
