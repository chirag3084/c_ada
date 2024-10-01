#include<stdio.h>
#include<math.h>
#include<time.h>
unsigned int GCD(unsigned i, unsigned j);
int main(){
	int a,b;
	clock_t time_req;
	printf("Enter the two integers: ");
	scanf("%d%d",&a,&b);
	printf("GCD of %d and %d is %d\n",a,b,GCD(a,b));
	t();
	return 0;
}
/* Recursive Function*/
unsigned int GCD(unsigned i, unsigned j){
   if(j>i)
      return GCD(j,i);
   if(j==0)
      return i;
   else
      return GCD(j,i%j);
}
void t(){
	clock_t time_req = clock();
	int i;
	int a;
    for( i = 0; i < 200000; i++) {
        a = log(i * i * i * i);
    }
    time_req = clock() - time_req;
    printf("Processor time taken for multiplication: %f "
           "seconds\n",
          (float)time_req / CLOCKS_PER_SEC);
      }
