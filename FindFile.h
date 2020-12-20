#include<string>
string FindFile(string file)
{
    bool doExit = 0;
    const string cd = "cd ";
    string outPut;
    const string tree="tree";
    const string F="/F";
    const string S=" ";
    string in;
    file="";

    while (doExit == 0)
    {

        system( "cls" );
        cout << file << endl;
        cout << "..To Go To The Upper Of The Folder,``To Exit" << endl;
        if (file == "D:\\Write1Read0.txt")
        {
            system( "tree");
        }
        else
        {
        outPut = tree + S + file;
        system( outPut.data() );
        }
        

        cout << "Choose A File-->>" << endl;
        cin >> in;

        if(in=="``")
        {
            doExit = 1;
        }
        else if (in =="..")
        {
            system( "cd ..");
            file = "";
        }
        else
        {
            file=in;
            outPut = cd + file;
            cout<<outPut<<endl;
            system( outPut.data() );

        }
    }
    return file;
}