#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{

    cout<<"Game for guessing a number taken by the comp1uter" <<endl;

    cout<<"This is a fun game, maybe a little annoying if you don't succeed. Read the rules below and give it a try."<<endl <<endl <<endl;
    cout<<"The rules are :- "<<endl;
    cout<<"# Your computer or device will select a number from the range 1-100."<<endl;
    cout<<"# After this will be done, you will have to think or maybe guess what number has your device selected"<<endl;
    cout<<"# Once you are done thinking, type the number that you think is selected by your device"<<endl;
    cout<<"# According to your guess, a comment will be displayed"<<endl;
    cout<<"# You will LOVE it, try it right now !!"<<endl <<endl <<endl <<endl;

    int number;
    number= (rand()% 100) + 1;

    int guess;
    cout<<"Guess the number: "<<endl;
    cin>>guess;

    if(guess<number)
    {
        cout<<"Your guess is smaller than the number"<<endl;
        cout<<"No problem, you tried..!!"<<endl;
    }

    else if (guess>number)
    {
        cout<<"Your guess is greater than the number"<<endl;
        cout<<"No problem, you tried..!!"<<endl;
    }

    else
    {
        cout<<"Hooray, you correctly guessed the number. A mind reading skill is in you :)"<<endl;
    }

    return 0;
}
