#include <stdio.h>

int main(){
    int attack = 0;
    int enemy_hp = 30;

    scanf("%d", &attack);
    printf("주인공의 공격력을 입력하세요 : %d \n", attack);
    printf("주인공은 공격력이 %d 입니다. \n", attack);
    printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다. .\n\n", attack);

    enemy_hp -= attack;
    if (enemy_hp <= 0){
        printf("적을 물리쳤습니다.! \n\n");
        printf("Happy End");
    }
    else {
        printf("적이 주인공을 공격하여 5의 데미지를 입혔습니다. \n\n");
        printf("주인공의 체력이 5 감소하여 %d입니다.\n\n", attack-5);
        if (attack-5 <= 0) {
            printf("주인공의 체력이 0이 되어 주인공 패배! \n\n");
            printf("Game Over");
        }
        else {
            printf("적의 잔여 HP : %d\n\n", enemy_hp);
        }
    }
    return 0;
}
