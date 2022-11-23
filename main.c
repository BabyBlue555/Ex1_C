#include <stdio.h>
#include "NumClass.h"
#include <math.h>


int main(){

int num1=0;
int num2=0;
int max=0;
int min=0;



scanf("%d",&num1);
scanf("%d",&num2);



min = num1<num2 ? num1 : num2;
max = num1>num2 ? num1: num2;

int i=0;
//printf("\n");

printf("The Armstrong numbers are: ");
  for(i=min;i<=max;i++){
      if(isArmstrong(i)){ // factorial
            printf("%d " , i );
       
    
      }
  }
//printf("\n");

printf("\nThe Palindromes are: ");   
for(i=min;i<=max;i++){
    if(isPalindrome(i)){ 
          printf( "%d ", i);
        
    
    }
}
//printf("\n");


printf("\nThe Prime numbers are: ");
for(i= min;i<=max;i++){
        int ans= isPrime(i);
        if(ans){
          printf("%d " , i );
      
        
        }
}
// printf("\n");

printf("\nThe Strong numbers are: ");
for(i=min;i<=max;i++){
    if(isStrong(i)){ // power
            printf("%d " , i );
       
    
    }
}
printf("\n");

return 0;


}
