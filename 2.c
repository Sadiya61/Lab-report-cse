
#include<stdio.h> 

 value void swapByValue(int x,int y); int temp = x; x=y; y=temp; 
  

 void swapByReference(int*x,int*y); int temp= *x; *x=*y; 
*y=temp; 
} 
int main(){   int num1=5 ,int num2=10;   printf("Original numbers:num1=%d,num2=%d\n",num1,num2);  swapByValue(num1,num2); printf("After callByValue:num1=%d,num2=%d\n",num1,num2); 

 swapByReference(&num1,&num2); printf("After callByReference:num1=%d,num2=%d\n",num1,num2); return 0; 
}                                                                                                  
 
 
                                                

