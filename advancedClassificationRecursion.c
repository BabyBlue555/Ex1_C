//#include <math.h>
int countDigits(int ); 
int calcPower(int,int ); 
int reverse(int );
double log10(double);
double pow(double , double);
// int armstrong(int , int );



// // a helping recursion function for isArmstrong
// int armstrong(int num, int numDigits){
//     if(num==0){ // if num==0
//         return 0;
//     }
//     else
//         return calcPower((num%10),numDigits)+ armstrong(num/10,numDigits);
// }

// int isArmstrong(int num ){
//     int ans = armstrong(num, countDigits(num));
//     if(ans){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

int isArmstrong(int num ){
int original = num;
int power=countDigits(num);
int sumPower=0;
while (num>0){
    sumPower= sumPower+ calcPower(num%10, power); // recursion
    num=num/10;
}
if(sumPower== original){
    return 1;
}
else{
    return 0;
}
}


int reverse(int num){ // order= num_of_Digits-1
    int order=(int)log10(num);
    if(num==0){
        return 0;
    }
    
    return ((num%10)*(int)(pow(10,order))+reverse(num/10));
 

} // helping function

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


    // if(countDigits(num)<2){
    //     return 1;
    // }

    // if(num%10 == (num / (calcPower(10,countDigits(num)-1))))
    //     return isPalindrome((num % calcPower(10,countDigits(num)-1 ) )/10); // taking down the first and last digits
    // else
    //     return 0;    




