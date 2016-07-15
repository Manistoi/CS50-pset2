/*
------------Caesar's Cipher--------------------
Prompts user for a key (an integer)
Prompts user for a letter, phrase, or sentence
Shifts the inputed phrase (the plaintext) by the key
and prints out the ciphertext
*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])

{
    if (argc != 2 ) // Makes sure user enters 2 command line arguments; otherwise quits program
     {
        printf("Usage: caesar key (int) \n");
        exit(0);
     }
    
    int key = atoi(argv[1]); //Coverts the second command line argument (the key) to integer
    printf("%i\n", key); //Prints the key in integer form; if the key isn't entered as int, prints '0'
    
    printf("What message do you wish to encypt and send: \n"); //Prompts user for plaintext
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') //if the first char of string 's' is greater than or equal to 'A' and less than or equal to 'Z'
        {
            printf("%c", ((((s[i] - 65) + key) % 26)+ 65)); //Print the the ciphertext character 
        }                                                   //The formula I used is ((((ci - 'Z') + key) % 26) + 'A')
                                                            //The reason is because the char, if a letter of the alphabet, had to loop around 
        else if (s[i] >= 'a' && s[i] <= 'z' )               //So 'a' if the key was 26 would have to come back to 'a' 
        {
            printf("%c", ((((s[i] - 97) + key) % 26)+ 97)); //Same thing here as above, except I replaced 65 with 97
        }                                                   //reason being that with lowercase letters we start with 'a' which is 97
                                                            //unlike above, where we start with 'A' which is 65
        else
        {
            printf("%c", s[i]);
        }
    }
    
    printf("\n");
    
    
}
