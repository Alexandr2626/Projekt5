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

    cout << "���� ������:" << endl;
    cout << "0 - �����" << endl;
    cout << "1 - �������� ���" << endl;
    cout << "2 - ������ ���" << endl;
    cout << "3 - ��������� ��� ���� � �������" << endl;
    cout << "4 - ����� ���������� �����" << endl;
    cout << "5 - �������" << endl;
    cout << ">: ";

    while (User_Command != 0)
    {
        cout << "������� �������: ";
        cin >> User_Command;

        if (User_Command == 0)
        {
            cout << "Bye" << endl;
        }

        if (User_Command == 1)
        {
            cout << "� ����� ������� �������� ���? " << endl;
            cin >> article;

            // �������� �� ������������ ��������� �������
            if (article < 0 || article >(NUM_BALLS - 1))
            {
                cout << "��� �������" << endl;
                break;
            }

            cout << "������� ����� ���� ��������? " << endl;
            cin >> balls_in_array;
            // �������� �� ��������� �������� �����
            if (balls_in_array < 0)
            {
                cout << "����� �� ����� ���� �������������";
                break;
            }

            balls[article] += balls_in_array;
        }
        else if (User_Command == 2)
        {
            cout << "� ����� ������� ������� ����? " << endl;
            cin >> article;

            // �������� �� ������������ ��������� �������
            if (article < 0 && article >(NUM_BALLS - 1))
            {
                cout << "�� ���������� �����" << endl;
                break;
            }

            cout << "������� ����� ���� �������? " << endl;
            cin >> balls_in_array;

            // �������� �� ��������� �������� �����
            if (balls_in_array < 0)
            {
                cout << "����� �� ����� ���� �������������";
                break;
            }

            balls[article] -= balls_in_array;
        }

        else if (User_Command == 3)
        {
            cout << "������� �������: ";
            cin >> article;
            cout << "����� � ������� = " << balls[article] << endl;
        }

        else if (User_Command == 4)
        {
            for (int i = 0; i < NUM_BALLS; ++i)
            {
                all_balls_in_array += balls[i];
            }
            cout << "��� ���� � �������: " << all_balls_in_array << endl;
        }

        else if (User_Command == 5)
        {
            for (int i = 0; i < NUM_BALLS; ++i)
            {
                if (balls[i] == 0)
                {
                    cout << "������ " << i << "������ 0" << endl;
                }
            }
        }

        else if (User_Command > 5)
        {
            cout << "��� ����� �������: " << User_Command << endl;
            cout << "Bye" << endl;
            break;
        }
    }
}