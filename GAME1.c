// this  is Rock Paper Scissors  game //
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
// using macros for declaration variable //
#define STONE 's'
#define PAPER 'p'
#define SCISSORS 'z'
// using if -- statments for the STONE,PAPER ,SCISSORS & user and computer//
int game(char you, char computer)
{
    if (you == computer)
    {
        return -1;
    }

    else if (you == 's' && computer == 'z')
    {
        return 1;
    }
    else if (you == 'z' && computer == 's')
    {
        return 0;
    }

    if (you == 'p' && computer == 'z')
    {
        return 0;
    }
    else if (you == 'z' && computer == 'p')
    {
        return 1;
    }

    if (you == 'p' && computer == 's')
    {
        return 1;
    }
    else if (you == 's' && computer == 'p')
    {
        return 0;
    }
}
int main()
{
    int n;
    int you, computer, result;

    srand(time(NULL));
    n = rand() % 100;

    if (n < 33)
    {
        computer = 's';
    }
    else if (n > 33 && n < 66)
    {
        computer = 'p';
    }
    else
    {
        computer = 'z';
    }

    printf("enter s for STONE\n, enter p for PAPER\n , enter a z for SCISSOR\n");
    scanf("%c", &you);

    result=game(you, computer);
    
    if (result == -1)
    {
        printf("the match is draw\n");
    }
    else if (result == 1)
    {
        printf("you win the match\n");
    }
    else if (result == 0)
    {
        printf("computer win the match\n");
    }

    return 0;
    
}