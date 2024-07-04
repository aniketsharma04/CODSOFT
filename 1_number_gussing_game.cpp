#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool run=true;
    while(run)
    {
        cout<<"Enter to the huessing game"<<endl;        //Welcome user 
        cout<<"I have selected a number between 1 and 100. Now try to guess it!"<<endl;     //Basic information to user 
    
        int n = 100;                 //Change n to increase/ decrease range of numbers
        int random = rand()%n+1;     //Generation and selection of random number
        cout<<random<<endl;
    
        int guess=0;
        while(guess != random)
        {
            cout<<"Enter your guessed number : ";       //Taking guessed number from the user
            cin>>guess;
        
            //Providing feedback for user's guess
            if(guess > random){                         //When guessed nmuber is heigher than random selected number 
                cout<<"Too high! Try again"<<endl;
            }
            if(guess < random){                         //When guessed number is lower than random selected number
                cout<<"Too low! Try again"<<endl;
            }
            else{                                       //When guessed number matched the random number
                cout<<"Congratulations! You guessed the correct number."<<endl;
            }
        }
        // Asking the user if they want to perform another calculation
        char choice;
        cout<<"Do you want to play once again? (y/n): ";
        cin>>choice;
        if (choice != 'y' && choice != 'Y') {
            run = false;
        }
    }
    cout<<"Thanks for playing"<<endl;
    return 0;
}