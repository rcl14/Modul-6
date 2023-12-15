#include <stdio.h>

void calculateZetsuRooms(int n, int zetsu[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", zetsu[i] * (i + 1));
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int zetsu[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }

    calculateZetsuRooms(n, zetsu);

    return 0;
}
