// friendClassSatu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class siswa;
class orang
{
private:
	string nama;

public:
	void setNama(string pNama);
	friend class siswa;
};

class siswa
{
private:
	int id;

public:
	void setId(int pId);
	void displayAll(orang& a);

};
void siswa::displayAll(orang& a)
{
	cout << id << endl << a.nama;
}
void orang::setNama(string pNama)
{
	nama = pNama;
}
void siswa::setId(int pid)
{
	id = pid;
}




