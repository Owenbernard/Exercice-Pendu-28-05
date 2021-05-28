#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void affichagePendu(int erreur);

int main ()
{
        char motbase[]="bonjour";
        char motafficher[strlen(motbase)];
        char lettredemande[strlen(motbase)];
        int i,erreur=0,lettreExistante=0;

        for(i=0;i<strlen(motbase);i++){

            motafficher[i]='_';

        }
        do{

            printf("\n Veuillez inserer une lettre (en minuscule) \n");
            scanf("%s", lettredemande);
            system("cls");

            for(i=0;i<strlen(motbase);i++){

                if(lettredemande[0]==motbase[i]){

                        lettreExistante =1;
                        motafficher[i]=lettredemande[0];

                }
            }

            if (lettreExistante==0){
                erreur++;
            }
            printf("\n%s\n\n",&motafficher);
            affichagePendu(erreur);
            lettreExistante=0;


        }while ((erreur!=10)||(motbase==motafficher));

        if(erreur=10){

            printf("\nVous avez perdu!!");

        }else{

            printf("\nVous avez trouve!!");;

        }

}

//fonctionne
void affichagePendu(int erreur) {

//affichage pendu
    switch(erreur)
    {
        case 0:
            printf("        \n       \n\n\n\n\n");
        break;
        case 1:
            printf("        \n       \n\n\n\n\n__________");
        break;
        case 2:
            printf("|       \n|      \n|\n|\n|\n|\n__________");
        break;
        case 3:
            printf("|-------\n|      \n|\n|\n|\n|\n__________");
        break;
        case 4:
            printf("|-------\n|     |\n|\n|\n|\n|\n__________");
        break;
        case 5:
            printf("|-------\n|     |\n|     0\n|\n|\n|\n__________");
        break;
        case 6:
            printf("|-------\n|     |\n|     0\n|     | \n| \n| \n__________");
        break;
        case 7:
            printf("|-------\n|     |\n|     0\n|     |l \n| \n| \n__________");
        break;
        case 8:
            printf("|-------\n|     |\n|     0\n|    /|l \n| \n| \n__________");
        break;
        case 9:
            printf("|-------\n|     |\n|     0\n|    /|l \n|      l \n| \n__________");
        break;
        case 10:
            printf("|-------\n|     |\n|     0\n|    /|l \n|    / l \n| \n__________");
        break;

        default:printf("erreur");
    }
}





