#include <stdio.h>
#include <string.h>

int main(){
	char str[100], tmp, rev[100];
	int inicio, fim;
	printf("Entre com uma string: ");
	scanf("%s", &str);

	strcpy(rev,str);

	inicio = 0;
	fim = strlen(str) - 1;
	while(inicio < fim){
		tmp = str[inicio];
		str[inicio] = str[fim];
		str[fim] = tmp;
		inicio++;
		fim--;
	}
	printf("Reverse string: %s\n", str);

	if(strcmp(rev,str) == 0)
		printf("%s eh palindromo!\n", str);
	else
		printf("%s nao eh palindromo!\n", str);

	return 0;
}
