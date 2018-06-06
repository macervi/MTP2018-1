//MARINA CERVI ANGSTMAM
//11811EEL035

#include<stdio.h>

int soma(int *ref, int *px) {
	return (*px) + ((px == ref) ? 0 : soma(ref, px-1));
}

int main(){
	
	int quant;
	
	scanf("%i", &quant);
	getchar();
	
	int i, num[quant];
	
	for(i=0; i<quant; i++){
		scanf("%i", &num[i]);
		getchar();
	}
	
	int *pprimeiro = num, *pultimo = num+quant-1;
	
	printf("\nmedia = %f\n", (float) soma(pprimeiro, pultimo)/quant);
	
	return 0;
}
