#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Hàm kiểm tra xem một số có phải là số chính phương hay không
int isPerfectSquare(int num) {
    int squareRoot = sqrt(num);
    return squareRoot * squareRoot == num;
}

// Hàm đếm số chính phương nhỏ hơn n và in ra chúng
void countAndPrintPerfectSquares(int n) {
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    // Khởi tạo seed cho hàm ngẫu nhiên
    srand(time(NULL));
    
    // Tạo số ngẫu nhiên trong khoảng từ 1 đến 100
    int n = rand() % 100 + 1;
    
    printf("So nguyen duong ngau nhien duoc chon: %d\n", n);
    
    countAndPrintPerfectSquares(n);

    return 0;
}
