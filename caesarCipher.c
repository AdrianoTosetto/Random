#include <stdio.h>
#include <string.h>
#include <ctype.h>


char* caesarCipher(char *str,char key){
	char *cstr = (char *)malloc(sizeof(char) * strlen(str));
	
	int i;
	for(i = 0; i < strlen(str);i++){
		if(!isspace(str[i]))
			cstr[i] = (char)(((int)(str[i]) + abs((int)'a' - (int)key)));
		else
			cstr[i] = ' ';
	}
	

	return cstr;
}


int main(int argc,char **argv){
	printf(caesarCipher("my cipher",'b'));
    return 0;
}
