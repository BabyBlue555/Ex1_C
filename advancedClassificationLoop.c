

int countDigits(int ); 
double pow(double,double); 


int isArmstrong(int num ){
int original = num;
int power=countDigits(num);
int sumPower=0;
while (num>0){
    sumPower= sumPower+ pow(num%10, power);
    num=num/10;
}
if(sumPower== original){
    return 1;
}
else{
    return 0;
}



}




int isPalindrome(int num){
    int original=num;
    int reverse=0;
    //int order=1;

    while(num>0){
        reverse= reverse*10+num%10;
        num=num/10;
      //  order=order+1;
    }
    if(reverse==original){
        return 1;
    }
    else{
        return 0;
    }

}

