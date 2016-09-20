#include <iostream>
#include <string>
#include <list>

using namespace std;

void ShowMenu()
{
    cout << "********** -Polynomial Program- **********" << endl;
    cout << endl;

    cout << "Please enter a polynomial: " << endl;
    //call a function that inserts element in the list

    string yesOrno;

    do {
        cout << "Enter another polynomial?" << endl;
        cout << "Enter Y or N: " << endl;

        getline(cin, yesOrno);

        if (yesOrno == "Y" || yesOrno == "Yes" || yesOrno == "y" || yesOrno == "yes")
        {
            //push item into list by calling a function that inserts element in the list
        }
    } while (yesOrno == "N" || yesOrno == "No" || yesOrno == "n" || yesOrno == "no");
}

int main()
{
    ShowMenu();
}