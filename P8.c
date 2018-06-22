/*Aluno: MARINA CERVI ANGSTMAM
Matricula: 11811EEL035 */

#include<stdio.h>
#include<stdlib.h>

void gera_numeros(float * vetor, int tam)
{
	int i;
	float num;
	
	for(i = 0; i < tam; i++)
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float reduce(float * pini, float * pfim, float (*funcao)(float, float)) 
{
	return (pini == pfim)? 1 : (*funcao)(*pini, reduce(pini+1, pfim, funcao));
}

float soma(float a, float b)
{
	return a+b;
}

float multiplicacao(float a, float b)
{
	return a*b;
}

int main()
{
	srand(123456);
	float vetor[100];
	int op;
	
	gera_numeros(vetor, 100);
	printf("1 - Somatorio\n2 - Produtorio\n");
	scanf("%d", &op);
	getchar();
	
	if(op==1)
		printf("%f\n", reduce(vetor, vetor+100, soma)-1);
	else if(op==2)
		printf("%f\n", reduce(vetor, vetor+100, multiplicacao));
	
	return 0;
}
