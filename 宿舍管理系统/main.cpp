#define _CRT_NO_SECURE_WARNINGS
#include <iostream>
using namespace std;
void func1();
void func2();
void func3();
void func4();
void func5();
int main(void)
{
	int n;
	cout << "\t\t\t\t\t*****欢迎使用宿舍管理系统*****" << endl;
	cout << endl;
	cout << "1、新增学生" << endl;
	cout << "2、显示全部" << endl;
	cout << "3、搜索学生" << endl;
	cout << "4、删除学生" << endl;
	cout << "5、修改信息" << endl;
	cout << "请输入您要执行的操作:";
	cin >> n;
	switch (n)
	{
	case 1:func1();
		break;
	case 2:func2();
		break;
	case 3:func3();
		break;
	case 4:func4();
		break;
	case 5:func5();
		break;
	default:
		break;
	}
	return 0;
}