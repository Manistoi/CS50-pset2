/*
---------------Vigenere's Cipher------------------------
Takes a key from the user (in the form of a word)
Takes plaintext from user (latter, phrase, sentence)
shifts plaintext by key
Skips over characters that are not in the alphabet
*/



#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)  //Ensures proper usage
    {
        printf("Usage: vigenere key\n");
        exit(0);
    }
    
    int kl = strlen(argv[1]); //Stores length of the key
    
    printf("Please input a message: \n"); //Get's the plaintext
    string s = GetString();               //The message that will be converted to ciphertext
    
   
    for (int i = 0, n = strlen(s), j = 0; i < n; i++, j++)
        {
            
            if ( isalpha(s[i])) //If a letter of the alphabet
                {
                    if (isupper(s[i]) && isupper(argv[1][j % kl])) //If uppercase (both plaintext and key)
                        {
                            printf("%c", (((s[i] - 65) + (argv[1][j % kl] - 65)) % 26) + 65 );
                        }
                        
                        
                        
                    else if (isupper(s[i]) && islower(argv[1][j % kl])) //If plaintext is uppercase and key is lowercase
                        {
                            printf("%c", ((((s[i] - 65) + (argv[1][j % kl] - 97)) % 26) + 65) );
                        }
                    
                    
                    
                    else if (islower(s[i]) && islower(argv[1][j % kl])) //If plaintext and key are lowercase
                    {
                        printf("%c", (((s[i] - 97) + (argv[1][j % kl] - 97)) % 26) + 97);
                    }
                    
                    else //lower plaintext char, uppercase key char
                    {
                        printf("%c", (((s[i] - 97) + (argv[1][j % kl] - 65)) % 26) + 97);
                    }
                }
           
            else {                    // If character is not a letter of alphabet
                printf("%c", s[i]);   //Eg) ! or * or space
                j--;
            }
        }
    
 
    printf("\n");
    
}
