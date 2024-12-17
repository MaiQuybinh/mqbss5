#include <stdio.h>

int main() {
    int choice;    
    float num1, num2, result;  

    // Nhap hai so 
    printf("Nhap vao 2 so bat ky:\n");
    printf("So thu nhat: ");
    scanf("%f", &num1);
    printf("So thu hai: ");
    scanf("%f", &num2);

    // Menu va vong lap cac chuc nang
    do {
        printf("\n=== CALCULATOR ===\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Tong 2 so la: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Hieu 2 so la: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Tich 2 so la: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {  // Kiem tra mau khac 0 
                    result = num1 / num2;
                    printf("Thuong 2 so la: %.2f\n", result);
                } else {
                    printf("Loi! Khong the chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh. bye bye!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai!\n");
        }

    } while (choice != 5); // lap den khi thoat

    return 0;
}
