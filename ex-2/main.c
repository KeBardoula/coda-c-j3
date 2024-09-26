#include <stdlib.h>
#include <stdio.h>

int main(){
	/* code */
	int operation;

	printf("Choisissez une opération : 1 = - ou 2 = + ou 3 = * ou 4 = / ou 5 = module\n");
	scanf("%d", &operation);

	if (operation == 1){
		printf("Votre opération est une soustraction !\n");
	} else if (operation == 2){
		printf("Votre opération est une addition !\n");
	} else if (operation == 3){
		printf("Votre opération est une multiplication !\n");
	}else if (operation == 4){
		printf("Votre opération est une division !\n");
	}else if (operation == 5){
		printf("Votre opération est un module !\n");
	} else {
		printf("Erreur : vous n'avez pas entrer d'opération !\n");
	}

	exit(0);
}