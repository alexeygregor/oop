#include "SuperDog.h"

Other::Other(string inTalent)
{
    talent = inTalent;
}
void Other::talents()
{
    cout << talent << endl;
}

void Swimming::talents()
{
    cout << "Swimming" << endl;
}

void Dancing::talents()
{
    cout << "Dancing" << endl;
}

void Counting::talents()
{
    cout << "Counting" << endl;
}

Dog::Dog(string inName)
{
    name = inName;
}
string Dog::getName()
{
    return name;
}
void Dog::showTalents(Talents* db[10], int count)
{
    cout << "\nThis is " << getName() << " and it has some talents: " << endl;
    for(int i = 0; i < count - 1; ++i)
    {
        cout << "\tIt can ";
        db[i]->talents();
    }
}
