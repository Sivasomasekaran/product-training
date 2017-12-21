#include <stdio.h>
#include <string.h>
int main(void) {
	int i,s;
	char a[20];
	scanf("%s",a);
	s=strlen(a);
		
	for(i=s;i>=0;i--)
	{
		
		printf("%c",a[i]);
	
	}
	printf("\n");
	for(i=s;i>=0;i--)
	{
		if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
		printf("%c",a[i]);
	
	}
	
	return 0;

}
