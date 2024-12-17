#include <stdio.h>

int main() {
    // Vong lap in bang cuu chuong tu 1 den 9
    for (int i = 1; i <= 9; i++) {
        printf("Bang cuu chuong cua %d:\n", i);

        // Vong lap trong de tinh tu 1 den 10 cho bang cuu chuong 
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
