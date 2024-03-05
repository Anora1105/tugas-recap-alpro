#include <stdio.h>

int main()
{
    int jumlahElemen, i;
    int array[100];

    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &jumlahElemen);

    printf("Masukkan nilai elemen array:\n");
    for (i = 0; i < jumlahElemen; i++)
    {
        scanf("%d", &array[i]);
    }

    int jumlah = 0;
    for (i = 0; i < jumlahElemen; i++)
    {
        jumlah += array[i];
    }

    printf("Hasil penjumlahan seluruh elemen array: %d\n", jumlah);

    return 0;
}
