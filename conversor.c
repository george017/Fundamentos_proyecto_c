#include <stdio.h>
int main() {
    int opcion;
    float cantidad, resultado;
    printf("===== Conversor de Monedas =====\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opción (1-4): ");
    scanf("%d", &opcion);
    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);
    switch (opcion) {
        case 1:
            resultado = cantidad * 0.13; // Tasa de cambio (GTQ a USD)
            printf("%.2f Quetzales = %.2f Dólares\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad * 0.12; // Tasa de cambio (GTQ a EUR)
            printf("%.2f Quetzales = %.2f Euros\n", cantidad, resultado);
            break;
        case 3:
            resultado = cantidad * 7.85; // Tasa de cambio (USD a GTQ)
            printf("%.2f Dólares = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 4:
            resultado = cantidad * 8.63; // Tasa de cambio (EUR a GTQ)
            printf("%.2f Euros = %.2f Quetzales\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
    return 0;
}
