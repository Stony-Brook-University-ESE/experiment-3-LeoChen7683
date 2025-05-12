#include <stdio.h>

int main() {
    int n = 1000;
    int matrix[n][n];

    int value = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = value++;
            printf("%4d ", matrix[i][j]);
        }
    }

    for (int i = n - 1; i >= 0; i--) {               
        for (int j = n - 1; j >= 0; j--) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
