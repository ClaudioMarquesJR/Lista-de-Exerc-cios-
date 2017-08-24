#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1,n2;
    printf("Insira primeiro numero A:");
    scanf("%d",&n1);
    printf("Insira o segundo numero B:");
    scanf("%d",&n2);

    if(n2<n1){

    for (n1; n1>=n2; n1--){

        if (n1%2==0){

        }else{

            printf("O numero %d  eh impar: \n",n1);

        }
    }

    }else{

    for (n1; n1<=n2; n1++){

        if (n1%2==0){

        }else{

            printf("O numero %d  eh impar: \n",n1);

        }
    }
    }


}
