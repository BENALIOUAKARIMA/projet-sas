#include <stdio.h>
#include <stdlib.h>
#define max 200
int i, n, j=0;
  struct compte{
  char nom[20];
  char prenom[20];
  char cin[15];
  float montant;
  };
  struct compte info[100];
  //********les fonctions********//
  void plusieurscomptes (){
         printf("donner les nombres des clients:\n ");
           scanf("%d",&n);
           for(i=0; i<n; i++){
               printf("donner les informations des clients %d: \n",i+1);
               printf("nom :");
               scanf("%s",info[i].nom);
               printf("prenom :");
               scanf("%s",info[i].prenom);
               printf("cin :");
               scanf("%s",info[i].cin);
               printf("montant :");
               scanf("%f",&info[i].montant);
               j++;
           }
  }
  void creationcompte(){
      int i=0;
      printf("entrer les information du comptes :\n");
      printf("entrer le nom\n");
      scanf("%s",info[i].nom);
      printf("entrer le prenom\n");
      scanf("%s",info[i].prenom);
      printf("entrer le numero de cin\n");
      scanf("%s",info[i].cin);
      printf("entrer le montant\n");
      scanf("%f",&info[i].montant);
      printf("le compte est creer\n");
      i++;
      j++;
        }
       void menu(){
           int choix;
          
            printf("____________ bienvenue a la banque___________\n");
            printf("********** entrer votre choix**********\n\n");
            printf("\t1: creer un compte\n");
            printf("\t2: creer plusieurs comptes\n");
            printf("\t3: les operations de la banque\n");
            printf("\t4: affichage\n");
            printf("\t5: fidelisation\n");
            printf("\t6: quitter application\n");
            scanf("%d",&choix);
            do
            {
       
             switch (choix)
             {
                 case 1:
                 printf("creer un compte: \n");
                 creationcompte();
                  break;
                  case 2:
                  printf("creer plusieurs comptes: \n");
                 plusieurscomptes();
                  break;
                  case 3:
                  printf("les operations de la banque\n");
                  break;
                  case 4:
                  printf("affichage\n");
                  break;
                  case 5:
                  printf("fidelisation\n");
                   break;
                   default:
                   printf("operation non disponible\n");
                   }
    
            
   }while(choix<1 || choix>6);
   }
   
int main()
{
    menu();
    
    
    return 0;
}