#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

class Animal
{
private:
	int id,age;
	char name[50],color[50],actions[100];
public:
	Animal()
	{
		cout << "Enter Animal ID: "; cin >> id;
		cout << "Enter Animal Name: "; cin.getline(name,50,'.');
		cout << "Enter Animal Age: "; cin >> age;
		cout << "Enter Animal Color: "; cin.getline(color,50,'.');
		cout << "Enter Animal Actions: "; cin.getline(actions,100,'.');
	}
	void get_data()
	{
		cout << "Enter ID	"; 
		cin >> id;
		cout << "Enter Name	"; 
		cin >> name;
		cout << "Enter Age	"; 
		cin >> age;
		cout << "Enter Color    "; 
		cin >> color;
		cout << "Enter Actions  "; 
		cin >> actions;
	}
	void show_data()
	{
		cout << "Animal ID is : " << id << "\n";
		cout << "Animal Name is : " << name << "\n";
		cout << "Animal Age is : " << age << "\n";
		cout << "Animal Color is : " << color << "\n";
		cout << "Animal Actions is : " << actions<<"\n"; 
		system("pause");
	}
	void change_data(int i, char n[50], int ag, char c[50], char act[100])
	{
		id=i;
		strcpy_s(name,n);
		age=ag;
		strcpy_s(color,c);
		strcpy_s(actions,act);
	}
};

int main()
{
	Animal a;
	int choice;
	do{
		system("cls");
		cout << "---------->Welcome in menue<-----------\n";
		cout << " 1) Add Animal \n";
		cout << " 2) Show data of Animal  \n";
		cout << " 3) Change data of Animal \n";
		cout << " 4) Exit \n";
		cout << " Please choice any number :";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
				  a.get_data();
				  break;
		}
		case 2:
		{
				  a.show_data();
				  break;
		}
		case 3:
		{
				  a.change_data(3604, "Cat", 4, "brwon", "run && eat && dance");
				  break;
		}
		case 4:
		{
				  exit(true);
				  break;
		}
		default:
			cout << "you enter invaild number \n";
		}
	} while (true);
}