#include <stdio.h>
int main(){
    int choixmenu;
    printf(" bienvenue a la banque\n");
    printf(" entrer votre choix\n");
    printf("1, creer un compte\n");
    printf("2, creer plusieurs comptes\n");
    printf("3, les operations de la banque\n");
    printf("4, affichage\n");
    printf("5, fidelisation\n");
    printf("6, quitter application\n");
    scanf("%d",&choixmenu);
    switch (choixmenu)
    {
    case 1:
    printf("tu choix creer un compte\n");
    break;
    case 2:
    printf("creer plusieurs comptes\n");
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
    case 6:
    printf("quitter application\n");
    }

     
    return (0);




}

    