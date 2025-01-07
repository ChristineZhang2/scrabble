#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string word = get_string("Enter a string: ");

    for (int i = 0; i < strlen(get_string); i++)
    {
        if(word[i] > word[i-1])
        {
            print("NO\n");
            return 0;
            //run to completion
        }
    }

    printf("Yes\n");
    // for (int i = 0; i < strlen(chosenString); i++)
    // {
    //     printf("%c",chosenString[i]);
    //     printf("\n");
    // }

}
