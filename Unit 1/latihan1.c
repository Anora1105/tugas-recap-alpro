#include <stdio.h>

int main()
{
    int jarak, waktu, kecepatan;

    printf("Masukkan jarak (m) dan waktu (s) dipisahkan oleh spasi: ");
    scanf("%d %d", &jarak, &waktu);

    float hasil_kecepatan = (float)jarak / waktu;

    printf("Kecepatan: %.2f m/s\n", hasil_kecepatan);

    printf("Masukkan kecepatan (m/s) dan waktu (s) dipisahkan oleh spasi: ");
    scanf("%d %d", &kecepatan, &waktu);

    float hasil_jarak = (float)kecepatan * waktu;

    printf("Jarak: %.2f m\n", hasil_jarak);

    printf("Masukkan jarak (m) dan kecepatan (m/s) dipisahkan oleh spasi: ");
    scanf("%d %d", &jarak, &kecepatan);

    float hasil_waktu = (float)jarak / kecepatan;

    printf("Waktu: %.2f s\n", hasil_waktu);

    return 0;
}
