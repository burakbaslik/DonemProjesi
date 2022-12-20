#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 /*                       GAZİ ÜNİVERSİTESİ 
                         TEKNOLOJİ FAKÜLTESİ
                       BİLGİSAYAR MÜHENDİSLİĞİ 
                       PROJEYİ YAPANLAR :
                       SERHAT BEŞTAŞ 22181616045
                       BURAK  BAŞLIK 22181616041
*/

int main() 
{
   
   printf("Sayi Tahmin Etme Oyunumuza Hosgeldiniz\n");
   degerlendirme();
   devamMiTamamMi();

    
}
int devamMiTamamMi()
{

    int a;

    scanf("%d",&a);

    if (a==1){

     degerlendirme();

    }else if (a==0){

        printf("Oyun Bitti İyi Gunler");

    } 


}
int rondomSayiOlusturma ()
{


    srand(time(NULL));


int a;

a=rand()%100; 

}

int degerlendirme()
{

 int tahmin=-1;

    int uretilenSayi=rondomSayiOlusturma();

     int tahminEtmeSayisi=0;

    while ( tahmin!=uretilenSayi )
    {

            printf("Tahmininizi giriniz :\n");

            scanf("%d",&tahmin);  

            tahminEtmeSayisi++;

            if(tahmin == uretilenSayi)
            {

                printf("Tebrikler ! %d  seferde sayiyi buldunuz\n" ,tahminEtmeSayisi);

                printf("Tekrar Oynamak Istiyorsaniz :1 'e Oyundan Cikmak Istiyorsaniz :0' a Basiniz\n");

            }

             else if(tahmin > uretilenSayi+50)
            {

                printf("kutup sogugu kadar soguk ve sayi yuksek, Dusurun\n");

            }

            else if(tahmin > uretilenSayi+40)
            {

                printf("cok soguk ve sayi yuksek, Dusurun\n");


            }

             else if(tahmin > uretilenSayi+30)
            {

                printf("soguk ve sayi yuksek, Dusurun\n");


            }

             else if(tahmin > uretilenSayi+20)
            {

                printf("sicak ve sayi yuksek, Dusurun\n");


            }

             else if(tahmin > uretilenSayi+10)
            {

                printf("cok sicak ve sayi yuksek, Dusurun\n");


            }

             else if(tahmin > uretilenSayi)
            {

                printf("lav kadar sicak ve sayi yuksek, Dusurun\n");


            }

            else if (tahmin < uretilenSayi-50)
            {

                printf("kutup kadar soguk ve sayi dusuk, Yukseltin\n");

            }

            else if (tahmin < uretilenSayi-40)
            {

                printf("cok soguk ve sayi dusuk, Yukseltin\n");

            }

            else if (tahmin < uretilenSayi-30)
            {

                printf("soguk ve sayi dusuk, Yukseltin\n");

            }

            else if (tahmin < uretilenSayi-20)
            {

                printf("sicak ve sayi dusuk, Yukseltin\n");

            }

            else if (tahmin < uretilenSayi-10)
            {

                printf("cok sicak ve sayi dusuk, Yukseltin\n");

            }

            else if (tahmin < uretilenSayi)
            {

                printf("lav kadar sicak ve sayi dusuk, Yukseltin\n");

            }


        }


}