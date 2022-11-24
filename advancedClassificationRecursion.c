//#include <math.h>
int countDigits(int ); 
//int calcPower(int,int ); 
int reverse(int );
double log10(double);
double pow(double , double);
int isArmHelp(int, int );
// int armstrong(int , int );


int isArmHelp(int num, int count){
    if(num<10){ // if it's a digit, return it using pow() function
        return (int)(pow(num,count));
    }
    else{
        return((int)(pow(num%10,count))+isArmHelp(num/10,count));
    }
}

int isArmstrong(int num ){
     int count = countDigits(num);
     if(num == isArmHelp(num,count)){
        return 1;
     }
     else{
        return 0;
     }
}


// helping function for isPalindrom
int reverse(int num){ // order= num_of_Digits-1
    int order=(int)(log10(num));
    if(num==0){
        return 0;
    }
    
    return ((num%10)*(int)(pow(10,order))+reverse(num/10));
 

} 

 ///  this function checks if a number is palindrom recursively
 int isPalindrome(int num){
    int ans=reverse(num);
    if(ans==num){
        return 1;
    }
    else{
        return 0;
    }


 }


  



