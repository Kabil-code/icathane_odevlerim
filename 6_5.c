//kısım1

#include <stdio.h>

main() {

   int sayi1 = 17, sayi2 = 5;
   
   int tamsayi_bolme_sonucu;
   float gercel_bolme_sonucu_float;
   double gercel_bolme_sonucu_double;
   int gercel_bolme_sonucu_float_tamsayi;

   tamsayi_bolme_sonucu = sayi1 / sayi2;
   printf("Tamsayı Bölme Sonucu = %d\n", tamsayi_bolme_sonucu );
   
   gercel_bolme_sonucu_float = (float) sayi1 / sayi2;
   printf("Gerçek Bölme Sonucu (float) = %.20f\n", gercel_bolme_sonucu_float );

   gercel_bolme_sonucu_double = (double) sayi1 / sayi2;
   printf("Gerçek Bölme Sonucu (double) = %.20f\n", gercel_bolme_sonucu_double );
   
   gercel_bolme_sonucu_float_tamsayi = (int) gercel_bolme_sonucu_float;
   printf("Gerçek Bölme Sonucu (float)'un Tamsayıya Dönüştürülmüş Hali = %d\n", 
                  gercel_bolme_sonucu_float_tamsayi);
  
}


//kısım2

#include <stdio.h>
int main()
{
	int a=35;  // 10'luk sayı düzeninde (decimal)
	int b=0b00100011; // 2'lik sayı düzeninde (binary)
	int c=0x23; // 16'lık sayı düzeninde (hexadecimal)
	
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	printf("c= %d\n",c);
	
	
}

//kısım3

#include <stdio.h>

int main()
{
    float cm, metre, km;

    // Uzunluğu santimetre cinsinden al 
    printf("Uzunluğu santimetre cinsinden giriniz: ");
    scanf("%f", &cm);

    // Çevrim işlemlerini gerçekleştir 
    metre = cm / 100.0;
    km    = cm / 100000.0;

    printf("Metre cinsinden uzunluk = %.3f m \n", metre);
    printf("Kilometre cinsinden uzunluk = %.3f km", km);

  
}