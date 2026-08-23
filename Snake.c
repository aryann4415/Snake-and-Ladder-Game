#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int position1 = 0, position2 = 0;
    int currentPlayer = 1;
    int dice;
    char choice;

    // Initialize random number generator
    srand(time(0));

    printf("=================================\n");
    printf("       SNAKE AND LADDER GAME\n");
    printf("=================================\n\n");

    printf("Rules:\n");
    printf("1. Reach position 100 to win.\n");
    printf("2. If you land on a ladder, you climb up.\n");
    printf("3. If you land on a snake, you slide down.\n");
    printf("4. Rolling a 6 gives you another turn.\n\n");

    while (position1 < 100 && position2 < 100)
    {
        printf("\nPlayer %d, press ENTER to roll the dice...", currentPlayer);
        getchar();

        dice = rand() % 6 + 1;

        printf("\nYou rolled: %d\n", dice);

        // Player 1 turn
        if (currentPlayer == 1)
        {
            if (position1 + dice <= 100)
            {
                position1 += dice;
            }

            printf("Player 1 is at position: %d\n", position1);

            // Ladders
            if (position1 == 3)
            {
                position1 = 22;
                printf("LADDER! You climbed to %d\n", position1);
            }
            else if (position1 == 8)
            {
                position1 = 26;
                printf("LADDER! You climbed to %d\n", position1);
            }
            else if (position1 == 20)
            {
                position1 = 38;
                printf("LADDER! You climbed to %d\n", position1);
            }
            else if (position1 == 28)
            {
                position1 = 84;
                printf("LADDER! You climbed to %d\n", position1);
            }
            else if (position1 == 71)
            {
                position1 = 91;
                printf("LADDER! You climbed to %d\n", position1);
            }

            // Snakes
            else if (position1 == 17)
            {
                position1 = 4;
                printf("SNAKE! You slid down to %d\n", position1);
            }
            else if (position1 == 52)
            {
                position1 = 29;
                printf("SNAKE! You slid down to %d\n", position1);
            }
            else if (position1 == 57)
            {
                position1 = 40;
                printf("SNAKE! You slid down to %d\n", position1);
            }
            else if (position1 == 62)
            {
                position1 = 22;
                printf("SNAKE! You slid down to %d\n", position1);
            }
            else if (position1 == 98)
            {
                position1 = 55;
                printf("SNAKE! You slid down to %d\n", position1);
            }

            if (position1 == 100)
            {
                printf("\n🎉 PLAYER 1 WINS THE GAME! 🎉\n");
                break;
            }
        }

        // Player 2 turn
        else
        {
            if (position2 + dice <= 100)
            {
                position2 += dice;
            }

            printf("Player 2 is at position: %d\n", position2);

            // Ladders
            if (position2 == 3)
            {
                position2 = 22;
                printf("LADDER! You climbed to %d\n", position2);
            }
            else if (position2 == 8)
            {
                position2 = 26;
                printf("LADDER! You climbed to %d\n", position2);
            }
            else if (position2 == 20)
            {
                position2 = 38;
                printf("LADDER! You climbed to %d\n", position2);
            }
            else if (position2 == 28)
            {
                position2 = 84;
                printf("LADDER! You climbed to %d\n", position2);
            }
            else if (position2 == 71)
            {
                position2 = 91;
                printf("LADDER! You climbed to %d\n", position2);
            }

            // Snakes
            else if (position2 == 17)
            {
                position2 = 4;
                printf("SNAKE! You slid down to %d\n", position2);
            }
            else if (position2 == 52)
            {
                position2 = 29;
                printf("SNAKE! You slid down to %d\n", position2);
            }
            else if (position2 == 57)
            {
                position2 = 40;
                printf("SNAKE! You slid down to %d\n", position2);
            }
            else if (position2 == 62)
            {
                position2 = 22;
                printf("SNAKE! You slid down to %d\n", position2);
            }
            else if (position2 == 98)
            {
                position2 = 55;
                printf("SNAKE! You slid down to %d\n", position2);
            }

            if (position2 == 100)
            {
                printf("\n🎉 PLAYER 2 WINS THE GAME! 🎉\n");
                break;
            }
        }

        // Change player unless a 6 was rolled
        if (dice != 6)
        {
            if (currentPlayer == 1)
                currentPlayer = 2;
            else
                currentPlayer = 1;
        }
        else
        {
            printf("You rolled a 6! You get another turn!\n");
        }
    }

    return 0;
}