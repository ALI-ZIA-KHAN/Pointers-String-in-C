// #include <stdio.h>
// int main() {
//    int x[4];
//    int i;

//    for(i = 0; i < 4; ++i) {
//       printf("&x[%d] = %p\n", i, &x[i]);
//    }
   
//    //note x is giving addrss of array and it is same as of &x[0] as it points to first element of array
//    printf("Address of array x: %p", x);

//    return 0;

// //    From the above example, it is clear that &x[0] is equivalent to x. And, x[0] is equivalent to *x.
// }





// #include <stdio.h>
// int main() {

//   int i, x[6], sum = 0;

//   printf("Enter 6 numbers: ");

//   for(i = 0; i < 6; ++i) {
//   // Equivalent to scanf("%d", &x[i]);
//       scanf("%d", x+i);

//   // Equivalent to sum += x[i]
//       sum += *(x+i);
//   }

//   printf("Sum = %d", sum);

//   return 0;
// }


// In most contexts, array names decay to pointers. In simple words, array names are converted to pointers. That's the reason why you can use pointers to access elements of arrays. 
// However, you should remember that pointers and arrays are not the same.










#include <stdio.h>
int main() {

  int x[5] = {1, 2, 3, 8, 5};
  int* ptr;

  // ptr is assigned the address of the third element
  ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);   // 3
  printf("*(ptr+1) = %d \n", *(ptr+1)); // 8

///imp this
    printf("*(ptr+1) = %d \n", *ptr+1); //4

  printf("*(ptr-1) = %d", *(ptr-1));  // 2

  return 0;
}