#include <stdio.h>

void createMatrix(int rows, int cols, int values[]) {
    int matrix[rows][cols];

    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = values[k++];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int size = rows * cols;
    int values[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &values[i]);
    }

    createMatrix(rows, cols, values);

    return 0;
}
