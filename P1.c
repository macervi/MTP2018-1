//Marina Cervi Angstmam
//Matrícula: 11811EEL035

#include <stdio.h>

int main(){
	int estado=0, i;
	char seq[256];
	printf("\nEntre: ");
	scanf("%s", &seq);

for(i=0; seq[i]!= '\0'; i++){
	if(estado==0 && seq[i]== '0'){
		estado=0;}
	else if(estado==0 && seq[i]=='1'){
		estado=1;}
	else if(estado==1 && seq[i]=='0'){
		estado=2;}
	else if(estado==1 && seq[i]=='1'){
		estado=0;}
	else if(estado==2 && seq[i]=='0'){
		estado=1;}
	else if(estado==2 && seq[i]=='1'){
		estado=2;}
}
if(estado==0){printf("\nO  multiplo de 3. ");
}
else{printf("\nO nao e multiplo.");
}
return 0;
}
