#include <iostream>
#include <string>
#include <vector>
using namespace  std;

class job {
protected:
    vector<job*> list ;
     string name;
    float hour,salary;
public:
    job (string Name , float Hour)
    {
        name = Name;
        hour = Hour;
    }
};
class Professor : public  job
{
protected:
 float legalBasis = 1500,overtime = 40.5;
public:
    Professor(string name, float hour) : job(name, hour) {}
    void addPerson(){
    list.push_back(this);
 }
};
class Mechanic : public  job
{
protected:
    float legalBasis = 2000,overtime = 30.5;
public:
    Mechanic(string name, float hour) : job(name, hour) {}
    void addPerson(){
        list.push_back(this);
    }
};

class Pilot : public  job
{
protected:
    float legalBasis = 3000,overtime = 20;
public:
    Pilot(string name, float hour) : job(name, hour) {}
    void addPerson(){
        list.push_back(this);
    }
};

class Chef : public  job
{
protected:
    float legalBasis = 1000,overtime = 50.5;
public:
    Chef(string name, float hour) : job(name, hour) {}
    void addPerson(){
        list.push_back(this);
    }
};

class Police : public  job
{
protected:
    float legalBasis = 2000,overtime = 30.5;
public:
    Police(string name, float hour) : job(name, hour) {}
    void addPerson(){
        list.push_back(this);
    }
};
int main() {

    return 0;
}
