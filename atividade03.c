/*Exercício 3: 
Implemente um programa que permita cadastrar contatos telefônicos em uma agenda, utilizando vetores
 para armazenar os nomes e números de telefone. Permita que o usuário digite o código 1 para 
 adicionar um número e 2 para mostrar os números cadastrados e encerrar o software.*/
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    char nomes[10][200];
    int telefones[10][13];
    int saida=0,i=0,j=0,e=0;
    do
    {
        printf("Didite um(1) para adicionar contato ou dois(2) para sair: \n");
        scanf("%d", &saida);
        system("cls || clear");
        getchar();
        if (saida!=2)
        {
            printf("Digite o nome do contado: %i\n",i+1);
            gets(nomes[i]);
           
            printf("\n");

            printf("Digite o telefone do contado: %i\n",i+1);
            scanf("%i", &telefones[i][j]);
            getchar();
           
        j++;
        i++;
        }
    } while (saida!=2);
    
    for ( j = 0; j < i; j++)
    {
        printf("nome: %s\n",nomes[j]);
        printf("numero: %i\n",telefones[j][e]);
        e++;
    }
    
    
    return 0;
 }