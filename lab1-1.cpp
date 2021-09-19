/*  - Create a program where you can manipulate a monitor object which has color, dimensions and resolution.
    Perform the following steps:
    1. Create a monitor.
    2. Update the monitor's properties.
    3. Create second monitor and then compare with first one created above.*/
#include <iostream>
#include <string>
using namespace std;

class Monitor{
    private:
    string color;
    int dimension;
    int resolution;

    public:
        void setColor(string setC){
        this->color = setC;
        }
    public:
        void setDimension(int setD){
        this->dimension = setD;
    }
    public:
        void setResolution(int setR){
        this->resolution = setR;
    }
    public:
        Monitor1(){
        this->color = "Black";
        this->dimension = 1080;
        this->resolution = 720;
        }
    public:
        Monitor2(){
        this->color = "Pink";
        this->dimension = 1600;
        this->resolution = 1200;
        }

    public:
        updateMonitor(string setC, int setD, int setR){
        this->color = setC;
        this->dimension = setD;
        this->resolution = setR;
        }
    public:
        string getColor(){
        return this->color;
    }
    public:
        int getDimension(){
        return this->dimension;
    }
    public:
        int getResolution(){
        return this->resolution;
    }
};

int main(){
    Monitor myMonitor;
    myMonitor.Monitor1();

    cout<<"The first monitor"<<endl;
    cout<<"The monitor color: "<< myMonitor.getColor() <<endl;
    cout<<"The monitor dimension: "<< myMonitor.getDimension() <<endl;
    cout<<"The monitor resolution: "<< myMonitor.getResolution() <<endl;
    cout<<"\n\n";

    myMonitor.updateMonitor("Pink", 1600, 1200);
    cout<<"The first monitor updated"<<endl;
    cout<<"The monitor color: "<< myMonitor.getColor() <<endl;
    cout<<"The monitor dimension: "<< myMonitor.getDimension() <<endl;
    cout<<"The monitor resolution: "<< myMonitor.getResolution() <<endl;
    cout<<"\n\n";

    myMonitor.Monitor2();
    cout<<"The second monitor"<<endl;
    cout<<"The monitor color: "<< myMonitor.getColor() <<endl;
    cout<<"The monitor dimension: "<< myMonitor.getDimension() <<endl;
    cout<<"The monitor resolution: "<< myMonitor.getResolution() <<endl;
    cout<<"\n\n";

    if ( myMonitor.Monitor1()== myMonitor.Monitor2()){
        cout << "Da,monitaorele sunt la fel.\n";
    }else{
        cout << "Nu,monitoarle sunt diferite.\n";
    }

    return 0;
}
 /* string color;
    int dimension, resolution;

    cout << "Enter the color: ";
    cin >> color;
    myMonitor.setColor(color);

    cout << "Enter the dimension: ";
    cin >> dimension;
    myMonitor.setDimension(dimension);

    cout << "Enter the resolution: ";
    cin >> resolution;
    myMonitor.setResolution(resolution);*/

