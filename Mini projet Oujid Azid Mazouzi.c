#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct joueur{
	char nom1 [10];
	char nom2 [10]; 
};


int main() {
	struct  joueur j;
    char mot_secret[6]; 
    char proposition[6]; 

    
    printf("Joueur 1, veuillez entrer votre nom : ");
    scanf("%s",j.nom1);
	printf("Bonjour %s !\n",j.nom1 );

    printf(" %s veuiller entre le mot secret de 5 caractère :",j.nom1);
    scanf("%5s", mot_secret);
    system("cls");
    printf("Mot secret enregistré !\n");

    int l=strlen(mot_secret);

    
    if (l!= 5) {
        printf("Le mot doit contenir exactement 5 caractères.\n");
        return 1; 
    }
 FILE* fp;
   
    
   printf("Joueur2, veuillez entrer votre nom : ");
    scanf("%s",j.nom2);
	
	
    while (1) {
       
        printf("Bonjour %s, faite une proposition de 5 caractère :",j.nom2);
        scanf("%5s", proposition);

   
        if (strlen(proposition) != 5) {
            printf("La proposition doit contenir exactement 5 caractères.\n");
            continue; 
        }

        
        int bienPlacer = 1;
        int i ;
        for ( i = 0; i < l ; i++) {
            if (proposition[i] != mot_secret[i]) {
              bienPlacer = 0;
                break;
            }
        }

       
        if (bienPlacer) {
            printf("Bravo, %s, vous avez trouvé le mot !\n",j.nom2 );
            break;
        } else {
            printf("Aucun caractère bien placé. Essayez encore.\n");
        }
    }
    fp=fopen("azid_oujid_mazouzi.txt","w");
    fprintf(fp," bonjour %s Le mot Secret est %s ", j.nom2 ,mot_secret);
    fclose(fp);

    
    return 0;
}
