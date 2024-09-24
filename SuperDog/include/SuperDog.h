#pragma once
#include <iostream>
#include <string>
using namespace std;

class Talents
{
  public:
    virtual void talents() = 0;
};

class Other : virtual public Talents
{
    string talent;
  public:
    Other(string inTalent);

    virtual void talents();
};

class Swimming : virtual public Talents
{
  public:
    virtual void talents();
};

class Dancing : virtual public Talents
{
  public:
    virtual void talents();
};

class Counting : virtual public Talents
{
  public:
    virtual void talents();
};

class Dog
{
    string name;
  public:
    Dog(string inName);
    string getName();
    void showTalents(Talents* db[10], int count);
};
