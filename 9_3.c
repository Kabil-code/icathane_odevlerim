//kısım1
#include <stdio.h>

int main()
{
    int sayi = 10;
    int * isaretci;

    
    isaretci = &sayi;

    printf("sayi değişkeninin adresi = %d\n", &sayi);
    printf("sayi değişkeninin içeriği = %d\n", sayi);

    printf("isaretci değişkeninin adresi = %d\n", &isaretci);
    printf("isaretci değişkeninin içeriği = %d\n", isaretci);
    printf("isaretci değişkeninin işaret ettiği değer = %d\n", *isaretci);

  
}
//kısım2
#include <stdio.h>

int main()
{
    int sayi1, sayi2, toplam;
    int *isaretci1, *isaretci2;

    isaretci1 = &sayi1;
    isaretci2 = &sayi2; 

    printf("İki sayı giriniz: ");
    scanf("%d%d", isaretci1, isaretci2); 

    toplam = *isaretci1 + *isaretci2;

    printf("Toplam = %d", toplam);

   
}
