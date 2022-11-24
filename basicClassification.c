
// fact - helping function for isStrong - calculates the factorial of the digit
int fact(int);
//countDigits - is used in order to simplify the recursions in both isArmstrong and isPalindrom
int countDigits(int); 
//calcPower - calculates the digit's power in recursion
//int calcPower(int,int); 
double pow(double , double);



int countDigits(int num){
      if(!num){ //edge case
        return 1;
    }
    int count =0;
    while (num>0){
        count=count+1;
        num=num/10;
    }
    return count;
}


int fact(int digit ){
    if(digit==0){
        return 1;
    }
    if(digit==1){
        return 1;
    }
    return digit*fact(digit-1);
}

// is prime

 int isPrime(int num){
    if(!num){ //edge case
        return 0;
    }
    for (int i = 2; i <= num/2; i++)
    {
        if (num%i == 0)
        {
            return 0;
        }
    }
    return 1;

 }

//is strong

int isStrong(int num){


    //  int sum = 0;
    // int count = countDigits(num);

    // for (int i = 0; i < count; i++)
    // {
    //     int digit = num/(int)pow(10,i)%10;
    //     sum = sum + fact(digit);
    // }

    // if (sum == num)
    // {
    //     return 1;
    // }
    // else{
    //     return 0;
    // }    
    
    int original=num;
    int sumFact=0;
      if(!num){ //edge case
        return 0;
    }

    while (num>0){
        sumFact=sumFact+ fact(num%10);
        num=num/10;
    }
    if(sumFact == original )
        return 1;  
    else 
        return 0;

}