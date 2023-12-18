/*Exercício 1: 
Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

- Mostre as informações solicitadas de cada pessoa e informe:
O nome e a altura da pessoa mais alta e a mais baixa.
O nome e o peso da pessoa com maior peso e menor peso;
O nome a idade da pessoa com mais idade e com menos idade*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[5][200];
    int idade[5];
    float peso[5];
    float altura[5];
    int idadeMenor,idadeMaior;
    float pesoMenor,pesoMaior;
    float alturaMaior,alturaMenor;
    int i;
    int pessoaMaisAlta,pessoaMaisBaixa;
    int pessoaMaisPesada,pessoaMaisLeve;
    int pessoaMaisVelha,pessoaMaisNova;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite o nome da pessoa %d: ",i+1);
        gets(nome[i]);
        system("cls || clear");

        printf("Digite a idade da pessoa %d: ",i+1);
        scanf("%d",&idade[i]);
        system("cls || clear");

        printf("Digite o peso da pessoa %d: ",i+1);
        scanf("%f",&peso[i]);
        system("cls || clear");

        printf("Digite a altura da pessoa %d: ",i+1);
        scanf("%f",&altura[i]);
        getchar();
        system("cls || clear");
        //forçando a inicializaçõa de variaveis
        if (i==0)
        {
           idadeMaior=idade[i];
           idadeMenor=idade[i];
           pesoMaior=peso[i];
           pesoMenor=peso[i];
           alturaMaior=altura[i];
           alturaMenor=altura[i];
        }
        //comparação de altura
        if (altura[i]>alturaMaior)
        {
           alturaMaior=altura[i];
            pessoaMaisAlta=i;
        }//fimSe
        else if (altura[i]<alturaMenor)
        {
            alturaMenor=altura[i];
            pessoaMaisBaixa=i;
        }//fimSe
        //comparação de peso
        if (peso[i>pesoMaior])
        {
            pesoMaior=peso[i];
            pessoaMaisPesada=i;
        }//fimSe
        else if (peso[i]<pesoMenor)
        {
            pesoMenor=peso[i];
            pessoaMaisLeve=i;
        }
        //comparaçõa de idade
        if (idade[i]>idadeMaior)
        {
            idadeMaior=idade[i];
            pessoaMaisVelha=i;
        }
        else if (idade<idadeMenor)
        {
            idadeMenor=idade[i];
            pessoaMaisNova=i;
        }
        else{}
        
        
        
    }//fimPara
    
    //O nome e a altura da pessoa mais alta e a mais baixa.
    printf("O nome da pessoa mais alta e %s, altura: %.2f.\n",nome[pessoaMaisAlta],altura[pessoaMaisAlta]);
    printf("O nome da pessoa mais baixa: %s, altura: %.2f\n",nome[pessoaMaisBaixa],altura[pessoaMaisBaixa]);
    //O nome e o peso da pessoa com maior peso e menor peso;
    printf("o nome da pessoa com maior peso: %s, o peso: %.2f\n",nome[pessoaMaisPesada],peso[pessoaMaisPesada]);
    printf("o nome da pessoa com menor peso: %s, o peso: %.2f\n",nome[pessoaMaisLeve],peso[pessoaMaisLeve]);
    //O nome a idade da pessoa com mais idade e com menos idade
    printf("O nome da pessoa mais velha: %s, idade: %i\n",nome[pessoaMaisVelha],idade[pessoaMaisVelha]);
    printf("O nome da pessoa mais jovem: %s, idade: %i\n",nome[pessoaMaisNova],idade[pessoaMaisNova]);

   
    return 0;
}