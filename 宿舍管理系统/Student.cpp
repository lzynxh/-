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
	cout << "姓名：" << this->name << "  学号：" << this->id << endl;
	cout << "专业：" << this->major << " 宿舍号：" << this->room_num << endl;
}

Student::~Student()
{
}
