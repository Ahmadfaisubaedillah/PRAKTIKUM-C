#include <stdio.h>

int main() {
    char nama[50];
    int nilai;

    // Input
    printf("Masukkan nama mahasiswa: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    // Output
    printf("\nNama: %s", nama);
    printf("Nilai: %d\n", nilai);

    return 0;
}