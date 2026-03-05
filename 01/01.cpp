// Main.c

#include <iostream>

using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
    *p_HPPotion = count;
    *p_MPPotion = count;

    return;
}

void AddPotion(int* HP_Potion, int* MP_Potion)
{
    *HP_Potion += 1;
    *MP_Potion += 1;


    return;
}


int main()
{
    const int S = 5;
    int Status[S] = { 0 };
    while (1)
    {
        cout << "레벨을 입력해주세요 " << endl;
        cin >> Status[4];

        if (Status[4] < 2)
        {
            break;
        }
        cout << "레벨초기값은 1입니다 다시 입력해주세요" << endl;
    }

    while (1)
    {
        cout << "HP를 입력해주세요 " << endl;
        cin >> Status[0];

        cout << "MP를 입력해주세요 " << endl;
        cin >> Status[1];

        if (Status[0] > 50 && Status[1] > 50)
        {
            break;
        }
        cout << "HP,MP가 최솟값을 넘기지 못했습니다 다시 입력해주세요" << endl;
    }

    while (1)
    {
        cout << "공격력을 입력해주세요 " << endl;
        cin >> Status[2];

        cout << "방어력을 입력해주세요 " << endl;
        cin >> Status[3];

        if (Status[2] > 0 && Status[3] > 0)
        {
            break;
        }
        cout << "공격력과 방어력이 최솟값을 넘기지 못했습니다 다시 입력해주세요" << endl;
    }
    cout << "레벨: " << Status[4] << endl;
    cout << "HP: " << Status[0] << endl;
    cout << "MP: " << Status[1] << endl;
    cout << "공격력: " << Status[2] << endl;
    cout << "방어력: " << Status[3] << endl;


    int HP_Potion = 0;
    int MP_Potion = 0;


    setPotion(5, &HP_Potion, &MP_Potion);

    cout << "포션이 지급되었습니다" << endl;
    cout << "HP포션:" << HP_Potion << endl;
    cout << "MP포션:" << MP_Potion << endl;
    cout << "스탯 관리 시스템" << endl;


    int Select = 0;
    int JobSelect = 0;

    while (1)
    {
        cout << "선택지를 골라주세요" << endl;
        cout << "1.HP UP / 2.MP UP / 3.공격력 UP / 4.방어력 UP / 5.현재 능력치 / 6.Level Up / 7.전직 /0 0.나가기" << endl;
        cin >> Select;

        if (Select == 0)
        {
            cout << "게임종료" << endl;
            break;
        }
        switch (Select)
        {
        case 1:
            if (HP_Potion <= 0)
            {
                cout << "포션이 없습니다" << endl;
                continue;
            }
            Status[0] += 20;
            HP_Potion -= 1;

            cout << "HP포션을 사용하셨습니다,HP 20 증가" << endl;
            cout << "HP: " << Status[0] << endl;
            cout << "HP포션: " << HP_Potion << endl;

            break;

        case 2:
            if (MP_Potion <= 0)
            {
                cout << "포션이 없습니다" << endl;
                continue;
            }
            Status[1] += 20;
            MP_Potion -= 1;

            cout << "MP포션을 사용하셨습니다,MP 20 증가" << endl;
            cout << "MP: " << Status[1] << endl;
            cout << "MP포션: " << MP_Potion << endl;

            break;

        case 3:
            Status[2] *= 2;

            cout << "공격력 2배증가" << endl;
            cout << "공격력: " << Status[2] << endl;
            break;

        case 4:
            Status[3] *= 2;

            cout << "방어력 2배증가" << endl;
            cout << "방어력: " << Status[3] << endl;

            break;

        case 5:
            cout << "레벨: " << Status[4] << endl;
            cout << "HP: " << Status[0] << endl;
            cout << "MP: " << Status[1] << endl;
            cout << "공격력: " << Status[2] << endl;
            cout << "방어력: " << Status[3] << endl;
            cout << "HP포션 :" << HP_Potion << endl;
            cout << "MP포션: " << MP_Potion << endl;

            break;

        case 6:
            Status[4] += 1;

            AddPotion(&HP_Potion, &MP_Potion);


            cout << "레벨업,포션이 하나씩 지급됩니다" << endl;
            cout << "레벨: " << Status[4] << endl;
            cout << "HP포션 :" << HP_Potion << endl;
            cout << "MP포션: " << MP_Potion << endl;

            break;

        case 7:
            if (Status[4] < 10)
            {
                cout << "레벨이 부족합니다" << endl;
                continue;
            }

            cout << "전직" << endl;
            cout << "1.검사 2.궁수 3.마법사 4.도적" << endl;
            cin >> JobSelect;

            switch (JobSelect)
            {
            case 1:
                Status[0] += 20;
                Status[2] += 20;
                Status[3] += 20;

                cout << "직업: 검사" << endl;
                cout << "레벨: " << Status[4] << endl;
                cout << "HP: " << Status[0] << endl;
                cout << "MP: " << Status[1] << endl;
                cout << "공격력: " << Status[2] << endl;
                cout << "방어력: " << Status[3] << endl;
                break;

            case 2:
                Status[0] += 10;
                Status[2] += 30;
                Status[3] += 20;

                cout << "직업: 궁수" << endl;
                cout << "레벨: " << Status[4] << endl;
                cout << "HP: " << Status[0] << endl;
                cout << "MP: " << Status[1] << endl;
                cout << "공격력: " << Status[2] << endl;
                cout << "방어력: " << Status[3] << endl;
                break;

            case 3:
                Status[0] += 10;
                Status[1] += 40;
                Status[3] += 10;

                cout << "직업: 마법사" << endl;
                cout << "레벨: " << Status[4] << endl;
                cout << "HP: " << Status[0] << endl;
                cout << "MP: " << Status[1] << endl;
                cout << "공격력: " << Status[2] << endl;
                cout << "방어력: " << Status[3] << endl;
                break;

            case 4:

                Status[0] += 10;
                Status[1] += 20;
                Status[2] += 20;
                Status[3] += 10;
                cout << "직업: 도적" << endl;
                cout << "레벨: " << Status[4] << endl;
                cout << "HP: " << Status[0] << endl;
                cout << "MP: " << Status[1] << endl;
                cout << "공격력: " << Status[2] << endl;
                cout << "방어력: " << Status[3] << endl;
                break;
            }

        }
    }


    return 0;
}