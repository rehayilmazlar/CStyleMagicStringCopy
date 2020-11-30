# C_Style_String_Copy
This just shows a fun and weird way to copy a string in C.

  
```C
#include <stdio.h> // Standard input/output

int main() { //main function
	// could also be |char first_array = "String Copy!";| However for demonstration purposes null terminator style char array is used. Thus, it is easier to understand.
	char first_array[] = { 'S','t','r','i','n','g', ' ', 'C','o','p','y','!','\0' }; // C style string (char array)
	char empty_array[sizeof(first_array)]; // empty char array initialized to the size of first char array

	char* b = first_array; // pointer to the first array
	char* a = empty_array; // pointer to the empty array
	
	while (*a++ = *b++); // Here the magic copy happens!

	printf("First string is:  %s\n", first_array); // print out the string name1
	printf("Second string is: %s\n", empty_array); // print out the string name2

	return(0); //return 0 program has been executed successfully!
}

```
```
Output------------------------
First string is:  String Copy!
Second string is: String Copy!
```
# Explanation
After assigning pointers to char arrays, in the while loop first we dereference **a** which holds the first element's address for empty_array then set it to **b** which is also dereferenced, that means they hold the values at those addresses they point to and **<u>a's first value becomes b's first value</u>**.

Here at first, **a**'s first element holds a garbage value and then is assigned to **b**'s first value which is **'S'**, and it goes on like this until b has **'\0'** and is terminated. That's how our string is copied into the **empty_array**.
