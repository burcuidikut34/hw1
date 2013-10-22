//**BURCU IDIKUT**//
//**22.10.2013**//

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char kullanici_adi[20];
	char sistem_kullanici_adi[20] = "bidikut"; //Sistemde kayitli olan kullanici adi
	int sifre, islem_no;
	int sistem_sifre = 12345; //Sistemde kayitli olan sifre
	float hesap_bakiyesi = 1200.00;
	float yatirilacak_miktar;
	float cekilecek_miktar;
	int hesap_numarasi;
	float transfer_miktari;

	printf("Lutfen kullanici adinizi giriniz:");
	gets_s(kullanici_adi);

    //Kullanici adinin kontrolu
	if (strcmp(kullanici_adi,sistem_kullanici_adi) != 0) 
	{
		printf("Kullanici adinizi yanlis girdiniz, lutfen tekrar deneyin.\n");
	}
	else
	{
		printf("Lutfen sifrenizi giriniz:");
		scanf_s("%d", &sifre);

		//Sifre kontrolu...
		if (sifre != sistem_sifre)
		{
			printf("Sifrenizi yanlis girdiniz, lutfen tekrar deneyin.\n");
		}
		else{

		    //Menu islem secimi...
            printf("\nMerhaba %s\n", kullanici_adi);
			printf("\n***** Burcu Bankasina Hosgeldiniz *****\n");
			printf("\n");
			printf("\n-----MENU-----\n\n");
			printf("1-Hesap Goruntule\n");
			printf("2-Hesaba Para Yatir\n");
			printf("3-Hesaptan Para Cek\n");
			printf("4-Baska Bir Hesaba Para Gonder\n");
			printf("5-Cikis\n");
			printf("\n");
			printf("Lutfen Isleminizi Seciniz:");
			scanf_s("%d", &islem_no);
			printf("\n");

			switch (islem_no)
			{
				//Hesap goruntuleme islemi
				case 1:
					printf("\nMevcut Bakiyeniz: %5.2f", hesap_bakiyesi);
					break;

                //Para yatırma islemi
                case 2:
					printf("\nMevcut Bakiyeniz: %5.2f", hesap_bakiyesi);
					printf("\nLutfen Hesabiniza Yatirmak Istediginiz Miktari Giriniz:");
					scanf_s("%f", &yatirilacak_miktar);
					hesap_bakiyesi = hesap_bakiyesi + yatirilacak_miktar;
					printf("\nMevcut Bakiyeniz: %5.2f", hesap_bakiyesi);
					break;

                //Para cekme islemi
                case 3:
					printf("\nMevcut Bakiyeniz: %5.2f", hesap_bakiyesi);
					printf("\nLutfen Hesabinizdan Cekmek Istediginiz Miktari Giriniz:");
					scanf_s("%f", &cekilecek_miktar);

					//Bakiye kontrolu
					if (cekilecek_miktar > hesap_bakiyesi)
					{
						printf("\nYetersiz bakiye!");
						break;
					}
					else
					{   
						hesap_bakiyesi = hesap_bakiyesi - cekilecek_miktar;
						printf("\nMevcut Bakiyeniz: %5.2f", hesap_bakiyesi);
					}
					break;

                //Transfer islemi
				case 4:
					printf("\nMevcut Bakiyeniz: %5.2f", hesap_bakiyesi);
					printf("\nPara transferi yapmak istediginiz hesap numararasini giriniz:");
					scanf_s("%d", &hesap_numarasi);
					printf("\nTransfer etmek istediginiz miktari giriniz:");
					scanf_s("%f", &transfer_miktari);

					//Bakiye kontrolu...
					if (transfer_miktari > hesap_bakiyesi)
					{
						printf("\nYetersiz bakiye!");
						break;
					}
					else
					{
						hesap_bakiyesi = hesap_bakiyesi - transfer_miktari;
						printf("\nMevcut Bakiyeniz: %5.2f", hesap_bakiyesi);
						printf("\nParaniz %d no.lu hesaba basariyla transfer edilmistir.", hesap_numarasi);
					}

					break;
                //Islem yapmadan cikis
				case 5:
					
					break;
                //Menude olmayan bir islem secimi
				default:
					printf("\n1, 2, 3, 4, 5 disinda bir sayi girdiniz...\n");
					printf("\nProgrami tekrar calistiriniz...\n");

					break;
				}

		}
	}
	printf("\n\nBurcu Bankasini Kullandiginiz Icin Tesekkur Ederiz, Gule Gule...");
	_getch();
}