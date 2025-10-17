#include <stdio.h>

int main() {
    int filas, columnas;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    int Yepes[100][100];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            Yepes[i][j] = 0;
        }
    }

    for (int i = 0; i < filas && i < columnas; i++) {
        Yepes[i][i] = 1;
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", Yepes[i][j]);
        }
        printf("\n");
    }

    return 0;
}
