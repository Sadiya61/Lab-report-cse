 #include<stdio.h> 
 int gcd(int a,int b){ if(b==0){  
        return a; }
        else{   return gcd(b,a%b); 
} 
} 
int main(){ 
    int a,b; 
        printf("Enter the first number:");  
           scanf("%d",&a);   
             printf("Enter the second number:"); 
                 scanf("%d",&b);     if(a>=0 && b>=0){    
                          printf("The GCD of %d and %d is: %d\n",a,b,gcd(a,b)); 
    }else{    
         printf("Please enter non negative integer.\n"); 
    } 
return 0; 
} 
