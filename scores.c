#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Déclaration des variables
int points = 0;
char nom_utilisateur[100];

//Déclaration des fonctions externes
void afficher_menu();
void charger_scores();
void sauvegarder_score();
void addition();
void soustraction();
void multiplication();
void division();
void table_multiplication();

int main () {
    time_t debut = time(NULL);
    //Demande du nom utilisateur
    printf("Enter votre nom: ");
    scanf("%s", nom_utilisateur);

    //charger de scores
    charger_scores();

    //Initialiser de nombres aléatoires
    srand(time(NULL));

    //Afficher du menu et gestion des choix
    afficher_menu();

    // Fin de la session
    time_t fin = time(NULL);
    double duree = difftime(fin, debut);
    int minutes = duree / 60;
    int secondes = (int)duree % 60;
    printf("Durée de la session: %d minutes et %d secondes.\n", minutes, secondes);

     // Sauvegarder score à la fin
    sauvegarder_score();

    return 0;
}
