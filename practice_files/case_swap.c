#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * lower_checker - will check if character is lower or upper
 * 
 * @c: the character to check
 * 
 * Return: 1 or 0 depending on result
 */

int lower_checker(int c)
{
    return (c >= 97 && c <= 122)? 1 : 0;

}

/**
 * make_lower - will recognize the case state of characters
 * in a string and alter them accordingly to be all lowercase
 * 
 * @str: the input string
 * 
 * Return: a pointer to the new string
 */

char* make_lower(const char* str)
{
    size_t i = 0;
    char* new_string = malloc(strlen(str) + 1);
    if (!new_string) return NULL;

    for ( ; str[i]; i++)
    {
        if (str[i] == 32)
        {
            new_string[i] = 32;
        }
        else if (lower_checker(str[i]) == 0) 
        {
            new_string[i] = str[i] + 32;
        } 
        else 
        {
            new_string[i] = str[i];
        }
    }
    new_string[strlen(str)] = '\0';

    return new_string;
}

int main()
{
    const char* original = "The real Project management WAS the fRiends We made alONg the way";
    
    char* lowercase = make_lower(original);

    if (lowercase!= NULL) 
    {
        printf("%s\n", lowercase);
        free(lowercase);
    }
    return (0);
}