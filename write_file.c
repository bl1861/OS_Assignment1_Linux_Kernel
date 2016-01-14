#include<stdio.h>

int main(){
	FILE *pFile;
	pFile = fopen("my_file.txt", "a");
	if(pFile != NULL){
		fputs("task 2\n", pFile);
		fclose(pFile);
	}
	return 0;
}
