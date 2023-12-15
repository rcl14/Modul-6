#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk mengalikan elemen-elemen dua array
void multiplyRows(int n, int row1[], int row2[], int result[]) {
    for (int i = 0; i < n; i++) {
        result[i] = row1[i] * row2[i];
    }
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int *row1 = (int *)malloc(n1 * sizeof(int));
        int *row2 = (int *)malloc(n2 * sizeof(int));

        // Menerima input untuk row1
        for (int i = 0; i < n1; i++) {
            scanf("%d", &row1[i]);
        }

        // Menerima input untuk row2
        for (int i = 0; i < n2; i++) {
            scanf("%d", &row2[i]);
        }

        int *result = (int *)malloc(n1 * sizeof(int));
        multiplyRows(n1, row1, row2, result);

        // Menampilkan hasil perkalian
        for (int i = 0; i < n1; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");

        // Membebaskan memori yang telah dialokasikan
        free(row1);
        free(row2);
        free(result);
    }

    return 0;
}
