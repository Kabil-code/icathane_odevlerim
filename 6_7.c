//kısım1

#include <stdio.h>

int main()
{
    int sayi1, sayi2, toplam;
    
   
    printf("İki sayı giriniz: ");

   
    scanf("%d%d", &sayi1, &sayi2);

  
    toplam = sayi1 + sayi2;

    printf("Toplam = %d", toplam);

   
}

//kısım2

#include <stdio.h>

int main()
{
    char ogrenci_notu;
    printf("Öğrenci notunu giriniz: ");

    // getchar() komutu ile notu al ve ogrenci_notu değişkeninde sakla 
    ogrenci_notu = getchar();

    //putchar() komutu ile notu çıktı olarak ver 
    putchar(ogrenci_notu);

    
}

//kısım3

#include <stdio.h>

int main()
{
    float boy, en, cevre, alan;

   
    printf("Dikdörtgenin uzunluğunu giriniz: ");
    scanf("%f", &boy);
    printf("Dikdörtgenin genişliğini giriniz: ");
    scanf("%d", &en);

    
    cevre = 2 * (boy + en);

   
    printf("Dikdörtgenin çevresi = %f birimdir", cevre);

   
    alan = boy * en;

   
    printf("Dikdörtgenin alanı = %f birim karedir", alan);

    
}

//kısım4

#include <stdio.h>

int main()
{
    float yaricap, cap, cevre, alan;
    
   
    printf("Çemberin/Dairenin yarıçapını giriniz: ");
    scanf("%f", &yaricap);

   
    cap = 2 * yaricap;
    cevre = 2 * 3.14 * yaricap;
    alan = 3.14 * (yaricap * yaricap);

    
    printf("Çemberin çapı = %.2f birimdir \n", cap);
    printf("Çemberin çevresi = %.2f birimdir \n", cevre);
    printf("Dairenin alanı = %.2f birim karedir ", alan);

    
}

//kısım5

#include <stdio.h>
#include <math.h>  
int main()
{
    float yaricap, cap, cevre, alan;
    
  
    printf("Çemberin/Dairenin yarıçapını giriniz: ");
    scanf("%f", &yaricap);

 
    cap = 2 * yaricap;
    cevre = 2 * M_PI * yaricap;
    alan = M_PI * (yaricap * yaricap);

  
    printf("Çemberin çapı = %.2f birimdir \n", cap);
    printf("Çemberin çevresi = %.2f birimdir \n", cevre);
    printf("Dairenin alanı = %.2f birim karedir ", alan);

}