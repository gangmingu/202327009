#include <stdio.h>

int main(){
    int attack = 0;
    int enemy_hp = 30;

    printf("주인공의 공격력을 입력하세요 : ");
    scanf("%d", &attack);

    printf("주인공은 공격력이 %d 입니다. \n", attack);
    printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n", attack);

    enemy_hp -= attack;
    if (enemy_hp <= 0)
    {
        enemy_hp = 0;
        printf("적의 잔여 HP : %d\n\n", enemy_hp);
        printf("적을 물리치셨습니다! \n\n");
        printf("Happy End");
    }
    else
    {
        printf("적의 잔여 HP : %d\n\n", enemy_hp);
        printf("적이 주인공을 공격하여 주인공이 뒤졌습니다. \n\n");
        printf("Game Over");
    }
    return 0;
}
