/*
Quest�o 10
Sistema operacional: Windowns 10 Home x64
IDE: DevC++
Resposta:

Ponteiros s�o vari�veis que guardam endere�os de vari�veis.
A utiliza��o dos ponteiros � interessante, porque eles passam
determinado dado, por refer�ncia, apontando seu endere�o.
Isso facilita a passagem dos dados/valores, previnindo 
poss�veis erros.

Uma aplica��o interessante dos ponteiros, est� nas fun��es,
onde por exemplo, podemos passar um array como argumento 
de um fun��o, apenas passando atrav�s de um ponteiro, a 
referencia de seu endere�o inicial.

Esse c�digo, exemplifica esssa aplica��o:
Fun��es - Grava��o e leitura de vetores usando ponteiros
*/

#include<stdio.h>
#include<locale.h>

//marcadores das fun��es:
void vectorRead (int tam, int *vt); /*vt � um ponteiro para inteiro que ir� apontar
 para o endere�o de um vetor, e ser� utilizado para preencher e ler esse vetor*/
void vectorWrite (int tam, int *vt);

//marcadores das fun��es:
void vectorRead (int tam, int *vt);
void vectorWrite (int tam, int *vt);

//constantes:
#define tamanho 5

int main (void){
	setlocale(LC_ALL,"");
	int vetor[tamanho], vetor2[tamanho];
	
	printf("Preencha o primeiro vetor:\n");
	vectorWrite (tamanho, vetor);
	
	printf("Preencha o segundo vetor:\n");
	vectorWrite (tamanho, vetor2);
	
	printf("vetor 01: ");
	vectorRead(tamanho, vetor);
	
	printf("vetor 02: ");
	vectorRead(tamanho, vetor2);
}

//Fun��o para grava��o vetorial:
void vectorWrite (int tam, int *vt){
	unsigned int i = 0;
	
	for(i = 0; i < tam; i++){
		printf("Posi��o %d: ", i+1);
		scanf("%d", &vt[i]);
	}	
}

//Fun��o de leitura vetorial:
void vectorRead (int tam, int *vt){
	unsigned int i = 0;
	
	for(i = 0; i < tam; i++){
		printf("%d ", vt[i]);
	}		
}
