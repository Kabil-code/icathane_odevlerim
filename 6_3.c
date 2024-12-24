#include <stdio.h>

int main(){

int sayi1 , sayi2;
int toplam , fark , carp , mod;
float bolum;

printf("lütfen2sayigirin:");
scanf("%d%d",&sayi1,&sayi2);

toplam = sayi1 +sayi2;
carp = sayi1 * sayi2;
fark = sayi1 - sayi2;
bolum = (float)sayi1 / sayi2;
mod = sayi1 % sayi2;

printf("Toplam =%d\n",toplam);
printf("carpm =%d\n",carp);
printf("fark =%d\n",fark);
printf("bolum =%f\n",bolum);
printf("mod =%d\n",mod);



}