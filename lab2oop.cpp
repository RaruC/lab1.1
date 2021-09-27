#include <iostream>
#include <queue>
#include <cstdlib>
#include<conio.h>
#include<stdlib.h>
using namespace std;

#define M 10

class Box
{
public:
	int height;
	int	width;
	int depth;
public:
	Box()//constructorul fara paramentri
	{
		height = 0;
		width = 0;
		depth = 0;
	}
public:
	Box(int h, int w, int d) //constructorul cu paramentri
	{
		height = h;
		width = w;
		depth = d;
	}
public: void //functia de citire a datelor
	Read(){
		cout << "\n\t---Introduceti datele---" << endl;
		cout << "\tInaltimea:";
		cin >> height;
		cout << "\tLatimea:" ;
		cin >> width;
		cout << "\tAdincimea:" ;
		cin >> depth;
	}
public: void // functia de afisare a datelor
	Display() {
		cout << "\n\t---Afisarea datele---" << endl;
		cout << "\tInaltimea:" << height <<endl;
		cout << "\tLatimea:" << width << endl;
		cout << "\tAdincimea:" << depth << endl;
	}
public: int Volum() {
	return height * width * depth;
}
public: int Aria() {
	return 2*(height*width + height*depth+width*depth);
}
};


//Clasa coada

class  Queue
{
public:
	int tab[M];// staocarea elementelor in tabel
	int nr_elem_Max;//numarul maxim  de elemente
	int prim_Elem;//primul element al cozii
	int ult_Elem;//ultimul element
	int c; // numarul de elemente din coada

int Marime() {
		return c;
	}
bool Full() {
		return (Marime() == nr_elem_Max);
	}
public:
	Queue() {
		prim_Elem = 0;
		ult_Elem = 0;
	}
public:
	Queue( int prim, int u) {
		prim_Elem = prim;
		ult_Elem = u;
	}
		//Citirea datelor de la tastatura
public:	void
	Push_Queue() {
		if (ult_Elem == M)
			cout << "\n\tNumarul maxim a fost atins!";
		else {
			cout << "\n\tIntroduceti valoarea : ";
			cin >> nr_elem_Max;
			cout << "\n\tPozitia : " << ult_Elem + 1 << "  Valoarea  : " << nr_elem_Max;
			tab[ult_Elem++] = nr_elem_Max;
		}
}
	  // functia de afisare a datelor
public:	 void
	Display() {
		  cout << "\n\tMarimea : " << (ult_Elem -prim_Elem);
		  for (int i = nr_elem_Max; i < ult_Elem; i++)
			  cout << "\n--Elementul : " << i << " , Valoare  : " << tab[i];
	  }
public:	 void
	 PoP_Queue() {
	if (prim_Elem == ult_Elem)
		cout << "\n\tCoada este fara elemente!";
	else {
		cout << "\n\tPozitia : " << prim_Elem + 1 << " , Valoarea stearsa  :" << tab[prim_Elem];
		prim_Elem++;
	}
}
};

int main() {
	queue <int> q;
	Queue Q;
	Box b;
	int n;//numarul de cutii
	int m;//numarul de elemente in coada
	cout << "\n\t----Problema ----";
	cout << "\n\tIntroduceti numarul de elemente:";
	cin >> n;// numarul de elemete
	for (int i = 0; i < n; i++)//ciclu de citire/afisare a nr elemente de le tasta
	{
		b.Read();
		b.Display();
		cout << "\n\tVolumul cutiei: "<<b.Volum();
		cout << "\n\tAria cutiei: " << b.Aria()<<endl;
	}
	//Coada utilizind biblioteca
	cout << "\n\t---------------------------------------------";
	cout << "\n\t----Problema Coada ----";
	cout << "\n\n\t---Afisarea cozii---"<<endl;
	cout << "\n\tIntroduceti numarul de elemente:";
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cout << "\tElemetele:"<<i<<endl;
		q.push(i);//adaugarea elem
	}
	cout << "\n\tMarimea cozii:" << q.size() << endl;
	cout << "\n\tPrimul element: " << q.front() << endl;
	cout << "\n\tUltimul element: " << q.back() << endl;
	q.pop(); //eliminarea
	cout << "\n\tMarimea cozii finale:" << q.size() << endl;
	cout << "\n\t---------------------------------------------";
	cout << "\n\t----Problema Coada prin Clasa----";

	Q.Push_Queue();
	Q.Display();
	Q.PoP_Queue();
}



