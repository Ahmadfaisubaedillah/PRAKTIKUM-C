#include <stdio.h>

int main() {
    char nama[50];
    float tugas, uts, rata;
 
    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan nilai tugas: ");
    scanf("%f", &tugas);

    printf("Masukkan nilai UTS: ");
    scanf("%f", &uts);

    rata = (tugas + uts) / 2;

    printf("\nNama: %s", nama);
    printf("Rata-rata nilai: %.2f\n", rata);

    return 0;
}