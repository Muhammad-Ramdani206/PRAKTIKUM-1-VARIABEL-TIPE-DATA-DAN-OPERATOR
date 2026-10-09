#include <stdio.h>

int main() {
    int A = 400000;
    int B = 350000;
    double discount_A = 0.13;
    double discount_B = 0.21;
    int total_A = A * (1 - discount_A);
    int total_B = B * (1 - discount_B);

    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", total_A);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", total_B);
}