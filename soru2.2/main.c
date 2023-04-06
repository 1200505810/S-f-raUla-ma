#include <stdio.h>
#include <stdlib.h>

int sifiraKadar(int num1, int num2) {
    int adimSayisi = 0;
    while (num1 != 0 && num2 != 0) {
        if (num1 >= num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
        adimSayisi++;
    }
    return adimSayisi;
}

int main() {
    int num1, num2;
    printf("iki tane negatif olmayan tam sayi giriniz: ");
    scanf("%d %d", &num1, &num2);
    int adimSayisi = sifiraKadar(num1, num2);
    printf("Sifiar ulasmak icin gerek adim sayisi: %d\n", adimSayisi);
    return 0;
}

