#include#include <stdio.h>

int print_title_screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##         Dino Run          ##\n");
    printf("##          V.0.1            ##\n");
    printf("##                           ##\n");
    printf("##  1. Start Game            ##\n");
    printf("##  2. How to Play           ##\n");
    printf("##  3. Exit                  ##\n");
    printf("##                           ##\n");
    printf("###############################\n");

    return 0;
}

int print_how_to_play_screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##      To Avoid Enemy       ##\n");
    printf("##                           ##\n");
    printf("##  Press Space Bar To Jump  ##\n");
    printf("##                           ##\n");
    printf("###############################\n");

    return 0;
}

int main()
{
    int game_state = 1;

    /* 게임 루프
     * while문이 계속 반복해서 입력을 받는다.
     * 입력받은 값을 game_state에 저장한다.
     */
    while (game_state)
    {
        if (game_state == 1)
        {
            print_title_screen();
        }
        else if (game_state == 2)
        {
            print_how_to_play_screen();
            printf("Return to menu? (1.yes 2.no) : ");
            scanf("%d", &game_state);

            if (game_state == 1)
            {
                game_state = 1;
            }
        }
        else if (game_state == 3)
        {
            game_state = 0;
        }
        else
        {
            printf("Invalid input. Please try again.\n");
        }
    }

    return 0;
}

