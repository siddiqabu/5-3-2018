#include <stdio.h>
#include<math.h>
int main()
{
   int p,t,r,si,res;
   scanf("%d %d %d",&p,&t,&r);
   si=(p*t*r);
   si=si/100;
   res=ceil(si);
   printf("%d",res);

}
 
