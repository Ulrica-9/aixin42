#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,thou,hun,tens,ind;
	printf ("Please enter a number :\n");
	scanf ("%d",&a);
	thou=a/1000;
	hun=a/100-thou*10;
	tens=a/10-thou*100-hun*10;
	ind=a%10;
	printf ("��ӡ���ǧλ:%d\n��λ:%d\nʮλ:%d\n��λ:%d\n",thou,hun,tens,ind);
	return 0;
}
