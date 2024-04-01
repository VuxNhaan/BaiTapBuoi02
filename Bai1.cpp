#include <stdio.h>

// Hàm kiểm tra xem một số có phải là số nguyên có 2 chữ số và là bội của 7 hay không
int kiemtra(int num) {
    return num >= 10 && num <= 99 && num % 7 == 0;
}

// Hàm main
int main() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7 la: ");
    
    // Lặp qua tất cả các số nguyên có 2 chữ số (từ 10 đến 99)
    for (int i = 10; i < 100; i++) {
        // Kiểm tra xem số có phải là bội của 7 hay không, nếu đúng thì in ra
        if (kiemtra(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

	return;
}
