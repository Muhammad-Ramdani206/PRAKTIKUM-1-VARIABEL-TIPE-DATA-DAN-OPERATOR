#include <stdio.h>

int main()
{
    int Pasukan_YuZhong = 958730;
    int Pahlawan = 5;
    int Pasukan_per_Pahlawan = Pasukan_YuZhong / Pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", Pasukan_YuZhong);
    printf("Jumlah pahlawan = %d\n", Pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan oleh setiap pahlawan adalah %d pasukan\n", Pasukan_per_Pahlawan);
}