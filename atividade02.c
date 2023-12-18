/*Exercício 2: 
Crie um programa que faça o cadastro de 5 alunos em uma escola, armazenando seus dados como: nome, 
idade e  3 notas  para cada aluno. Ao final, mostre todos os dados dos alunos como: nome, idade, as notas
 e a média. Após calcular a média, verifique para cada aluno se este estará aprovado 
 (média maior ou igual a 7,0), em recuperação (média menor que 7,0 e maior ou igual a 5,0) ou reprovado
  (média menor que 5,0) com base nestes critérios.*/
  #include <stdio.h>
  #include <stdlib.h>
  int main()
  {
    char alunosNomes[5][200];
    int idade[5];
    float notas[5][3];
    float media[5];
    int i=0,j=0;
    do
    {
        printf("Digite o nome do aluno: %i\n",i+1);
        gets(alunosNomes[i]);
        system("cls || clear");

        printf("Digite a idade do aluno: %i\n",i+1);
        scanf("%d", &idade[i]);
        system("cls || clear");
        getchar();
        //notas
        j=0;
        while (j<3)
        {
            /* code */
            printf("Digite as 3 notas do aluno: %i\n",j+1);
            scanf("%f", &notas[i][j]);
            getchar();
            system("cls || clear");
            if (notas[i][j]>=0&&notas[i][j]<=10)
            {
                media[i] = media[i] + notas[i][j];
                j++;
            }//fimSe
            printf("media: %f",media[i]);
        }
        
       i++;
    } while (i<5);
    //saidade dos dados
    for ( i = 0; i < 5; i++)
    {
        media[i]= media[i]/(float)3;
        printf("Nome: %s\n",alunosNomes[i]);
        printf("Idade: %d\n",idade[i]);
        for ( j = 0; j < 3; j++)
        {
            printf("notas: %.2f\n",notas[i][j]);
        }
        printf("media: %.2f",media[i]);
        if (media[i]>=7)
        {
            printf("Estado: Aprovador");
        }
        else if (media[i]>=5)
        {
            printf("Estado: Recuperação");
        }
        else
        {
            printf("Estado: Reprovado");
        }
        
        
    }
    

    return 0;
  }