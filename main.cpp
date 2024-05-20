#include <iostream>
#include <string>
#include <vector>
using namespace  std;

class job {
protected:
     string name;
    float hour,salary;
public:
    job (string Name , float Hour)
    {
        name = Name;
        hour = Hour;
    }
   float returnSalary (){
       return  salary;
    }

    string returnName (){
        return  name;
    }
};

float  calc(float h , float lega , float over)
{
    float sum=0;
    if (h>200)
    {
        sum += lega * 200;
        sum += over * (h-200);
    }
    else
    {
        sum += h*lega;
    }
    return sum ;
}
class Professor : public  job
{
protected:
 float legalBasis = 1500,overtime = 40.5;
public:
    Professor(string name, float hour) : job(name, hour)
    {
        salary = calc(hour , legalBasis , overtime);
    }
};
class Mechanic : public  job
{
protected:
    float legalBasis = 2000,overtime = 30.5;
public:
    Mechanic(string name, float hour) : job(name, hour)
    {
        salary = calc(hour , legalBasis , overtime);
    }

};

class Pilot : public  job
{
protected:
    float legalBasis = 3000,overtime = 20;
public:
    Pilot(string name, float hour) : job(name, hour)
    {
        salary = calc(hour , legalBasis , overtime);
    }

};

class Chef : public  job
{
protected:
    float legalBasis = 1000,overtime = 50.5;
public:
    Chef(string name, float hour) : job(name, hour)
    {
        salary = calc(hour , legalBasis , overtime);
    }

};

class Police : public  job
{
protected:
    float legalBasis = 500,overtime = 10;
public:
    Police(string name, float hour) : job(name, hour)
    {
        salary = calc(hour , legalBasis , overtime);
    }
};
int main() {
    vector<job> list ;
 string input,name;
 int number = 0;
 float hu;
    for (int i = 0; i < 5; ++i) {
        cin>>input;
        cin>>number;
        if (input == "Professor")
        {
            for (int j = 0; j < number; ++j) {
                cin>>name;
                cin>>hu;
                Professor person(name , hu);
                list.push_back(person);
            }
        }
        else if(input == "Mechanic")
        {
            for (int j = 0; j < number; ++j) {
                cin>>name;
                cin>>hu;
                Mechanic person(name , hu);
                list.push_back(person);
            }
        }
        else if(input == "Pilot")
        {
            for (int j = 0; j < number; ++j) {
                cin>>name;
                cin>>hu;
                Pilot person(name , hu);
                list.push_back(person);
            }
        }
        else if(input == "Chef")
        {
            for (int j = 0; j < number; ++j) {
                cin>>name;
                cin>>hu;
                Chef person(name , hu);
                list.push_back(person);
            }
        }
        else if(input == "Police")
        {
            for (int j = 0; j < number; ++j) {
                cin>>name;
                cin>>hu;
                Police person(name , hu);
                list.push_back(person);
            }
        }
    }

        for (int i = 0; i <list.size(); ++i) {
            cout << list[i].returnName() << " " << list[i].returnSalary()<<endl;
        }
    return 0;
}
