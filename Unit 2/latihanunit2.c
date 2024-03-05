#include <stdio.h>

int main()
{
    int jumlahTransaksi, nominalTransaksi, totalPengeluaran = 0;

    printf("Masukkan jumlah transaksi hari ini: ");
    scanf("%d", &jumlahTransaksi);

    if (jumlahTransaksi > 0)
    {
        printf("Masukkan nominal transaksi:\n");
        for (int i = 0; i < jumlahTransaksi; ++i)
        {
            printf("Transaksi ke-%d: ", i + 1);
            scanf("%d", &nominalTransaksi);
            totalPengeluaran += nominalTransaksi;
        }
    }

    if (jumlahTransaksi <= 0)
    {
        printf("Tidak ada transaksi hari ini");
    } else {
        printf("Total pengeluaran hari ini = %d", totalPengeluaran);
    }
    

    return 0;
}
