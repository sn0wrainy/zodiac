#include <iostream>
using namespace std;
int main()
{
    int year,i;
    std::cerr << "Let's find out what is your chinese zodiac sign!" << endl;
    std::cerr << "When is your birthday? Input the year:";
    std::cin >> year;
    i = year % 12;
    switch(i)
    {
        case 1:
            cout << "Rooster" << endl;
            break;
        case 2:
            cout << "Dog" << endl;
            break;
        case 3:
            cout << "Pig" << endl;
            break;
        case 4:
            cout << "Rat" << endl;
            break;
        case 5:
            cout << "Ox" << endl;
            break;
        case 6:
            cout << "Tiger" << endl;
            break;
        case 7:
            cout << "Rabbit" << endl;
            break;
        case 8:
            cout << "Dragon" << endl;
            break;
        case 9:
            cout << "Snake" << endl;
            break;
        case 10:
            cout << "Horse" << endl;
            break;
        case 11:
            cout << "Sheep" << endl;
            break;
        case 0:
            cout << "Monkey" << endl;
            break;
        default:
            cout << "Wrong year!" << endl;
            break;
    }
    return 0;
}
