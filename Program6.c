// The strlen() function calculates the length of a given string.

// The strlen() function takes a string as an argument and returns its length. The returned value is of type size_t (the unsigned integer type).

// It is defined in the <string.h> header file.

// Example: C strlen() function
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[20]="Program";
//     char b[20]={'P','r','o','g','r','a','m','\0'};

//     // using the %zu format specifier to print size_t
//     printf("Length of string a = %zu \n",strlen(a));
//     printf("Length of string b = %zu \n",strlen(b));

//     return 0;
// }
// Output

// Length of string a = 7
// Length of string b = 7
// Note that the strlen() function doesn't count the null character \0 while calculating the length.



















// The strcpy() function copies the string pointed by source (including the null character) to the destination.
// The strcpy() function also returns the copied string.
// The strcpy() function is defined in the string.h header file.

// Example: C strcpy()
// #include <stdio.h>
// #include <string.h>

// int main() {
//   char str1[20] = "C programming";
//   char str2[20];

//   // copying str1 to str2
//   strcpy(str2, str1);

//   puts(str2); // C programming

//   return 0;
// }
// Output

// C programming
// Note: When you use strcpy(), the size of the destination string should be large enough to store the copied string. Otherwise, it may result in undefined behavior.


















// The strcat() function concatenates the destination string and the source string, and the result is stored in the destination string.

// Example: C strcat() function
// #include <stdio.h>
// #include <string.h>
// int main() {
//    char str1[100] = "This is ", str2[] = "programiz.com";

//    // concatenates str1 and str2
//    // the resultant string is stored in str1.
//    strcat(str1, str2);

//    puts(str1);
//    puts(str2);

//    return 0;
// }
// Output

// This is programiz.com
// programiz.com
// Note: When we use strcat(), the size of the destination string should be large enough to store the resultant string. If not, we will get the segmentation fault error.















// C strcmp()
// In this tutorial, you will learn to compare two strings using the strcmp() function.

// The strcmp() compares two strings character by character. If the strings are equal, the function returns 0.