#include<iostream>
#include<fstream>
using namespace std;

void Write0( const string file )
{
    bool doExit=0;
    string in;//输入文本

    fstream fileStream;
    fileStream.open( file, ios::out|ios::ate|ios::app);

    while (doExit==0)
    {

        cout<<"Write0,``Save&Exit"<<endl;

        cin>>in;

        if (in != "``")//把正常流程写在if里防止把``写进文件
        {
            fileStream << in<<endl;

            cout << endl<<"Write\t" << in << "\tSuccess" << endl;
        }
       else //如果``退出
        {
            doExit=1;
        }

    }
        fileStream.close();//记得关闭
}