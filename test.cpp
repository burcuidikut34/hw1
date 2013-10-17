#include<stdio.h>
#include<conio.h>
void main()

{
	int sayi, birler, onlar, yuzler, binler;
	printf("4 haneli bir sayi giriniz:");
	scanf("%d", &sayi);
	birler = sayi % 10;
	onlar = (sayi / 10) % 10;
	yuzler = (sayi / 100) % 10;
	binler =(sayi /1000) % 10;
	printf("Girilen sayi: %d\n", sayi);
	printf("%d tane binlik sayi\n", binler);
	printf("%d tane yuzluk sayi\n", yuzler);
	printf("%d tane onluk sayi\n", onlar);
	printf("%d tane birlik sayi vardir.\n", birler);
	getch();

}
