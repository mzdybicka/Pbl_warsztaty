#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
const int MAX_LICZBA = 100;
const int MIN_LICZBA =10;

srand(time(NULL));
int los = rand() % (MAX_LICZBA-MIN_LICZBA + 1) + MIN_LICZBA;
printf("liczba losowa: %d", los);
}

