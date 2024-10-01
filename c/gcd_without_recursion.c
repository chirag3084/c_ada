#include <stdio.h>  
#include<time.h>
#include<math.h>
int main()  
{  
    // declare the variables  
    int n1, n2, i, GCD_Num;
	clock_t time_req;  
    printf ( " Enter any two numbers: \n ");  
    scanf ( "%d %d", &n1, &n2);   
      
    // use for loop  
    for( i = 1; i <= n1 && i <= n2; ++i)  
    {  
        if (n1 % i ==0 && n2 % i == 0)  
            GCD_Num = i; /* if n1 and n2 is completely divisible by i, the divisible number will be the GCD_Num */  
    }  
    // print the GCD of two numbers  
    printf (" GCD of two numbers %d and %d is %d.\n", n1, n2, GCD_Num);
	f();  
    return 0;  
}
void f(){
	clock_t time_req = clock();
	int i;
    for (i = 0; i < 200000; i++) {
        int a = log(i * i * i * i);
    }
    time_req = clock() - time_req;
    printf("Processor time taken for multiplication: %f "
           "seconds\n",
           (float)time_req / CLOCKS_PER_SEC);
}
