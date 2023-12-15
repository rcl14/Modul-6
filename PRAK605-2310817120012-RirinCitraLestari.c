#include <stdio.h>

void multiplyMatrices(int n, int A[n][n], int B[n][n], int result[n][n]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    scanf("%d", &n);

    int A[n][n], B[n][n], result[n][n];

    printf("Matriks A\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matriks B\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices(n, A, B, result);

    printf("Matriks AXB\n");
    printMatrix(n, result);

    return 0;
}