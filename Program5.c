// In C programming, a string is a sequence of characters terminated with a null character \0. For example:


// #include<stdio.h>

// int main(){
// char c[] = "c string";


// // When the compiler encounters a sequence of characters enclosed in the double quotation marks,
// //  it appends a null character \0 at the end by default.


// printf("The c[0],c[1],c[2],c[9] is %c%c%c%c",c[0],c[1],c[2],c[9]); //c s

// }






// You can use the scanf() function to read a string.

// The scanf() function reads the sequence of characters until it encounters whitespace (space, newline, tab, etc.).


// #include <stdio.h>
// int main()
// {
//     char name[20];
//     printf("Enter name: ");
//     scanf("%s", name);
//     printf("Your name is %s.", name);
//     return 0;
// }



// Output

// Enter name: Dennis Ritchie
// Your name is Dennis.
// Even though Dennis Ritchie was entered in the above program, only "Dennis" was stored in the name string. It's because there was a space after Dennis.

// Also notice that we have used the code name instead of &name with scanf().

// scanf("%s", name);
// This is because name is a char array, and we know that array names decay to pointers in C.

// Thus, the name in scanf() already points to the address of the first element in the string, which is why we don't need to use 















// You can use the fgets() function to read a line of string. And, you can use puts() to display the string.

// Example 2: fgets() and puts()
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
// Output

// Enter name: Tom Hanks
// Name: Tom Hanks











//pointer decay of array yad kro

// Example 4: Strings and Pointers
// #include <stdio.h>

// int main(void) {
//   char name[] = "Harry Potter";

//   printf("%c", *name);     // Output: H
//   printf("%c", *(name+1));   // Output: a
//   printf("%c", *(name+7));   // Output: o

//   char *namePtr;

//   namePtr = name;
//   printf("%c", *namePtr);     // Output: H
//   printf("%c", *(namePtr+1));   // Output: a
//   printf("%c", *(namePtr+7));   // Output: o
// }