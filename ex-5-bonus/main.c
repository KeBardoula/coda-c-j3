#include <stdlib.h>
#include <stdio.h>

int main(){
	/* code */
	char symbole;
	int number;
	int i = 0;

	printf("Saisissez le symbole addition ou soustraction : +, - :\n");
	scanf("%c", &symbole);

	if ((symbole != '+') && (symbole != '-')){
		printf("Le symbole n'est pas reconnu !\n");
		exit(0);
	}

	printf("Saisissez un nombre entier différent de 0 :\n");
	scanf("%d", &number);

	if (symbole == '+'){
		do{
			printf("%d\n", i);
			i++;
		}while(i != number);
		printf("%d\n", number);
	} 
	else if (symbole == '-'){
		do{
			printf("%d\n", number);
			number = number - 1;
		}while(number >= 0);

	}

	exit(0);
}