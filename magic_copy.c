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


//Output------------------------
//First string is:  String Copy!
//Second string is: String Copy!
//Output------------------------
