#include <stdio.h>

int main(void) {
	int a[10],i,l,r,tmp;
	scanf("%d %d",&l,&r);
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	while(r>0)
	{
	tmp=a[0];
	for(i=0;i<l;i++)
	{
		a[i]=a[i+1];
	}
	a[l-1]=tmp;
	r--;
}
		
	for(i=0;i<l;i++)
	{
		printf("\n %d",a[i]);
	}
	return 0;

}
