#include "SuperDog.h"

int main()
{
    int count = 0;
    Talents* db[10];
    string name, talent;
    cout << "Enter dog name: " << endl;
    cin >> name;
    Dog dog(name);
    cout << "Enter dog talents: " << endl;
    while(talent != "end")
    {
        cin >> talent;
        if(talent == "Swimming")
        {
            db[count] = new Swimming();
        }
        else if(talent == "Dancing")
        {
            db[count] = new Dancing();
        }
        else if(talent == "Counting")
        {
            db[count] = new Counting();
        }
        else if (talent != "end")
        {
            db[count] = new Other(talent);
        }
        ++count;
    }
    dog.showTalents(db, count);
    return 0;
}
