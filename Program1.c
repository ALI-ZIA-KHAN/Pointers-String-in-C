// #pointers Syntax

#include<stdio.h>

int* p;
int * p;
int *p;

//All are right


int a=6;
int *q=&a;
void main(){

    // printf("The value of int *p is %u\n", p); //0


printf("The value of a is %d\n",a);
printf("The value of &a is %d\n",&a);
printf("The value of q is %d\n",*q);
printf("The value of q is %d\n",q);
printf("The value of &q is %d\n",&q);



// Here, we have declared a pointer p1 and a normal variable p2
// int* p1, p2;


//not runing below one

// int arr1[10];  
// int *v[10]=arr1;


// printf("The value of v is %u\n",v);
// printf("The value of arr is %u\n",&arr1);  





int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   //ghor talab 
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
}