#include<stdio.h>
#include<math.h>
int add(){
    int x,y,sum=0;
    scanf("%d%d",&x,&y);
    sum=x+y;
    return sum;
}
int main()
{
  int x= add();
   printf("%d",x);
   printf("%d",add());
   printf("%d",add());
   printf("%d",add());
}
