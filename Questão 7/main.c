#include <stdio.h>
#include <math.h>
#include <complex.h>


int main() {
 float A,B,C;

 printf("Valor de A: ");
 scanf("%f",&A);

 printf("Valor de B: ");
 scanf("%f",&B);

 printf("Valor de C: ");
 scanf("%f",&C);

 float DELTA = B*B-4*A*C;
 float raizes[2];
 complex craizes[2];

 if (!DELTA) {
raizes[0] = raizes[1] = A/2;
printf("RAIZ UNICA: \n %0.2f\n", raizes[0]);
printf("Status 1");

 } else if (DELTA > 0) {

float RAIZ = sqrtf(DELTA);

raizes[0] = (A*A + RAIZ)/2*A;
raizes[1] = (A*A - RAIZ)/2*A;

printf("RAIZES:\n");
printf("R1 = %0.2f \t R2 = %0.2f\n", raizes[0], raizes[1]);
printf("Status 2");
 }
else if((raizes[0]=0) && (raizes[1]=0)){

 printf("RAIZES INEXISTENTES:\n");
    printf("R1 = %0.2f \t R2 = %0.2f\n", raizes[0], raizes[1]);
    printf("Status 0");
}



else {

complex RAIZ = csqrtf((complex)DELTA);

craizes[0] = ((complex)(A*A) + RAIZ) / (complex)2*A;
craizes[1] = ((complex)(A*A) - RAIZ) / (complex)2*A;

printf("RAIZES COMPLEXAS:\n");

printf("R1 = %9.2f %c %0.2f * i\n", creal(craizes[0]), (cimag(raizes[0])<0)? '-' : '+', cimag(craizes[0]));
printf("R2 = %9.2f %c %0.2f * i\n", creal(craizes[1]), (cimag(raizes[1])<0)? '+' : '-', cimag(craizes[1]));
printf("Status 2");
 }

 return 0;
}
