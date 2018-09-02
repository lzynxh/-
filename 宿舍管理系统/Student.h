#pragma once
#include<string>
#include<iostream>
using namespace std;
class Student
{
public:
	Student();
	Student(int id, string name, int room_num,string major);
	~Student();
	void print();
private:
	int id;
	int room_num;
	string major;
	string name;
	
};

