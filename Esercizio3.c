//Esercizio 3 – Parallelepipedo
//Fatto inserire all’utente le dimensioni di un parallelepipedo scrivere un programma che ne 
//calcoli e restituisca all’utente il perimetro e l’area delle superfici.

#include <stdio.h>

int main () {
    int base, altezza, perimetro, area;

    printf("inserisci le dimensioni del parallelepipedo di cui vuoi calcolare l'area e il perimetro");
    scanf("%d", &base);
    scanf("%d", &altezza);
    perimetro = (base + altezza) * 2; 

    printf("il perimetro del parallelepipedo è %d\n", perimetro); 

    area = base * altezza; 
    printf("l'area del parallelepipedo è %d\n", area); 

    return 0; 

}