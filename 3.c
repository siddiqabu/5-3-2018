#include<stdio.h>
    int main ()
    {
    	int j,i,cout;
    	scanf("%d",&j);
    	for(i=1;i<=j;i++)
    	{
    		if(j%i==0)
    		{
    		cout ++;
    	}
    }
    if(cout!=2)
    printf("composite");
    else
    printf("no");
    }
