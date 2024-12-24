//kısım1

#include <stdio.h>
#include <math.h> // pow() fonksiyonunu kullanabilmek için

int main()
{
    double taban, kuvvet, sonuc;

     
    printf("Taban değerini giriniz: ");
    scanf("%lf", &taban);
    printf("Kuvvet değerini giriniz: ");
    scanf("%lf", &kuvvet);

  
    sonuc = pow(taban, kuvvet);

    printf("%.2lf ^ %.2lf = %.2lf", taban, kuvvet, sonuc);

   
}

//kısım 2

#include <stdio.h>
#include <math.h> // sqrt() fonksiyonunu kullanabilmek için

int main()
{
    double sayi, karekok;

   
    printf("Karekökü hesaplanacak sayıyı giriniz : ");
    scanf("%lf", &sayi);

   
    karekok = sqrt(sayi);

   
    printf("%.2lf sayısının karekökü = %.2lf", sayi, karekok);

  
}

//kısım3

#include <stdio.h>

int main()
{
    float ana_para, zaman, faiz_orani, faiz_miktari;

   
    printf("Ana para miktarını giriniz: ");
    scanf("%f", &ana_para);

    printf("Zamanı giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranını giriniz: ");
    scanf("%f", &faiz_orani);

    // Basit faiz hesabı ile faiz miktarını hesapla 
    faiz_miktari = (ana_para * zaman * faiz_orani) / 100;

   
    printf("Basit faiz hesabı ile hesaplanan faiz miktarı = %f", faiz_miktari);

  
}

//kısım4

#include <stdio.h>

int main()
{
    float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;

   
    printf("Ana para miktarını giriniz: ");
    scanf("%f", &ana_para);

    printf("Zamanı giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranını giriniz: ");
    scanf("%f", &faiz_orani);

    //Basit faiz hesabı ile faiz miktarını hesapla 
    basit_faiz_miktari = (ana_para * zaman * faiz_orani) / 100;

    
    printf("Basit faiz hesabı ile hesaplanan faiz miktarı = %f", basit_faiz_miktari);

    // Bileşik faiz hesabı ile faiz miktarını hesapla 
	bilesik_faiz_miktari = ana_para * (pow((1 + faiz_orani / 100), zaman));

   
    printf("Bileşik faiz hesabı ile hesaplanan faiz miktarı = %f", bilesik_faiz_miktari);

   
}