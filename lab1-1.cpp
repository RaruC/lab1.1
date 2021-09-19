
#include <iostream>
#include <string>

using namespace std;

class Monitors
{
public:
    string Culoare;
    double Dimensiune;
    int Resolutie;

    void inputProp()
{
    cout <<"\nCuloarea este:"<<Culoare;
    cout <<"\nDimensiunea este:"<<Dimensiune;
    cout <<"\nResolutia este:"<<Resolutie;
    cout<<"\n\n";
}
};
int main()
{
    Monitors FirstMonitor;
    FirstMonitor.Culoare="verde";
    FirstMonitor.Dimensiune=400;
    FirstMonitor.Resolutie=720;

   FirstMonitor.inputProp();

    Monitors SecondMonitor;
  SecondMonitor.Culoare="alb";
    SecondMonitor.Dimensiune=200;
    SecondMonitor.Resolutie=720;

    SecondMonitor.inputProp();
     if(FirstMonitor.Culoare == SecondMonitor.Culoare){
        cout<<"Culoarea la monitoare este la fel";
     }else{
     cout<<"Culoarea la monitoare nu este la fel\n\n";
     }
     if(FirstMonitor.Dimensiune == SecondMonitor.Dimensiune){
        cout<<"\n\nDimensiunea la monitoare este la fel";
        cout<<"\n\n";
     }else{
     cout<<"Dimensiunea la monitoare nu este la fel";
     cout<<"\n\n";
     }
     if(FirstMonitor.Resolutie == SecondMonitor.Resolutie){
        cout<<"Rezolutia la monitoare este la fel";
        cout<<"\n\n";
     }else{
     cout<<"Rezolutia la monitoare nu este la fel";

     }
}
