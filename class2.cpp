#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Info{
	public:
		string name;
		int id_num;
};
class Students: public Info{
	public:
		int num_of_subjects;
		int num_books;
		
		void DisplayStud(){
			cout << name<< endl;
			cout << id_num<< endl;
			cout << num_of_subjects<< endl;
			cout << num_books << endl << endl;
		}
		void InputStud(){
			cout << "\nEnter Student name: ";
			cin >> name;
			cout << "\n Enter ID num: ";
			cin >> id_num;
			cout << "\n Enter number of subjects: ";
			cin >> num_of_subjects;
			cout << "\n Enter number of books: ";
			cin >> num_books;
		}
};
class Prof: public Info{
	public:
		int tin;
		
		void DisplayPro(){
		cout << name << endl;
		cout << id_num<< endl;
		cout << tin<< endl << endl;
		}	
		void InputPro(){
		cout << "\n\nEnter Professor name: ";
		cin >> name;
		cout << "\n Enter ID num: ";
		cin >> id_num;
		cout << "\n Enter TIN number: ";
		cin >> tin;
		
		}
};
class Staff: public Info{
	public:
		int sss;
		
		void DisplaySta(){
			cout << name<< endl;
			cout << id_num<< endl;
			cout << sss<< endl << endl;
		}
		void InputSta(){
			cout <<"\n\n Enter Staff name: ";
			cin >> name;
			cout << "\n Enter ID number: ";
			cin >> id_num;
			cout << "\n Enter SSS number: ";
			cin >> sss;
		}
};


int main(){
		Students stud[3];
		Prof pro[3];
		Staff sta[3];
		//INPUT
		for(int i = 0; i < 3; i++){
			cout << "Student #" <<i+1;
			stud[i].InputStud();
		}
		system("cls");
			for(int i = 0; i < 3; i++){
				cout << "Professor #" <<i+1;
				pro[i].InputPro();
		}
		system("cls");
			for(int i = 0; i < 3; i++){
				cout << "Staff #" <<i+1;
				sta[i].InputSta();
		}
		system("cls");
		//DISPLAY
		for(int i = 0; i < 3; i++){
			cout << "Student #" <<i+1<<endl;
			stud[i].DisplayStud();
		}
		for(int i = 0; i < 3; i++){
			cout << "Professor #" <<i+1<<endl;
			pro[i].DisplayPro();
		}
		for(int i = 0; i < 3; i++){
			cout << "Staff #" <<i+1 <<endl;
			sta[i].DisplaySta();
		}



}
