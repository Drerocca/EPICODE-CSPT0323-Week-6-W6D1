#include<stdio.h>
#define nome_max 15

void menu();
void domanda_1();
void domanda_2();
void domanda_3();
void punteggio_finale();
void esci();
char nome_utente[nome_max];
int punteggio = 0;

void menu() {
    char scelta_utente;
    
    printf("\n\n");
    printf("A) INIZIA UNA NUOVA PARTITA\nB) ESCI DAL GIOCO");
    scanf(" %c", &scelta_utente);
    
    if (scelta_utente == 'A' || scelta_utente == 'a') {
        domanda_1();
    } else if (scelta_utente == 'B' || scelta_utente == 'b') {
        esci();
    } else {
        printf("Scelta non valida!");
        menu();
    }
    
}

void domanda_1() {
    char risposta_1;
    printf("Si volaaaa! Inserisci il tuo nome: ");
    scanf("%s", nome_utente);
    
    printf("\nCiao %s, ecco la prima domanda!\nSe uno scoiattolo si trova in un bosco e nessuno è lì per vederlo, è ancora adorabile?\nA) Sì, sempre\nB) No, solo quando qualcuno lo vede\nC) Dipende dallo scoiattolo\n", nome_utente);
    scanf(" %c", &risposta_1);
    
    if (risposta_1 == 'A' || risposta_1 == 'a') {
        printf("Wooooooh! Risposta CORRETTA %s! +10 PUNTI !", nome_utente);
        punteggio += 10;
    } else {
       printf("La risposta corretta era la A... %s ricorda, gli scoiattoli sono sempre adorabili.", nome_utente);
    } 
    
    domanda_2();
}

void domanda_2() {
    char risposta_2;
    printf("\n\n");
    printf("Cosa fai se vedi un elefante in un cinema?\nA) Gli chiedi se ha pagato il biglietto\nB) Chiami la sicurezza\nC) Continui a guardare il film in silenzio nel rispetto di tutti i paganti\n");
    scanf(" %c", &risposta_2);
    
    if (risposta_2 == 'C' || risposta_2 == 'c') {
        printf("Wooooooh! Risposta CORRETTA %s! +10 PUNTI !", nome_utente);
        punteggio += 10;
        } else {
       printf("Ovviamente la risposta corretta era la C...Ma andiamo alla prossima!", nome_utente);
    } 
    domanda_3();
}

void domanda_3() {
    char risposta_3;
    printf("\n\n");
    printf("Qual è la capitale d'Italia?\nA) Madrid\nB) Crotone\nC) Roma\n");
    scanf(" %c", &risposta_3);
    
    if (risposta_3 == 'C' || risposta_3 == 'c') {
        printf("Wooooooh! Risposta CORRETTA %s! +10 PUNTI ! Andiamo a vedere il tuo punteggio!", nome_utente);
        punteggio += 10;
    } else {
       printf("La risposta corretta era la C... %s, non siamo qui per giudicarti, magari hai soltanto avuto una giornata pesante, ma era una domanda davvero facile messa lì giusto per aiutarti. Ma andiamo a vedere il tuo punteggio totale (...e prepariamoci al fallimento?)", nome_utente);
    } 
    punteggio_finale();
}

void punteggio_finale() {
    printf("\n\n");
    printf("Rullo di tamburi per favore...%s il tuo punteggio finale è %d!", nome_utente, punteggio);
    menu ();
}


void esci() {
    printf("Lasciatelo dire, sei una persona molto noiosa. Ciao.");
}

int main()
{
    
    printf("Benvenuto!\nProbabilmente hai grosse aspettative, lo capisco...ma nonostante io ci abbia messo una sera intera per far funzionare tutto, questo gioco è molto semplice e dura poco!");
    menu();
    return 0;
}
