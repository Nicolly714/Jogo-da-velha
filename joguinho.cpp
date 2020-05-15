#include <stdio.h>
#include <stdlib.h>
/** 
Author: Nicolly Daniele Lima da Silva 
Version: 0.0.1
Date: may 14st, 2020
**/ 
void mostrar_tab(char casas[]){
	system("cls");
printf("\n\n\t %c | %c | %c \n", casas[1],casas[2], casas[3]);
printf("\t--------------\n");
printf("\t %c | %c | %c \n", casas[4],casas[5], casas[6]);
printf("\t--------------\n");
printf("\t %c | %c | %c \n", casas[7],casas[8], casas[9]);
}
int main(void){

char casas[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int contagem, play;
int jogadas;
int player;

contagem=1;
player=1;

printf("\t\t #JOGO DA VELHA# \n\n\n Digite 1 para jogar: ");
scanf("%d", &play);


while(play==1){

mostrar_tab(casas);
printf("\nDigite a casa que deseja marcar[1-9]: ");
scanf("%d",&jogadas);


if(jogadas<1 || jogadas>9){
	jogadas=0;
	}
else if(casas[jogadas]!=' '){
	jogadas=0;
}
else{

if(player==1){
     casas[jogadas]= 'O';
     player++;
	}
else if(player==2){
   casas[jogadas]= 'X';
    player--;

}
   printf("%d\n\n", jogadas);
   system("cls");
   contagem++;
  
    if (casas[1]== 'X' && casas [4]== 'X' && casas[7]=='X') {contagem = 11;} 
   if (casas[2]== 'X' && casas [5]== 'X' && casas[8]=='X') {contagem = 11;}
   if (casas[3]== 'X' && casas [6]== 'X' && casas[9]=='X') {contagem = 11;} 
   if (casas[1]== 'X' && casas [2]== 'X' && casas[3]=='X') {contagem = 11;}
   if (casas[4]== 'X' && casas [5]== 'X' && casas[6]=='X') {contagem = 11;}
   if (casas[7]== 'X' && casas [8]== 'X' && casas[9]=='X') {contagem = 11;}
   if (casas[1]== 'X' && casas [5]== 'X' && casas[9]=='X') {contagem = 11;}
   if (casas[3]== 'X' && casas [5]== 'X' && casas[7]=='X') {contagem = 11;}
   
   if (casas[1]== 'O' && casas [4]== 'O' && casas[7]=='O') {contagem = 12;}
   if (casas[2]== 'O' && casas [5]== 'O' && casas[8]=='O') {contagem = 12;}
   if (casas[3]== 'O' && casas [6]== 'O' && casas[9]=='O') {contagem = 12;}
   if (casas[1]== 'O' && casas [2]== 'O' && casas[3]=='O') {contagem = 12;}
   if (casas[4]== 'O' && casas [5]== 'O' && casas[6]=='O') {contagem = 12;}
   if (casas[7]== 'O' && casas [8]== 'O' && casas[9]=='O') {contagem = 12;}
   if (casas[1]== 'O' && casas [5]== 'O' && casas[9]=='O') {contagem = 12;}
   if (casas[3]== 'O' && casas [5]== 'O' && casas[7]=='O') {contagem = 12;}
   
   	if(contagem==11){
   		printf("o vencedor e o X");
   	    return 0;
	   }
	else if(contagem==12){
   		printf("o vencedor e o O");
        return 0;
	}
	else if(contagem==10){
		printf("Velha!");
        return 0;
	}
    
}

}
}

   



