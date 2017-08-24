#include <stdio.h>
#include <stdlib.h>

main()
{
int a;
char b[10];


printf("Digite o numero decimal:\n ");
scanf("%d", &a);
getchar();

itoa(a,b,2);

printf("O numero %d binario e: %s ", a,b);

getchar();
return 0;
}
