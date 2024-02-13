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
    int answer = 1;

    cout << "Factorial:" << endl;
    cout << "Enter a number:" << endl;
    cin >> n;

    if (n <= 0)
    {
        cout << "Nice try, please enter a POSITIVE number...:";
        cin >> n;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            cout << i << " * ";
        }

        else
        {
            cout << i << " = ";
        }

        answer *= i;
    }

        cout << answer << endl;
}

void arithmetic()
{
    int starter;
    int adder;
    int elements;
    int sum = 0;

    cout << "Arithmetic Series: " << endl;
    cout << "Enter a number to start at: ";
    cin >> starter;
    cout << "Enter a number to add each time: ";
    cin >> adder;
    cout << "Enter the number of elements in the series: ";
    cin >> elements;

    if (elements <= 0)
    {
        cout << "Nice try, please enter a POSITIVE number...: ";
        cin >> elements;
    }


    for (int i = 0; i < elements; i++)
    {
        if (i != elements - 1)
        {
            cout << starter << " + ";
        }

        else
        {
            cout << starter << " = ";
        }

        sum += starter;
        starter += adder;
    }

    cout << sum << endl; 
}

void geometric()
{
    int constant;
    int starter;
    int elements;
    int answer = 0;

    cout << "Geometric Series:" << endl;
    cout << "Enter a number to start at: ";
    cin >> starter;
    cout << "Enter a number to multiply by each time: ";
    cin >> constant;
    cout << "Enter the number of elements  in the series: ";
    cin >> elements;

    if (elements <= 0)
    {
        cout << "Nice try, please enter a POSITIVE number...: ";
        cin >> elements;
    }


    for (int i = 0; i < elements; i++)
    {
        cout << starter << " * ";
        answer = answer + starter;
        starter = starter * constant;
    }

    cout << " = " << answer << endl;
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
    } 
    
    while (again == 'y' || again == 'Y');
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
