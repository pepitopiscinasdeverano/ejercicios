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
#include <ctype.h>
#define dim 100

int main(){

	int opcio=0;
	char frase[dim];
	char ABC[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char resultat[dim];
	int des,dir,i,j;

	printf("1. Xifrar \n2. Desxifrar \n3. Sortir\n");
	scanf("%d",&opcio);
	getchar();
	switch(opcio){
	case 1:
		printf("Xifrar\n\n");

		printf("Introdueix una cadena a xifrar: ");
		fgets(frase,dim-1,stdin);
		printf("Introdueix el numero de caracters a desplaçar: ");
		scanf("%d",&des);
		getchar();
		printf("Introdueix la direccio: ");
		printf("1. sumar\n 2. restar\n");
		scanf("%d", &dir);
		getchar();
		switch(dir){
		case 1:
			for(i=0;i<strlen(frase);i++){
				if(frase[i]!='\0'){
				if(frase[i]==' '){
					resultat[i]=' ';
				}
				else{
					for(j=0;j<27;j++){
						if(toupper(frase[i])==ABC[j]){
							if(j+des>26){
								resultat[i]=(ABC[j]-26)+des;
							}
							else{
								resultat[i]=ABC[j]+des;
							}
						}

					}
				}
				}
			}
			resultat[strlen(frase)]='\0';
			puts(resultat);

			break;
		case 2:
			for(i=0;i<strlen(frase);i++){
							if(frase[i]!='\0'){
							if(frase[i]==' '){
								resultat[i]=' ';
							}
							else{
								for(j=0;j<27;j++){
									if(toupper(frase[i])==ABC[j]){
										if(j+des<0){
											resultat[i]=(ABC[j]+26)-des;
										}
										else{
											resultat[i]=ABC[j]-des;
										}
									}

								}
							}
							}
						}
						resultat[strlen(frase)]='\0';
						puts(resultat);
			break;
		}

		break;
		case 2:
			printf("desxifrar\n");
			printf("Introdueix una cadena a desxifrar: ");
					fgets(frase,dim-1,stdin);
					printf("Introdueix el numero de caracters a desplaçar: ");
					scanf("%d",&des);
					getchar();
					printf("Introdueix la direccio: ");
					printf("1. sumar\n 2. restar\n");
					scanf("%d", &dir);
					getchar();
					switch(dir){
					case 1:
						for(i=0;i<strlen(frase);i++){
							if(frase[i]!='\0'){
							if(frase[i]==' '){
								resultat[i]=' ';
							}
							else{
								for(j=0;j<27;j++){
									if(toupper(frase[i])==ABC[j]){
										if(j+des>26){
											resultat[i]=(ABC[j]-26)+des;
										}
										else{
											resultat[i]=ABC[j]+des;
										}
									}

								}
							}
							}
						}
						resultat[strlen(frase)]='\0';
						puts(resultat);

						break;
					case 2:
						for(i=0;i<strlen(frase);i++){
										if(frase[i]!='\0'){
										if(frase[i]==' '){
											resultat[i]=' ';
										}
										else{
											for(j=0;j<27;j++){
												if(toupper(frase[i])==ABC[j]){
													if(j-des<0){
														resultat[i]=(ABC[j]+26)-des;
													}
													else{
														resultat[i]=ABC[j]-des;
													}
												}

											}
										}
										}
									}
									resultat[strlen(frase)]='\0';
									puts(resultat);
						break;
					}

			break;
		case 3:
			return 0;
			break;
	}

	return 0;
}
