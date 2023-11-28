#include<stdio.h> 
int reverse(int n, int revr){    if(n==0){      return revr;    } else {     int lastDigit= n%10;     revr = revr*10+ lastDigit ;     return reverse(n/10,revr); 
  
   } 
  } 
   int isPalindrome(int n){     int rev = reverse (n,0);     if (n==rev){         return 1; 
  
    }else{       return 0; 
    } 
  
   } 
    int main(){     int num;     printf("Enter a number:");     scanf("%d",&num);     if (isPalindrome(num)){         printf("%d is palindrome.\n",num); 
  
    }else{      printf("%d is not a palindrome.\n", num); 
    } 
    return 0; 
} 
