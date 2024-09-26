#include <stdlib.h>
#include <stdio.h>

int main(){
	/* code */
	int number;
	int i = 0;

	printf("Saisissez un nombre entier différent de 0 :\n");
	scanf("%d", &number);

	do{
		printf("%d\n", i);
		i++;
	}while(i != number);

	exit(0);
}