#include <stdio.h>

int main(int argc, char const *argv[]) {
    int Yepes[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            Yepes[i][j] = 0;
        }
    }

    printf("Matriz Yepes 5x5 únicamente con ceros:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", Yepes[i][j]);
        }
        printf("\n");
    }

    return 0;
}
