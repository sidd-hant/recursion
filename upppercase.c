#include<stdio.h>
#include<string.h>
void main()
{
    void reverse(char *,int,int ); 
	char x[50];
	printf("Enter a string \n");
	gets(x);
	reverse(x, 0, strlen(x)-1);
	printf("Reversed String : %s ",x);
	
}
 
  void reverse(char *a,int b,int e)
  {
  	char c;
  	if (b>=e)
  	return;
  	c=*(a+b);
  	*(a+b)=*(a+e);
  	*(a+e)=c;
  	
  	reverse(a,++b,--e);
  }
