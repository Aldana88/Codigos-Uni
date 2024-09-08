include <stdio.h>

int main() {
    float T1, T2;
    float sumaTemperaturas = 0;
    int contador = 0;

    // Leer pares de temperaturas hasta que T1 sea cero
    do {
        printf("Ingrese la temperatura T1 (0 para finalizar): ");
        scanf("%f", &T1);

        if (T1 != 0) {
            printf("Ingrese la temperatura T2: ");
            scanf("%f", &T2);

            // Verificar si T1 está en el rango [5, 15]
            if (T1 >= 5 && T1 <= 15) {
                sumaTemperaturas += T1;
                contador++;
            }

            // Verificar si T2 está en el rango [5, 15]
            if (T2 >= 5 && T2 <= 15) {
                sumaTemperaturas += T2;
                contador++;
            }
        }

    } while (T1 != 0);

    // Calcular y mostrar el promedio de las temperaturas en el rango
    if (contador > 0) {
        float promedio = sumaTemperaturas / contador;
        printf("El promedio de las temperaturas entre 5 y 15 es: %.2f\n", promedio);
    } else {
        printf("No se ingresaron temperaturas en el rango [5, 15].\n");
    }

    return 0;
}
