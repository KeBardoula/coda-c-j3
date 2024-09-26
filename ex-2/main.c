#include <stdlib.h>
#include <stdio.h>

int main(){
	/* code */
	char operation;

	printf("Choisissez une opération : +, -, *, /, %%:\n");
	scanf("%c", &operation);

	if (operation == '-'){
		printf("Votre opération est une soustraction !\n");
	} else if (operation == '+'){
		printf("Votre opération est une addition !\n");
	} else if (operation == '*'){
		printf("Votre opération est une multiplication !\n");
	}else if (operation == '/'){
		printf("Votre opération est une division !\n");
	}else if (operation == '%'){
		printf("Votre opération est un module !\n");
	} else {
		printf("Erreur : vous n'avez pas entrer d'opération !\n");
	}

	exit(0);
}