#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	float *x, save, f; //ponteiro para float e vari�vel de mem�ria r�pida
	int i, j, n, a, b; //Variaveis auxiliares de contagem
	
	printf("Digite quantos valores devem ser gerados: ");
	scanf("%d", &n);
	
	x = (float*) malloc(n*sizeof(float));
	
	//verificar se deu bom:
	if(x == NULL){
		printf("Mem�ria insuficiente :(");
		system("pause");
		exit(0);
	}
	
	srand(time(0)); // mudar semente para gerar valores aleat�rios
	/*time retorna um n�mero inteiro referente a hora da m�quina,
	 vai ser usado para cada execu��o gerar uma semente diferente;*/
	 
	for(i = 0; i<n; i++){ //Esse for gera valores 'aleat�rios' tipo float e atribui ao array
		 a  =  rand()%100;
		 b  =  rand()%100;
		 f  =  ((float)a/b);
		 
		x[i] =  f;
	}
	
	printf("Desordenado: ");
	for(i = 0; i<n; i++){
		printf("%.2f ", x[i]);
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i == 0){
				if(x[i] > x[j]){
					save = x[j];
					x[j] = x[i];
					x[i] = save;
				}
			}else{
				if((x[i] < x[j]) && (x[i] < x[i-1]) ){
       			 save = x[j];
       			 x[j]= x[i];
       			 x[i]=save;
			}
			}
		}
	}
	
		printf("\n");
	
	printf("Ordenado...: "); //Exibe os valores ordenados em ordem crescente
	for(i = 0; i<n; i++){
		printf("%.2f ", x[i]);
	}
	
	
	//mem�ria, seja livre, a escravid�o acabou
	free(x);
	
	
}
