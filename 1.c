#include<stdio.h> int addition(){   int a,b;   printf("press two number:\n",a,b);   scanf("%d%d",&a,&b);   printf("addition of a and b:%d\n",a+b);   return 0; 
  } 
   int Substaction(){    int c,d; 
   printf("press two number:\n",c,d);    scanf("%d%d",&c,&d);    printf(" Substaction of c and d:%d\n ",c-d);    return 0; 
   } 
    int multiplication(){     int x,y; 
    printf("press two number:\n",x,y);     scanf("%d%d",&x,&y);     printf("multiplication of x and y:%d\n",x*y);     return 0; 
    } 
    int division(){     int p,q;     printf("press two number:\n",p,q);     scanf("%d%d",&p,&q);     printf("division of p and q :%d\n",p/q);     return 0; 
    } 
    int main(){     printf("%d\n",addition());     printf("%d\n",Subtaction());     printf("%d\n",multiplication());     printf("%d\n",division());     return 0; 
    }
