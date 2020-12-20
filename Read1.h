#include<iostream>
#include<fstream>
using namespace std;

void Read1(const string file)
{
	string out;//输出缓冲区
	bool doExit=0;

	fstream fileStream( file , ios::in);

	while (doExit == 0)
	{
		cout << "Read1,``Exit" << endl;

		cin >> out;

		if (out != "``")//把正常流程写在if里防止把``写进文件
		{

			while (getline(fileStream,out))//读取并输出
			{
				cout <<out << endl;
			}

		}
		else //如果``退出
		{
			doExit = 1;
		}
	}
	fileStream.close();//记得关闭
}