#include <iostream>
#include "Utils.h"

using namespace std;

class stores
{
private:
    int number;

public:
};

void menu()
{
    int choice;
    cin >> choice;

    if (choice == 1)
    {
    }
    else if (choice == 2)
    {
    }
    else if (choice == 3)
    {
    }
    else if (choice == 4)
    {
    }
    else
    {
        cout << "GOODBYE";
    }
}

int main()
{
    cout << "Select a menu option: " << endl;
    cout << "   1. Display general grocery stores information" << endl;
    cout << "   2. Display neighborhood charts" << endl;
    cout << "   3. Find closest stores" << endl;
    cout << "   4. Search for store by name" << endl;
    cout << "   5. Exit" << endl;
    cout << "Your choice: ";

    menu();
}
