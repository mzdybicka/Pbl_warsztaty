#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
   const int MAX_LICZBA = 10;
   srand(time(NULL));
   int losowa_liczba = rand() % MAX_LICZBA +1;
   int liczba_prob = 0;
   int odpowiedz = 0;
   
   do {
    printf("Podaj liczbę od 1 do %d (0 konczy gre)", MAX_LICZBA);
    scanf("%d", &odpowiedz);
    if(odpowiedz == 0){
        puts("Koniec gry");
        break;
        
     
    }
    liczba_prob++;
    
   } while (odpowiedz!=losowa_liczba); // czemu !=, a nie ==
    printf("Zgadłeś po %d próbach", liczba_prob);
   


}

