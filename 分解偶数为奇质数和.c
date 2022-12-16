#include<stdio.h>
#include<math.h>
int judge(int x)
{
	int a=0;
	if(x>=2)
	{
		for(int i=2;i<=x;i++)
		{
			if(x%i==0)
			a++;
		}
	}
	return a;
}
void resolve(int x)
{
	int b;
	if(x%2!=0||x<6)
	{
		printf("ERROR\n");
		return;
	}
	else
	{
		for(int a=3;a<=x/2;a++)
		{
			b=x-a;
			if(judge(a)==1&&judge(b)==1)
			{
				printf("%d %d\n",a,b);
				b++;
			}			
		}		
	}
	return;
}
int main(void)
{
	int a,b,c;
	scanf("%d",&a);
	resolve(a);
	return 0;
}
