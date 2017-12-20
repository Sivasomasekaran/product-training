#include <stdio.h>
#include <string.h>

int main(void) {
	char a[20];
	int b[20],s,sum;
	
	scanf("%s",a);
	
	s=strlen(a);
	for(int i=0;i<s;i++)
	{
		switch (a[i])
		{
		case 'I':b[i]=1;
		break;
		case 'V':b[i]=5;
		break;
		case 'X':b[i]=10;
		break;
		case 'L':b[i]=50;
		break;
		case 'C':b[i]=100;
		break;
		case 'D':b[i]=500;
		break;
		case 'M':b[i]=1000;
		break;
		
		}
	
	}
	 sum=b[s-1];
	for(int i=s-1;i>0;i--)
	{
	if(b[i]>b[i-1])
	sum=sum-b[i-1];
	else if(b[i]<=b[i-1])
	sum=sum+b[i-1];
	}
	printf("%d",sum);
	return 0;
}

