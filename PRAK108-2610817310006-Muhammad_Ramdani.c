#include <stdio.h>

int main()
{
    int Pak_Dengklek_jogging = 5;
    int Jarak_Tempuh = 14;
    float Pi = 3.14;

    float keliling_taman = (float) Jarak_Tempuh / Pak_Dengklek_jogging;
    float Jari_jari = keliling_taman / (2 * Pi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", Pak_Dengklek_jogging);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", Jarak_Tempuh);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", Jari_jari);
}