#include <stdio.h>

int main() {
    float T1, T2;
    float sumaT1 = 0, sumaT2 = 0;
    int i;

    // Leer 10 pares de temperaturas
    for (i = 1; i <= 10; i++) {
        printf("Ingrese la temperatura T1 del par %d: ", i);
        scanf("%f", &T1);

        printf("Ingrese la temperatura T2 del par %d: ", i);
        scanf("%f", &T2);

        // Sumar las temperaturas
        sumaT1 += T1;
        sumaT2 += T2;
    }

    // Calcular los promedios
    float promedioT1 = sumaT1 / 10;
    float promedioT2 = sumaT2 / 10;

    // Mostrar los resultados
    printf("El promedio de las temperaturas T1 es: %.2f\n", promedioT1);
    printf("El promedio de las temperaturas T2 es: %.2f\n", promedioT2);

    return 0;
}
