/*Exercício 5: 

Desenvolva um programa que registre as vendas de uma loja, armazenando os valores em um vetor e apresentando o total de vendas ao final.
 Considere que cada venda precisa do nome de um produto, seu preço e sua quantidade. Crie um menu onde o usuário possa digitar o número 1 
 para adicionar uma venda e o número 2 para sair do menu e exibir o total das vendas realizadas.*/
 #include <stdio.h>
 #include<stdlib.h>
 int main()
 {
    //registre as vendas de uma loja, armazenando os valores em um vetor, o total de vendas ao final
    // nome produto preço quantidade
    int opcao =1;
    char nomeProduto[10][200];
    float preco [10];
    int qtdVendida[10];
    float totalVendas = 0;
    int i=0;
    do
    {
        printf("--------------Menu----------");
        printf("adicionar outra venda------1");
        printf("sair-----------------------2");
        scanf("%i", &opcao);
        system("cls || clear");
        if (opcao==1)
        {
            /* code */
        printf("Digite o nome do produto: %i\n",i+1);
        gets(nomeProduto[i]);
        system("cls || clear");

        printf("Digite o valor do produto: %i\nR$",i+1);
        scanf("%f",&preco[i]);
        system("cls || clear");

        printf("Digite a quantidade de produtos vendidos: %i\n",i+1);
        scanf("%f", &qtdVendida);
        totalVendas+=preco[i]*(float)qtdVendida[i];
        i++;
        }
        
    } while (opcao!=2);
    printf("Total de vendas realizadas: %.2f",totalVendas);
        return 0;   
 }