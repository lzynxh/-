#include "Student.h"



Student::Student()
{
}

Student::Student(int id, string name, int room_num,string major)
{
	this->name = name;
	this->id = id;
	this->room_num = room_num;
	this->major = major;
}

void Student::print()
{
	cout << "������" << this->name << "  ѧ�ţ�" << this->id << endl;
	cout << "רҵ��" << this->major << " ����ţ�" << this->room_num << endl;
}

Student::~Student()
{
}
