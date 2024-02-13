// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu()
{
    cout << "Please select which operation to perform:" << endl;
    cout << "1. Factorial" << endl;
    cout << "2. Arithmetic Series" << endl;
    cout << "3. Geometric Series" << endl;
    cout << "4. Exit" << endl;
    cout << "Your Selection: ";
}

void factorial()
{
    int n;
    long facto = 1.0;

    cout << "Factorial:" << endl;
    cout << "Enter a number:" << endl;
    cin >> n;

    if (n <= 0)
    {
        cout << "Nice try, please enter a POSITIVE number...:";
        cin >> n;
    }
    
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            facto *= i;
        }

        cout << n << "! = " << facto << endl;
    }
}

void arithmetic()
{
    int n;
    int d;
    int a;

    float sum(float a, float d, int n);
    {
        float sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + a;
            a = a + d;
        }
    }

    float a = 1.5, d = 0.5;

    cin >> n;
    cout << "sum of series A.P is : " << sum(a, d, n);
}

void geometric()
{
    cout << "geometric";
}

int main()
{
    int choice;
    char again;

    do
    {
        printMenu();
        cin >> choice;

        // Quit if user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1)
        {
            return 0;
        }

        else if (choice == 1)
        {
            factorial();
        }

        else if (choice == 2)
        {
            arithmetic();
        }

        else if (choice == 3)
        {
            geometric();
        }

        cout << "Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
