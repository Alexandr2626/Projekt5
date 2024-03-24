#include <iostream>

using namespace std;
const int NUM_BALLS = 20;

int main()
{
    setlocale(LC_ALL, "RU");

    int User_Command = -1;
    int balls[NUM_BALLS];
    int article = 0;
    int balls_in_array = 0;
    int all_balls_in_array = 0;

    for (int i = 0; i < NUM_BALLS; i++)
    {
        balls[i] = 0;
    }

    cout << "Лист команд:" << endl;
    cout << "0 - Выход" << endl;
    cout << "1 - Добавить мяч" << endl;
    cout << "2 - Убрать мяч" << endl;
    cout << "3 - Посчитать все мячи в артикле" << endl;
    cout << "4 - Общее количество мячей" << endl;
    cout << "5 - Артиклы" << endl;
    cout << ">: ";

    while (User_Command != 0)
    {
        cout << "Введите команду: ";
        cin >> User_Command;

        if (User_Command == 0)
        {
            cout << "Bye" << endl;
        }

        if (User_Command == 1)
        {
            cout << "В каком артикле добавить мяч? " << endl;
            cin >> article;

            // Проверка на правильность введённого артикля
            if (article < 0 || article >(NUM_BALLS - 1))
            {
                cout << "Нет артикля" << endl;
                break;
            }

            cout << "Сколько мячей надо добавить? " << endl;
            cin >> balls_in_array;
            // Проверка на отрицание введённых мячей
            if (balls_in_array < 0)
            {
                cout << "Число не может быть отрицательным";
                break;
            }

            balls[article] += balls_in_array;
        }
        else if (User_Command == 2)
        {
            cout << "В каком артикле удалить мячи? " << endl;
            cin >> article;

            // Проверка на правильность введённого артикля
            if (article < 0 && article >(NUM_BALLS - 1))
            {
                cout << "Не корректное число" << endl;
                break;
            }

            cout << "Сколько мячей надо удалить? " << endl;
            cin >> balls_in_array;

            // Проверка на отрицание введённых мячей
            if (balls_in_array < 0)
            {
                cout << "Число не может быть отрицательным";
                break;
            }

            balls[article] -= balls_in_array;
        }

        else if (User_Command == 3)
        {
            cout << "Введите артикль: ";
            cin >> article;
            cout << "Мячей в артикле = " << balls[article] << endl;
        }

        else if (User_Command == 4)
        {
            for (int i = 0; i < NUM_BALLS; ++i)
            {
                all_balls_in_array += balls[i];
            }
            cout << "Все мячи в массиве: " << all_balls_in_array << endl;
        }

        else if (User_Command == 5)
        {
            for (int i = 0; i < NUM_BALLS; ++i)
            {
                if (balls[i] == 0)
                {
                    cout << "Ячейка " << i << "хранит 0" << endl;
                }
            }
        }

        else if (User_Command > 5)
        {
            cout << "Нет такой команды: " << User_Command << endl;
            cout << "Bye" << endl;
            break;
        }
    }
}