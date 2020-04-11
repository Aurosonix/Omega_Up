#include<stdio.h>
int main(){
	char A[100];
	int i=0;
	 gets(A);
	 while(A[i]!='\0'){
	 	printf("%c\n",A[i]);
	 	i++;
	 }
	return 0;
}
