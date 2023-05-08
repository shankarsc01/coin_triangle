#include <iostream>
using namespace std;
// Function for displaying the triangle of n number of rows

void display_triangle(int n)
{

    int size = n;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << " ";
        }

        for (int t = 0; t <= i; t++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}

// Function for BruteForce method to invert the given triangle of n number of rows

void bruteforce(int n)
{

    // print the triangle as it was before using display_triangle
    cout << "The triangle before applying brute force" << endl;
    display_triangle(n);
    int count = 0;

    // Apply Brute force on that triangle by displaying the triangle line by line

    cout << "The triangle after applying Brute Force :" << endl;
    for (int i = n; i > 0; i--)
    {
        for (int space = 0; space < n - i; ++space)
            cout << " ";

        for (int j = i; j > 0; j--)
        {
            cout << "* ";
            // Keeping a count on the number of coins moved
            count++;
        }
        cout << endl;
    }
    // For Time Analysis

    cout << "The numbers of coin moved is :" << count << endl;
}

// Function for Transfrom&Conquer method to invert the given triangle of n number of rows

void transform_conquer(int n)
{
    // For the complextiy of the problem we have considered the only the first 4 cases to show how the algorithm works
    switch (n)
    {
    case 2:
    {
        cout << "The triangle before applying the algorithm :" << endl;
        display_triangle(2);

        cout << "Appying the alogorithm for the triangle :" << endl;
        cout << "Here the '-' symbol represent the position from which the coin is moved " << endl;

        cout << "Here the '+' symbol represent the position to which the coin is moved " << endl;
        cout << "  -  " << endl;
        cout << " * * " << endl;
        cout << "  +  " << endl;

        cout << "The triangle after applying the algorithm :" << endl;

        for (int i = n; i > 0; i--)
        {
            for (int space = 0; space < n - i; ++space)
                cout << " ";

            for (int j = i; j > 0; j--)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

    break;

    case 3:
    {
        cout << "The triangle before applying the algorithm :" << endl;
        display_triangle(3);

        cout << "Appying the alogorithm for the triangle :" << endl;
        cout << "Here the '-' symbol represent the position from which the coin is moved " << endl;

        cout << "Here the '+' symbol represent the position to which the coin is moved " << endl;
        cout << "   -   " << endl;
        cout << "  * * +" << endl;
        cout << " * * - " << endl;
        cout << "  +  " << endl;

        cout << "The triangle after applying the algorithm :" << endl;

        for (int i = n; i > 0; i--)
        {
            for (int space = 0; space < n - i; ++space)
                cout << " ";

            for (int j = i; j > 0; j--)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

    break;

    case 4:
    {
        cout << "The triangle before applying the algorithm :" << endl;
        display_triangle(4);

        cout << "Appying the alogorithm for the triangle :" << endl;
        cout << "Here the '-' symbol represent the position from which the coin is moved " << endl;

        cout << "Here the '+' symbol represent the position to which the coin is moved " << endl;
        cout << "   -   " << endl;
        cout << "+ "
             << "* *"
             << " +"
             << endl;

        cout << " * * * " << endl;
        cout << "- "
             << "* *"
             << " -"
             << endl;
        cout << "   +   " << endl;

        cout << "The triangle after applying the algorithm :" << endl;

        for (int i = n; i > 0; i--)
        {
            for (int space = 0; space < n - i; ++space)
                cout << " ";

            for (int j = i; j > 0; j--)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

    break;
        // When the number of rows exceed more than 4 we directly print the inverted triangle
    default:
        for (int i = n; i > 0; i--)
        {
            for (int space = 0; space < n - i; ++space)
                cout << " ";

            for (int j = i; j > 0; j--)
            {
                cout << "* ";
            }
            cout << endl;
        }

        break;
    }
    // For Time Analysis of Transfrom&Conquer method
    // we have devised a compact formula through Mathematics which will give us the number of moves directly

    int count_TC;
    count_TC = (n * (n + 1)) / 6;
    cout << "The number of coins moved to invert the triangle is : " << count_TC << endl;
}

// Main Driver Function
int main()
{
    int num;
    cout << "Welcome! Let's invert a coin Triangle !" << endl;
    cout << "Enter the number of rows for the Triangle :";
    cin >> num;
    bruteforce(num);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Now applying Transform and Conquer algorithm" << endl;
    transform_conquer(num);
}