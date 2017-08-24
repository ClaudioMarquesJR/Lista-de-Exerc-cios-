#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novoSalario, salarioAtual, salarioAjustado;
    char nome[50];
    char nomeFim[]="fim"; //EM C NÃO EXISTE COMPARAÇÃO DE STRINGS, POR ISSO O USO DO COMANDO STRCMP
    salarioAtual=0;
    salarioAjustado=0;

    novoSalario=0;


    while(strcmp(nomeFim, nome)!=0){

        printf("Informe seu Nome: \n");
        scanf("%s", &nome);
        printf("Informe seu Salario: \n");
        scanf("%f", &salario);


     if(salario<=150)
    {
        salarioAtual=salarioAtual+salario;
        novoSalario=salario + (salario*0.25);
        salarioAjustado=salarioAjustado+novoSalario;
        printf("Seu novo salario e: %.2f \n\n", novoSalario);
     }else if(salario<=300)
        {
        salarioAtual=salarioAtual+salario;
        novoSalario=salario + (salario*0.20);
        salarioAjustado=salarioAjustado+novoSalario;
        printf("Seu novo salario e: %.2f \n\n", novoSalario);
        }else if(salario<=600){
                salarioAtual=salarioAtual+salario;
                novoSalario=salario + (salario*0.15);
                salarioAjustado=salarioAjustado+novoSalario;
                printf("Seu novo salario e: %.2f \n\n", novoSalario);
            }else if(salario>601){
                    salarioAtual=salarioAtual+salario;
                    novoSalario=salario + (salario*0.10);
                    salarioAjustado=salarioAjustado+novoSalario;
                    printf("Seu novo salario e: %.2f \n\n", novoSalario);
    }
     printf("Para continuar digite sim ou digite fim para finalizar... \n");
     scanf("%s", &nome);
    }


        printf("soma dos salarios atuais: %.2f \n", salarioAtual);
        printf("soma dos salarios ajustados: %.2f \n", salarioAjustado);
        printf("a diferença entre os salarios atuais e ajustados e: %.2f \n", salarioAjustado-salarioAtual);
    }


