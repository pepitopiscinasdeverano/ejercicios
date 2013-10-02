/*
Crea un programa amb C tal que :

demani si es vol xifrar o desxifrar

es demani  una cadena de caracters a xifrar/desxifrar ( commit )

es demani quin dels 3 diccionaris es vol utilitzar pel xifrat/desxifrat ( commit per cada cosa )

es demani el desplaçament de xifrat ( +/- X  caracters) ( commit )

Finalment es visualitzarà la cadena resultant de l'operació escollida.
 */

#include <stdio.h>
#include <string.h>
#define dim 100

int main(){

	int opcio=0;
	char frase[dim];
	char dir;
	int des;

	printf("1. Xifrar \n2. Desxifrar \n3. Sortir");
	scanf("%d",&opcio);

	switch(opcio){
		case 1:
			printf("Xifrar\n\n");

			printf("Introdueix una cadena a xifrar: ");
			fgets(frase,dim-1,stdin);
			getchar();



			break;
		case 2:

			break;
		case 3:

			break;
	}

	return 0;
}
