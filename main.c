/*Exercício utilizando estruturas em linguagem de programação C/C++*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Aluno{
    char  Nome[30];
    int   Idade;
    float Nota[5];
};

int main(){
    setlocale(LC_ALL, "portuguese");
    struct Aluno vetorAluno[100];
    int qtd,qtdNotas,i; char resposta;
    printf("Informe a quantidade de alunos: ");
    scanf("%d",&qtd);
    for(i=0; i<qtd;i++){
        printf("Informe o nome do %d° aluno: ", i+1);
        scanf("%s",&vetorAluno[i].Nome);
        printf("Informe a idade de %s: ",vetorAluno[i].Nome);
        scanf("%d",&vetorAluno[i].Idade);
        for(qtdNotas =1; qtdNotas<4; qtdNotas++){
            printf("Informe a %d nota de %s: ",qtdNotas,vetorAluno[i].Nome);
            scanf("%f",&vetorAluno[i].Nota[qtdNotas]);
        }

        printf("\n");
    }
    do{
        printf("\n");
        printf("Informe a posição do registro a impimir: ");
        scanf("%d", &qtd);
        printf("\n\n Nome: %s",vetorAluno[qtd-1].Nome);
        printf("\n Idade: %i",vetorAluno[qtd-1].Idade);
        for(i=1; i< qtdNotas; i++){
            printf("\n Nota: %.2f",vetorAluno[qtd-1].Nota[i]);
        }
        printf("\n Deseja imprimir outro? [S/N]");
        scanf("%s",&resposta);
    }
    while(resposta == 'S' || resposta == 's');

}
