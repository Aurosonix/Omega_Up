#include<stdio.h>
int main(){
 char a[100];
 int i=0;
  gets(a);
   while(a[i]!='\0'){
    i++; 
   }
	i--;
   while(i>=0){
	printf("%c",a[i]);
	i--;
   }
 return 0;
}
