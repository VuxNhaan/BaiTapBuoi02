#include <stdio.h>
#include <math.h>

// Hàm kiểm tra xem một số có phải là số chính phương hay không
int isPerfectSquare(int num) {
    int sqrt_num = sqrt(num);
    return sqrt_num * sqrt_num == num;
}

// Hàm đếm số chính phương và in ra các số đó nhỏ hơn n
void countAndPrintPerfectSquares(int n) {
    int count = 0; // Biến đếm số lượng số chính phương
    printf("Cac so chinh phuong nho hon %d la: ", n);
    // Lặp qua tất cả các số từ 1 đến n-1
    for (int i = 1; i < n; i++) {
        // Kiểm tra xem số có phải là số chính phương không
        if (isPerfectSquare(i)) {
            count++; // Tăng biến đếm lên 1
            printf("%d ", i); // In số chính phương ra màn hình
        }
    }
    printf("\nTong so chinh phuong la: %d\n", count); // In tổng số chính phương ra màn hình
}

// Hàm main
int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    countAndPrintPerfectSquares(n); // Gọi hàm để đếm và in ra các số chính phương nhỏ hơn n
    return 0;
}
