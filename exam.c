#include<stdio.h>

int main(){
	
	FILE *fileptr;
	fileptr=fopen("bacon.txt","r");
	char a[1000];
	int i=0;

	while(fgets(a,1000,fileptr)!=NULL){
		printf("%s", a);
		printf("methsara gobbaya methsarage thaththa gobbaya");
	}
	
	fclose(fileptr);
	
return 0;
}
