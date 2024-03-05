#include <stdio.h>

double hitungKelilingPersegi(double sisi)
{
    return 4 * sisi;
}

double hitungLuasPersegi(double sisi)
{
    return sisi * sisi;
}

double hitungVolumeKubus(double sisi)
{
    return sisi * sisi * sisi;
}

int main()
{
    double panjangSisi;

    printf("Masukkan panjang sisi: ");
    scanf("%lf", &panjangSisi);

    printf("Keliling persegi: %.2lf\n", hitungKelilingPersegi(panjangSisi));
    printf("Luas persegi: %.2lf\n", hitungLuasPersegi(panjangSisi));
    printf("Volume kubus: %.2lf\n", hitungVolumeKubus(panjangSisi));

    return 0;
}