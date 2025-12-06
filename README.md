Project Title: 
Buffer Overflow Demonstration in C


The Project Description:
*This project is about a Buffer Overflow vulnerability program using C language. 
*In this project we can see how unsafe input function can overwrite the memory when user enter lager input then the actual allocated buffer size.
*A fixed size of array character [10 Bytes] is used. 
*The program ask for user input and stores that into scanf("%s"), Which doesn't check for the input length.
 Entering large input can trigger Buffer Overflow.

Aim:
*Understanding about how Buffer Overflow works.
*Knowing how the scanf("%s") is unsafe function causing overflow.
*Observing how C program behave when it's memory overwritten.
*Understanding why input validation is critical in secure programming.

How Does the Buffer Overflow happens:
*Buffer size is fixed (10 bytes).
*user enters a long string like ("abcdefghijk") more than 9 characters.
*Extra characters are moved to nearby memory.

This may cause:
            *Program crash
            *Corrupted variables
            *Unexpected output
            *Security vulnerabilities


















