#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int computer_score(string word);

int main(void)
{
    // Prompt the user for two words
    string playerOne = get_string("Input a word: \n");
    string playerTwo = get_string("Input a word: \n");

    // Compute the score of each word
    int playerOneScore = computer_score(playerOne);
    int playerTwoScore = computer_score(playerTwo);

    // Print the winner
    if (playerOneScore > playerTwoScore)
    {
        printf("Player 1 wins!\n");
    }
    else if (playerOneScore < playerTwoScore)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int computer_score(string word)
{
    // keep track of score
    int score = 0;

    // computer score for each character
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}
