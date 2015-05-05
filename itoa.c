#include <stdio.h>
char *itoa(unsigned int num, char *temp);

int main(void)
{
	unsigned int i = 0;
	unsigned int a = 4316816;
	char *temp;
	temp = itoa(a,temp);
	for(i = 0; i < 7; i++){
		printf("str=%c",*(temp-i));	
	}
}

char *itoa(unsigned int num, char *temp)
{
	while(num){
		*temp = num%10+'0';
		num = num/10;
	}
	return temp;
}
