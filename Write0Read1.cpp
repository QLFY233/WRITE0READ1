#include<iostream>
#include<fstream>
#include"Write0.h"
#include"Read1.h"
#include"FindFile.h"
#include"FindFile2.h"
using namespace std;

string choose;//主菜单输入选择指令	用string防止用户输入奇怪的东西然后程序爆炸
bool doExit=0;//退出
string file="D:\\Write1Read0.txt";//默认文件位置

int main()
{

	while(doExit==0)//choose不==0或1或2时（即为其他选项），程序退出
	{

		system("cls");
		cout<<file<<endl;
		cout << "Write0Read1 is running."<<endl;
		cout << "0=Write,1=Read,2=FindFile,others=Exit" << endl;
		cin>>choose;

		if(choose=="0")
		{

			Write0( file );

		}
		else if(choose=="1")
		{

			Read1( file );

		}
		else if(choose=="2")
		{
			file=FindFile2(file);
		}
		else
		{
			doExit=1;
		}
		
	}

	cout<<"Write0Read1 is Exit."<<endl;
	system("pause");
	return 0;   
}