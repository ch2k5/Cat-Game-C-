#include <string>
using std::string;
#ifndef CATGAME_H
#define CATGAME_H
class cat
{
    private:
        enum furcolor {black,grey,brown};
        enum eyecolor {green,blue,Brown};
        enum hairlengh {Short,Long};
        furcolor furec;
        eyecolor eyec;
        hairlengh hairl;
    public:
        cat();
        string retfurColor(furcolor)const;
        string reteyecolor(eyecolor)const;
        string getfur()const;
        string geteye()const;
};
bool catfight(cat *c[],int size);
#endif