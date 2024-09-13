#include <iostream>
#include "catGame.h"
using namespace std;
int main()
{
    for(int i=0;i<20;i++)cout<<'*';
    cout<<"CAT GAME";
    for(int i=0;i<20;i++)cout<<'*';
    cout<<"\n\n";
    cout<<'\n';
    cat *c[7];
    char space;
    for (int i = 0; i < 7; i++)
    {
        cout<<"press E to enter new cat in the room:\n";
        cin>>space;
        bool checkedE= (space=='e' || space=='E');
        while(!checkedE)
        {
            cout<<"invalid input please press E to enter new cat in the room:\n";
            cin>>space;
        }
        *(c+i)=new cat;
        if(catfight(c,i))
        {
            cout<<"there is a fight\n";
            break;
        }
        else cout<<"no fight so far\n";
        if(i==6)cout<<"room is full and no fight\n";
    }
    for (int i = 0; i < 7; i++) delete c[i];
    return 0;
}