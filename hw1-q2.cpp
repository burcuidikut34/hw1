// 2013.10.17
// Burcu Idikut 
//
// Odev 1 - Soru 2
// 4 Basamakli Sayiyi Basamaklarina Ayirma

#include<stdio.h>
#include<conio.h>
void main()

{
	// Degisken tanimlamalari
	int sayi, birler, onlar, yuzler, binler;

	// Kullanicidan girdi alma
	printf("4 haneli bir sayi giriniz:");
	scanf("%d", &sayi);
	
	// Basamakara ayirma islemi
	birler = sayi % 10;
	onlar = (sayi / 10) % 10;
	yuzler = (sayi / 100) % 10;
	binler =(sayi / 1000) % 10;

	// Ayrilan basamaklari ekrana bastirma
	printf("Girilen sayi: %d\n", sayi);
	printf("%d tane binlik sayi\n", binler);
	printf("%d tane yuzluk sayi\n", yuzler);
	printf("%d tane onluk sayi\n", onlar);
	printf("%d tane birlik sayi vardir.\n", birler);
	
	getch();

}