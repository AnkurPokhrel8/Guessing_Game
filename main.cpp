#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int secretNum=rand()%10;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    bool outofGuesses=false;

    while(secretNum != guess && !outofGuesses){
            if(guessCount < guessLimit){
        cout<<"enter guess no ";
        cin>>guess;
        guessCount++;
    }else{
    outofGuesses = true;
    }}
    if(outofGuesses){
        cout<<"you lose"<<endl;

        cout<<secretNum;

    }else{

    cout<<"you win";}
    return 0;
}
