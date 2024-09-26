#include <stdlib.h>
#include <stdio.h>

int main(){
	/* code */
	char word[50];
	int i = 0;

	printf("Saisissez un mot de moins de 50 caractères :\n");
	scanf("%s", word);

	do{
		printf("%d : %s\n", i, word);
		i++;
	}while(i <= 4);

	exit(0);
}