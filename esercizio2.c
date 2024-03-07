#include <stdio.h>

void print_menu ();
int gioca_partita();

int main () {

char scelta= {'\0'};

print_menu();

scanf(" %c", &scelta);

if (scelta == 'B')
        {
        printf("Grazie per aver giocato, alla prossima\n");
        return 0;
        }

while (scelta == 'A')
        {
            gioca_partita();
            print_menu();
            scanf (" %c", &scelta);

        }     

return 0;           
}

void print_menu()

{
printf("Start menu:\n");
printf("A >> Iniziare una nuova partita\nB >> Uscire dal gioco\n");
printf("Inserisci la lettera corrispondente alla tua scelta:");

}

int gioca_partita ()

{

int punteggio = 0;
char nome[20]= {'\0'};
char risposta1, risposta2;
printf("Inserisci il tuo nome:\n");
scanf(" %s", &nome);

printf("Domanda numero 1:\n");
printf("Vincitore F1 2001?\n");
printf("A >>> Schumacher\nB >>> Vettel\nC >>> Trulli\n");
printf("Inserire la risposta:");
scanf(" %c", &risposta1);

//gestiamo la casistica della risposta esatta, ipotizziamo sia la B, ed aggiungiamo 1 punto allo score totale

if (risposta1 = 'A')
        {
        punteggio++;
        }

printf("Domanda numero 2:\n");
printf("Mondiali vinti Hamilton?\n");
printf("A >>> 5\nB >>> 7\nC >>> 8\n");
printf("Inserisci la risposta:");
scanf(" %c", &risposta2);

// gestiamo la casistica della risposta esatta per la seconda domanda, ipotizziamo sia la A, ed aggiungiamo 1 punto allo score tot

if (risposta2 == 'B')
        {
        punteggio++;
        }

printf("Partita conclusa, punteggio totale totalizzato da %s: %d\n", nome, punteggio);

return 0;
}