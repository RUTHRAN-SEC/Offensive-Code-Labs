#include <stdio.h>

int main() {
    char buffer[10];  // Fixed buffer size: 10 characters

    printf("Enter a string: ");
    scanf("%s", buffer);  //Vulnerable: scanf("%s") does NOT check buffer size!

    // If user enters more than 9 characters, buffer overflow happens.

    printf("You entered: %s\n", buffer);

    /*
      Explanation:
      *Buffer can store only 10 characters (including '\0').
      *If user types a long string like "abcdefghijklmnop",it can lead to overflows the buffer.
      *This may overwrite nearby memory, may crash the program or show unexpected output.
    */
  
    return 0;
}
