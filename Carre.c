#include <stdio.h>
#include <stdlib.h>

/*//But Un carr� affichant un carr� des valeur entrer avec un contour en etoile et l'interieur
en etoile
//Entrer La longueur et la largeur
//Sortie Un carre de la taille des valeurs entr�e

var:i,j,l,L ENTIER

DEBUT
	ECRIRE "Entrez la longueur du carr�e"
	LIRE "l"
	ECRIRE "Entrez la largeur du carr�e"
	LIRE "L"

	POUR i de 0 a (l-1) FAIRE
	DEBUT
		POUR j de 0 a (L-1) FAIRE
		DEBUT
            SI(j=L-1)ALORS
            ECRIRE "*"
            SINON SI(i=0)OU(j<>L-1)OU(i=l-1)
            ECRIRE "*"
            SINON
            ECRIRE "+"
		FIN
	FIN
FIN*/
int main(){

int i=0;
int j=0;
int l=0;
int L=0;

printf("Entrez la longueur du carr�e\n");
scanf("%i",&l);
printf("Entrez la largeur du carr�e\n");
scanf("%i",&L);

for(i=0;i<l;i++){
    for(j=0;j<L;j++){
        if(j==L-1){
            printf("*\n");
        }else if(((i==0)&&(j!=L-1))||(j==0)||(i==l-1)){
            printf("*");
        }else{
            printf("+");
        }
    }
}

return 0;
}





















