#include<stdio.h> 
  
int sum(int num){ 
  
  if(num==0){     return 0;   }else{ 
   int lastDigit = num%10;    return lastDigit + sum(num/10); 
  } 
} 
  int main(){    int n; 
   printf("Enter a number:");    scanf("%d",&n);    int s= sum(n); 
   printf("The sum of digits of %d is %d\n",n,s); 
  
   return 0; 
  
} 

