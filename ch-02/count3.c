 

	

 		


#include <stdio.h>

int main(void)
 {
  int i, n, max=0;
  int num[10]={0};

 printf("0���� 9������ ������ �Է��Ͻÿ�.\n");

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

 printf("\n0 ~ 9 �� ���� ���� ���� ���� %d�̰�, %d�� ���Խ��ϴ�.\n", max, num[max]);

 return 0;
 } 
