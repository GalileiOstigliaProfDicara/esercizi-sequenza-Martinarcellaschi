// Fatto inserire all’utente un prezzo e una percentuale di sconto, 
//calcolare e mostrare il prezzo pieno, il prezzo scontato e lo sconto effettuato.

#include <stdio.h>

int main (){
    int prezzo_pieno, sconto, prezzo_scontato, sconto_effettuato;
    
    printf("inserisci il prezzo pieno e una percentuale di sconto");
    scanf("%d", &prezzo_pieno);
    scanf("%d", &sconto);

    printf("il prezzo pieno è %d\n", prezzo_pieno); 
    sconto_effettuato = prezzo*sconto/100; 

    printf("lo sconto effettuato è %d\n", sconto_effettuato);
    prezzo_scontato = prezzo_pieno - sconto_effettuato; 

    printf("il prezzo scontato è di %d\n", sconto_effettuato);

    return 0;

}