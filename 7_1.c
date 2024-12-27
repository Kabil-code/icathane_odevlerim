//kısım1
#include <stdio.h>

int main() {
  char karakter = 'k';
  printf("%c\n", karakter);
    
  char karsilama_mesaji[] = "Merhaba Dünya!";
  printf("%s", karsilama_mesaji);
 
 
}

//kısım2

#include <stdio.h>

int main() {
  char karsilama_mesaji1[] = "Merhaba!";
  char karsilama_mesaji2[] = {'M','e','r','h','a','b','a','!','\0'};
  
  printf("%lu\n", sizeof(karsilama_mesaji1));
  printf("\n...\n");
  printf("%lu\n", sizeof(karsilama_mesaji2));

  
}

