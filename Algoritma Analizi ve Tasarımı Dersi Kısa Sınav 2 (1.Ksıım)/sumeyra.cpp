// Algoritma Analizi ve Tasarýmý Dersi KS - 2 1.Kýsým
// Sümeyra Sümer
// 5210505067



#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <climits>

#define A_BOYUTU 20
#define G_BOYUTU 10
#define MAX_AGIRLIK 10

//Max deðer için sonsuz sayý
#define SONSUZ INT_MAX

using namespace std;

void rastgeleDiziOlustur(int dizi[], int boyut);
void bubbleSort(int dizi[], int boyut);
int enBuyukAltDiziToplami(int dizi[], int boyut);
void kisaYolMatrisiHesapla(int g[][G_BOYUTU], int kisaYol[][G_BOYUTU], int boyut);
void diziYazdir(int dizi[], int boyut);
void matrisYazdir(int matris[][G_BOYUTU], int boyut);
void kisaYolYazdir(int kisaYol[][G_BOYUTU], int boyut, int enKisaMesafe);

int main() {
	
	cout << "Algoritma Analizi ve Tasarimi Dersi KS - 2 1.Kisim" << endl;
	cout << "Sumeyra Sumer" << endl;
	cout << "5210505067" << endl;
	cout << "-----------------------------------------------------------------------------------" << endl;
	
    int dizi[A_BOYUTU];
    int graf[G_BOYUTU][G_BOYUTU] = {
        { 0, 10, 3, 0, 0, 5, 0, 17, 0, 22},
        {10, 0, 5, 0, 2, 0, 13, 0, 0, 0},
        { 3, 5, 0, 2, 0, 4, 0, 21, 0, 11},
        { 0, 0, 2, 0, 7, 0, 6, 0, 0, 0},
        { 0, 2, 0, 7, 0, 6, 0, 0, 19, 0},
        { 5, 0, 4, 0, 6, 0, 9, 3, 0, 0},
        { 0, 13, 0, 6, 0, 9, 0, 4, 0, 0},
        {17, 0, 21, 0, 0, 3, 4, 0, 8, 0},
        { 0, 0, 0, 0, 19, 0, 0, 8, 0, 5},
        {22, 0, 11, 0, 0, 0, 0, 0, 5, 0}
    };
    int kisaYol[G_BOYUTU][G_BOYUTU];
    int enKisaMesafe;
    // Rastgele sayý üretici için seed
    srand(static_cast<unsigned>(time(NULL)));

    // Çalýþma süresinin hesaplanmasý
    clock_t baslangic, bitis;
    double zaman;

    baslangic = clock();
rastgeleDiziOlustur(dizi, A_BOYUTU);
cout << "Dizi:\n";
diziYazdir(dizi, A_BOYUTU);

bubbleSort(dizi, A_BOYUTU);
cout << "\nBubble Sort Sonucu:\n";
diziYazdir(dizi, A_BOYUTU);
enKisaMesafe = enBuyukAltDiziToplami(dizi, A_BOYUTU);
cout << "\nEn Buyuk Alt Dizi Toplami: " << enKisaMesafe << endl;

cout << "\nGraf:\n";
matrisYazdir(graf, G_BOYUTU);

kisaYolMatrisiHesapla(graf, kisaYol, G_BOYUTU);
cout << "\nKisa Yol Matrisi:\n";
matrisYazdir(kisaYol, G_BOYUTU);

cout << "\n" << enKisaMesafe << " icin En Kisa Yollar:\n";
kisaYolYazdir(kisaYol, G_BOYUTU, enKisaMesafe);

bitis = clock();
zaman = static_cast<double>(bitis - baslangic) / CLOCKS_PER_SEC;
cout << "\nCalisma Suresi: " << zaman << " sn\n";

return 0;
}

void rastgeleDiziOlustur(int dizi[], int boyut) {
for (int i = 0; i < boyut; i++) {
dizi[i] = rand() % (2 * MAX_AGIRLIK) - MAX_AGIRLIK;
}
}

void bubbleSort(int dizi[], int boyut) {
for (int i = 0; i < boyut - 1; i++) {
for (int j = 0; j < boyut - 1 - i; j++) {
if (dizi[j] > dizi[j + 1]) {
int tmp = dizi[j];
dizi[j] = dizi[j + 1];
dizi[j + 1] = tmp;
}
}
}
}

int enBuyukAltDiziToplami(int dizi[], int boyut) {
int enBuyukToplam = 0, simdikiToplam = 0, sayac = 0;
for (int i = 0; i < boyut; i++) {
if (simdikiToplam + dizi[i] > 0) {
simdikiToplam = simdikiToplam + dizi[i];
} else {
simdikiToplam = 0;
}
if (simdikiToplam > enBuyukToplam) {
enBuyukToplam = simdikiToplam;
sayac++;
}
}
return enBuyukToplam / sayac;
}

void kisaYolMatrisiHesapla(int graf[][G_BOYUTU], int kisaYol[][G_BOYUTU], int boyut) {
for (int i = 0; i < boyut; i++) {
for (int j = 0; j < boyut; j++) {
if (i == j) {
kisaYol[i][j] = 0;
} else if (graf[i][j] != 0) {
kisaYol[i][j] = graf[i][j];
} else {
kisaYol[i][j] = SONSUZ;
}
}
}
for (int k = 0; k < boyut; k++) {
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {
            if (kisaYol[i][k] + kisaYol[k][j] < kisaYol[i][j]) {
                kisaYol[i][j] = kisaYol[i][k] + kisaYol[k][j];
            }
        }
    }
}
}

void diziYazdir(int dizi[], int boyut) {
for (int i = 0; i < boyut; i++) {
cout << dizi[i] << " ";
}
cout << endl;
}

void matrisYazdir(int matris[][G_BOYUTU], int boyut) {
for (int i = 0; i < boyut; i++) {
for (int j = 0; j < boyut; j++) {
cout << setw(3) << matris[i][j] << " ";
}
cout << endl;
}
}

void kisaYolYazdir(int kisaYol[][G_BOYUTU], int boyut, int enKisaMesafe) {
for (int i = 0; i < boyut; i++) {
for (int j = 0; j < boyut; j++) {
if (kisaYol[i][j] == enKisaMesafe) {
cout << "Dugum " << i + 1 << " ile Dugum " << j + 1 << " arasindaki mesafe: " << kisaYol[i][j] << endl;
}
}
}
}
