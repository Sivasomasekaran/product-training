#include <stdio.h>
#include <string.h>

int main(void) {
	char a[20];
	int s;
	scanf("%s",&a);
	s=strlen(a);
	for(int i=0;i<s-1;i++)
	{
		char tmp;
		tmp=a[i];
		a[i]=a[i+1];
		a[i+1]=tmp;
		i++;
	
	}
	printf("%s",a);
	return 0;
}
