//MARINA CERVI ANGSTMAM
//11811EEL035
#include<stdio.h>

int main(){

	char str[256];
	int i, op;
	
	printf("Escolha uma opcao:\n1-Codificar\n2-Descodificar\n");
	scanf("%d", &op); getchar();
	
	if(op==1){
		gets(str);
		
		int *pi;
		
		for(i=0; str[i]!='\0'; i+=4){
			pi = (int *) &str[i];
			if(str[i+4]!='\0')
				printf("%d, ", *pi);
			else
				printf("%d", *pi);		
		}
	}else if(op==2){
		int num[64];
		char aux;
		
		for(i=0; i<64; i++){
			scanf("%d%c", &num[i], &aux);
			if(aux!=',')
				break;
		}
		
		printf("%s", &num);
	}
		
	return 0;
}
