#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kutuphane //k�t�phane i�erisindeki bilgilerin tan�mlanmas�
{
  char kitap_adi[30];  //kitap ad�
  char kitap_yazari[30];  // kitab�n yazar�
  int sayfa_sayisi;  //kitap sayfa say�s�
  float fiyat;  //kitab�n fiyat�

};


int main()
{
    struct kutuphane kt[100]; //max 100 kitap
    char yazar[30]; //case 3 i�in kullan�c�dan yazar ad� alma i�lemi
    int i = 0; // Kitap eklerken indeks
    int j = 0; // d�ng� de�i�keni
    int girdi = 0; //ana ekranda kullan�c� secimini alma

    printf("***************************Kutuphane**************************\n");
    printf("\n");



       while(girdi != 5) //girdi 5 oldu�unda whileden ��k ve case 5 yard�m� ile program� sonland�r
        {
            //men� se�enekleri
            printf("\n1. Kitap Bilgilerini Ekleyiniz\n");
            printf("2  Kitap Bilgilerini Goster\n");
            printf("3. Yazara Ait Tum Kitap Bilgilerini Listele\n");
            printf("4. Kutuphanedeki Toplam Kitap Sayisini Goster\n");
            printf("5. Cikis\n");


         printf("Lutfen bir secim yapiniz\n");
         scanf("%d",&girdi);
         getchar();

           switch(girdi)
           {
            case 1: //kitap bilgilerinin girilmesi
                printf("\nKitap adini giriniz = ");
                fgets(kt[i].kitap_adi,sizeof(kt[i].kitap_adi),stdin); //bo�luklu girdiyi al
                kt[i].kitap_adi[strcspn(kt[i].kitap_adi,"\n")]=0; // \n i sil

                printf("\nKitap yazarini giriniz = ");
                fgets(kt[i].kitap_yazari,sizeof(kt[i].kitap_yazari),stdin); //bo�luklu girdiyi al
                kt[i].kitap_yazari[strcspn(kt[i].kitap_yazari,"\n")]=0; // \n i sil


                printf("\nSayfa sayisini giriniz = ");
                scanf("%d",&kt[i].sayfa_sayisi);
                getchar(); //her scanf den sonra kullan�lacak \n i al�p bo� b�rakmas�n

                printf("\nFiyatini giriniz = ");
                scanf("%f",&kt[i].fiyat);
                getchar();

                i++; //bir sonraki kitap i�in art

                 break;


            case 2: // t�m kitap bilgilerinin g�sterilmesi

                 for(j=0;j<i;j++)
                 {
                     printf("\n%d. Kitap",j+1);
                     printf("\nKitap adi = %s",kt[j].kitap_adi);
                     printf("\n Kitabin yazari = %s",kt[j].kitap_yazari);
                     printf("\n Kitap sayfa sayisi = %d",kt[j].sayfa_sayisi);
                     printf("\n Kitap fiyati = %.2f\n",kt[j].fiyat);


                 }


                 break;


            case 3: // girilen yazara ait kitap bilgilerinin verilmesi
                printf("\nLutfen yazar adini giriniz\n");
                fgets(yazar,sizeof(yazar),stdin);
                yazar[strcspn(yazar,"\n")]=0;
                for(j=0;j<i;j++)
                {
                    if(strcmp(yazar,kt[j].kitap_yazari)==0)
                    {
                        printf("\nYazar %s kitaplari\n",yazar);
                        printf("Kitap adi %s\n",kt[j].kitap_adi);
                        printf("Kitabin sayfa sayisi %d\n",kt[j].sayfa_sayisi);
                        printf("Kitabin fiyati %.2f\n",kt[j].fiyat);
                        printf("\n");
                    }
                }


                break;


            case 4: //toplam kitap say�s�

                 printf("\nKutuphanede toplam %d kitap var\n",i);
                break;


            case 5: //��k��
                exit(0);

             default: // Ge�ersiz giri�
                printf("\nLutfen 1-5 arasinda bir sayi giriniz.\n");

            }

        }













    return 0;
}



