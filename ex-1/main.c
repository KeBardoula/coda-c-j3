#include <stdlib.h>
#include <stdio.h>

int main()
{
	/* code */
	int number;

	printf("Choisissez un nombre entier :\n");
	scanf("%d", &number);

	if (number > 42){
		printf("Votre entier est supérieur à 42 !");
	} else if(number == 42){
		printf("Votre entier est égal à 42 !");
	} else {
		printf("Votre entier est inférieur à 42 !");
	}

	exit(0);
}