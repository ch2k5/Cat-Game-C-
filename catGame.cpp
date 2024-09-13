#include "catGame.h"
#include <iomanip>
#include <iostream>
using std::string;
using std::cout;
cat::cat()
{
    srand(std::time(nullptr));
    furec=static_cast<furcolor>(rand()%3);
    eyec=static_cast<eyecolor>(rand()%3);
    hairl=static_cast<hairlengh>(rand()%2);
}
string cat::retfurColor(furcolor color)const
{
    switch(color) 
    {
        case black: return "Black";
        case grey: return "Grey";
        case brown: return "Brown";
        default: return "Unknown";
    }
}
string cat::reteyecolor(eyecolor color)const 
{
    switch(color) 
    {
        case green: return "Green";
        case blue: return "Blue";
        case Brown: return "Brown";
        default: return "Unknown";
    }
}
string cat::geteye()const
{
    string eye=reteyecolor(eyec);
    return eye;
}
string cat::getfur()const
{
    string fur=retfurColor(furec);
    return fur;
}
bool catfight(cat *c[],int size)
{
    int browncats=0,greycats=0,blackgreen=0,blackbleu=0,blackbrown=0;
    for (int i = 0; i <= size; i++)
    {
        if(c[i]->getfur()=="Brown")browncats++;
        else if (c[i]->getfur()=="Grey")greycats++;
        else if (c[i]->getfur()=="Black"&&c[i]->geteye()=="Green")blackgreen++;
        else if (c[i]->getfur()=="Black"&&c[i]->geteye()=="Blue")blackbleu++;
        else if (c[i]->getfur()=="Black"&&c[i]->geteye()=="Brown")blackbrown++;
    }
    cout<<"\tstatistics\n";
        cout<<"color of cat number "<<size+1<<" is : ";
        cout<<c[size]->getfur()<<'\n';
        cout<<"eye color of cat number "<<size+1<<" is : ";
        cout<<c[size]->geteye()<<'\n';
        cout<<"number of brown cats is "<<browncats<<'\n';
        cout<<"number of grey cats is "<<greycats<<'\n';
        cout<<"number of black cats with green eyes is "<<blackgreen<<'\n';
        cout<<"number of black cats with blue eyes is "<<blackbleu<<'\n';
        cout<<"number of black cats with brown eyes is "<<blackbrown<<'\n';
        if(greycats>browncats && browncats>0)
        {   
            for(int i=0;i<20;i++)cout<<'*';cout<<'\n';
            cout<<"number of grey cat is more then brown cats\n";
            return true;
        }
        else if(blackbleu>0&&blackgreen>0&&blackbrown==1)
        {
            for(int i=0;i<20;i++)cout<<'*';cout<<'\n';
            cout<<"there is at least one black cat with bleu eyes and at least one black cat with green eyes only exactly one black cat with brown eyes\n";
            return true;
        }
        else return false;
}