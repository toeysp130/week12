#include<iostream>
#include<iomanip>
using namespace std;
void display(int salary[],int num);
int cal_bonus(int);
int main()
{
	int np;
	cout << "Enter Number of person : ";
	cin >> np;
	int *salary = new int[np];
	for (int i = 0; i < np ; i++)
	{
		cout << "Enter the salary " << i+1 << " : ";
		cin >> salary[i];
	}
	display(salary,np);
	system("pause");
	return(0);
}
void display(int salary[],int num)
{
	cout << setfill('-') << setw(50) << "\n" ; 
	cout << "There are " << num << " persons." << endl;
	for(int i = 0; i < num ; i++)
	{
		cout << "The Salary for person " << i+1 << " = " << salary[i] << " and Bonus = " << cal_bonus(salary[i]) << endl;
	}
	cout << setfill('-') << setw(50) << "\n" ; 
}
int cal_bonus(int salary)
{
	int bonus = 0;
	bonus = salary * 2;
	return(bonus);
}
