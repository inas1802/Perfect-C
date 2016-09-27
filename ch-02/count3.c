 

	

 		


#include <stdio.h>

int main(void)
 {
  int i, n, max=0;
  int num[10]={0};

 printf("0에서 9까지의 정수를 입력하시오.\n");

 for(i=0 ; i<20 ; i++)
  {
   do
   {
    scanf("%d", &n);
   }while(!(n>=0 && n<=9));

  num[n]++;
  }

 for(i=0 ; i<10 ; i++)
   max = (num[i]>num[max]) ? i : max;

 printf("\n0 ~ 9 중 가장 많이 나온 수는 %d이고, %d번 나왔습니다.\n", max, num[max]);

 return 0;
 } 
