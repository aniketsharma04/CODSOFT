#include<bits/stdc++.h>
using namespace std;

int main() 
{
    double numb1, numb2;
    char operation;
    bool run = true;

    while (run) 
    {
        cout << "Enter the first number: ";     //Taking first number as input from the user
        cin >> numb1;

        cout << "Enter the operation which you want to Perform (+, -, *, /): ";     // Input the operation
        cin >> operation;

        cout << "Enter the second number: ";    //Taking second number as input from the user
        cin >> numb2;

        switch (operation) {        // Performing operation
            case '+':
                cout<<"Result: "<< numb1+numb2 << endl;
                break;
            case '-':
                cout<<"Result: "<< numb1-numb2 << endl;
                break;
            case '*':
                cout<<"Result: "<< numb1*numb2 << endl;
                break;
            case '/':
                if (numb2 != 0) {
                    cout<<"Result: "<< numb1/numb2 << endl;
                } else {
                    cout <<"Error: Division by zero is not allowed."<<endl;
                }
                break;
            default:
                cout <<"Error: Invalid operation please try again." << endl;
                break;
        }

        // Asking the user if they want to perform another calculation
        char choice;
        cout<<"Do you want to perform another calculation? (y/n): ";
        cin>>choice;
        if (choice != 'y' && choice != 'Y') {
            run = false;
        }
    }

    cout<<"Calculator program terminated."<<endl;
    return 0;
}