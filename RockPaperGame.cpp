#include<iostream>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    int win;
    string b[3] = {"Rock", "Paper", "Scissor"};
    int userChoice, computerChoice, c;

    while(true)
    {
        cout<<"Enter 1 for Rock.\n";
        cout<<"Enter 2 for Paper.\n";
        cout<<"Enter 3 for Scissor.\n";
        cout<<"Enter your choice:\n";
        cin>>userChoice;

       computerChoice = arr[(rand() % 3)]-1;//rang is a random function in c++

        cout<<"You chose: "<<b[userChoice-1]<<"\n";
        cout<<"Computer choose: "<<b[computerChoice]<<"\n";

        if(arr[userChoice-1] == 1)
        {
            if(arr[computerChoice] == 3)
            {
                win = 1;
            }
            else if(arr[computerChoice] == 2)
            {
                win = 0;
            }
            else
            {
                win = -1;
            }
        }
        else if(arr[userChoice-1] == 2)
        {
            if(arr[computerChoice] == 1)
            {
                win = 1;
            }
            else if(arr[computerChoice] == 3)
            {
                win = 0;
            }
            else
            {
                win = -1;
            }
        }
        else
        {
            if(arr[computerChoice] == 2)
            {
                win = 1;
            }
            else if(arr[computerChoice] == 1)
            {
                win = 0;
            }
            else
            {
                win = -1;
            }
        }

        if(win == 1)
        {
            cout<<"You won!\n";
        }
        else if(win == 0)
        {
            cout<<"You lose!\n";
        }
        else
        {
            cout<<"Tie!\n";
        }

        cout<<"Do you want to play again?\n";
        cout<<"Enter 1 for YES.\n";
        cout<<"Enter 2 for NO.\n";
        cin>>c;

        if(c == 2)
        {
            cout<<"Session being terminated...\n";
            exit(0);
        }
        else if(c != 1)
        {
            cout<<"Wrong choice! Session being terminated...\n";
            exit(0);
        }
        else
        {
            cout<<"\e[1;1H\e[2J";
            computerChoice=0;
            userChoice=0;
        }
    }
    
    

    return 0;
}
