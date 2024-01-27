#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//structure pour stocker les information d'une tache
struct Tache {
  char description[100];
  char date[20];
  int priorite;
};

//tableau pour stocker les taches
struct Tache liste [100];
int tachenombre = 0;

//fonction pour ajouter une nouvelle tache
void ajouter(){
     struct Tache nvtache;

     printf("Description de la tache : ");
     scanf(" %[^\n]",&nvtache.description);

     printf("Date d'echeance : ");
     scanf("%s",&nvtache.date);

     printf("Priorite (1 OU 2): ");
     scanf("%d",&nvtache.priorite);

     liste[tachenombre++] = nvtache;
     printf("Tache ajoutee avec succes. \n");
}

//fonction pour afficher la liste des taches
void affichertaches(){
    int i;
     if(tachenombre == 0){
        printf("Aucune tache a afficher");
     }
     else {
      printf("liste des taches : \n\n");
      for(i=0;i<tachenombre;i++){
        printf("tache %d : \n",i+1);
        printf("Description : %s\n",liste[i].description);
        printf("Date d'echeance : %s\n",liste[i].date);
        printf("Priorite : %d\n",liste[i].priorite);
      }
     }
}

int main(){
    int choix;
    do {
    // Afficher le menu
    printf("\nMenu Principal :\n");
    printf("1. Ajouter une Tâche\n");
    printf("2. Afficher la Liste des Tâches\n");
   /* printf("3. Modifier une Tâche\n");
    printf("4. Supprimer une Tâche\n");
    printf("5. Ordonner les Tâches par Date d'Échéance\n");
    printf("6. Filtrer les Tâches par Priorité\n");*/
    printf("0. Quitter\n");
    printf("Saisir votre choix : ");
    scanf("%d", &choix);

    // Exécuter l'action correspondante
    switch (choix) {
    case 1:
      ajouter();
      break;
    case 2:
      affichertaches();
      break;
   /* case 3:
      modifyTask();
      break;
    case 4:
      deleteTask();
      break;
    case 5:
      sortByDeadline();
      break;
    case 6:
      printf("Saisir la priorité à filtrer : ");
      scanf("%d", &priority);
      filterByPriority(priority);
      break;*/
    case 0:
      printf("Programme termine.\n");
      break;
    default:
      printf("Choix invalide. Veuillez réessayer.\n");
    }
  } while (choix != 0);
}
