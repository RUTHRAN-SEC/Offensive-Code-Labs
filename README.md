Project Title: 
Buffer Overflow Demonstration in C


The Project Description:
This project is about a Buffer Overflow vulnerability program using C language. 
In this project we can see how unsafe input function can overwrite the memory when user enter lager input then the actual allocated buffer size.

A fixed size of array character [10 Bytes] is used. 
The program ask for user input and stores that into scanf("%s"), Which doesn't check for the input length.Entering large input can trigger Buffer Overflow.

Aim:
Understanding how Buffer Overflow happens by knowing how scanf("%s") is an unsafe function that can lead to Overflow.
When user enters large input the scanf("%s") doesn't check for the lenght, also we can observe how the C program behaves.
Knowing the importents of input validation.

How Does the Buffer Overflow happens:
In the C program Buffer size is fixed (10 bytes) When user enters a long string like ("abcdefghijk") more than 9 characters, Extra characters are moved to the nearby memory. where the nearby memory is overwritten that may crash the program or gives unexpected output.

This may cause:
            *Program crash
            *Corrupted variables
            *Unexpected output
            *Security vulnerabilities


















