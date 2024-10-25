/*Programa de média da turma com repetição controlada, onde colocamos 10 notas e o
programa mostra todas as notas obtidas no começo como resultado usando while e 
mostrando o valor de media das notas obtidas*/

#include <stdio.h>

int main(void){
    
    int contador; //numero da nota a digitar em seguida
    int nota; //valor da nota
    int total; //Soma das notas inseridas pelo usuário
    int media; // média das notas
    
//Fase de inicialização
    total = 0; //Inicializa o valor total
    contador = 1; //Inicializa o contador do loop
    
    //fase de processamento dos dados
    while (contador <= 10){
        printf("Digite a %do nota : ");
        scanf("%d", &nota);
        
    //parte de calculo
    
    total = total + nota;
    contador = contador +1;
    }
    
    //fase de media
    media = total / 10;
    
    printf("Média da turma é: %d\n", media);

    return 0;
}