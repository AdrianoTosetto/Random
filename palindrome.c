#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char *str){
	char *aux = (char *)calloc(sizeof(char),strlen(str));
	int i;
	int j = 0;
	for(i = strlen(str) - 1; i > -1;i--,j++){
		aux[j] = str[i];
	}	
	return (strcmp(str,aux) == 0)?true:false;
}

int main(int argc, char** argv)
{
	printf("%d",palindrome("wow")); //1
	printf("%d",palindrome("wow1"));  //0
	return 0;
}
