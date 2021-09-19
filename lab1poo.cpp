#include <iostream>
#include <string>
using namespace std;
class Student {
    char name[256];
    int ani;

public:
    void inputstudent() {
        cout<<"----------------------------------";
        cout<<"\n> INtrodu numele studentului: "; fflush (stdin); cin.getline (name, 256);
        cout<<"\n> Introdu ani studentului : "; cin >> ani; }

    void displaystudent() {
        cout<<"----------------------------------" << endl;
        cout<<"********** Student Data **********" << endl;
        cout<<"----------------------------------";
        cout<<"\n> Numele studentului : " << name << endl;
        cout<<"\n> Anii studentului : "<< ani << endl; }
};

class Notastudent : public Student {
public:
    int first;
    int second;
    int third;
    float total;

public:
    void inputdmark() {
        inputstudent();
        cout << "\n> Introdu prima nota  : "; cin >> first;
        cout << "\n> Introdu a doua nota  : "; cin >> second;
        cout << "\n> Introdu a treia nota  : "; cin >> third; }

    void displaydmark() {
        displaystudent();
        cout << "\n> Prima nota : " << first << endl;
        cout << "\n> A doua nota : " << second << endl;
        cout << "\n> A treia nota: " << third << endl; }
};

class StudentResult : public Notastudent {
public:
    int calculate() {
        total = (first + second + third) / 3.0;
        return total; }
};

class Univer {
    char univerNume[256];
    int foundationYear;

public:
    void inputuniver() {
        cout<<"----------------------------------";
        cout<<"\n> Introdu numele universitati  : "; fflush (stdin); cin.getline (univerNume, 256);
        cout<<"\n> Introdu ani de fondare : "; cin >> foundationYear; }

    void displayuniver() {
        cout<<"----------------------------------" << endl;
        cout<<"******** University  Data ********" << endl;
        cout<<"----------------------------------" << endl;
        cout<<"> NUmele universitati : " << univerNume << endl << endl;
        cout<<"> Anii fondarii : " << foundationYear << endl << endl; }
} ;

int main() {

    Univer arr;
    cout << "\n> Introdu nr de universitati  : "; int c; cin >> c;

    int s = 0;
    for (int i = 0; i < c; i++) {
        arr.inputuniver ();
        StudentResult str;
        cout << "\n> Introdu nr de studenti : "; int n; cin >> n;
        for (int j = 0; j < n; j++) {
            str.inputdmark();
            str.displaydmark();
            str.calculate();
            s += str.calculate(); }
        arr.displayuniver();

        cout << "> Nota generala : " << (float) s / n << endl; }

    return 0; }
