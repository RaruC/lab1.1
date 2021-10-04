
#include <iostream>

using namespace std;
class student{
public:
student(){
cout<<"Introduceti numele studentului:"<<endl;
cin>>name_student;
cout<<"Introduceti varsta studentului:"<<endl;
cin>>age_student;
cout<<"Introduceti numarul de cursuri:"<<endl;
cin>>n;
marks=new int[n];
int curs=1;
for(int i=0;i<n;i++){
cout<<"Introduceti nota la "<<curs++<<" cursul:"<<endl;
cin>>marks[i];
}
}
void print_student(){
int curs=1;
cout<<"Nume student:"<<name_student<<" Varsta:"<<age_student<<endl;
for(int i=0;i<n;i++){
cout<<"Note discipline: "<<curs++<<":"<<marks[i]<<endl;
}

}
float media(){
int sum=0;
for(int i=0;i<n;i++){
sum+=marks[i];
}
s=(float)sum/(float)n;
return s;
}
private:
char name_student[50];
int *marks;
int age_student;
int n;
float s;
};
class univer:public student{
public:
univer(){
cout<<"Introduceti denumirea universitatii:"<<endl;
cin>>name;
cout<<"Introduceti anul fondarii"<<endl;
cin>>age;
cout<<"Numarul de studenti:"<<endl;
cin>>count;
s=new student[count];
}
void med_s(){
float med_univ=0;
for(int i=0;i<count;i++){
med_univ+=s[i].media();
}
med_u=med_univ/count;
}
void print(){
cout<<name<<" "<<age<<endl;
for(int i=0;i<count;i++){
s[i].print_student();

}
cout<<"Media universitate:"<<med_u<<endl;
}
private:
char name[50];
int age;
int count;
student *s;
float med_u;
};
int main()
{
int n;
cout<<"Introduceti numarul de universitati:"<<endl;
cin>>n;
univer s[n];
for(int i=0;i<n;i++){
s[i].print();
}
return 0;
}
