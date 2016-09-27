#include <stdio.h>

int main(void) {

 

 int iarray[] = {10,20,30,40};

 

 printf("%d\n",iarray);         // a
 printf("%d\n",&iarray[0]);  // a
 printf("%d\n",iarray +1);     // a + 4
 printf("%d\n",&iarray[1]);  // a + 4

 

 printf("%d\n",*iarray);          //10
 printf("%d\n",*iarray + 1);     //11
 printf("%d\n",*(iarray + 1));  //20 , iarray[1]

 

 printf("%d\n",iarray[4]); 
} 