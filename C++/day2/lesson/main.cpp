
#include <iostream>

using namespace std;

int main()
{
    string ch;
    ch ="good moring";
    cout << ch << endl;
    cin>>ch;
    cout <<ch<<endl;
    cout<<ch.at(3)<<"****************"<<endl;
    for(int i = 0;i<ch.size();++i)
    {
        cout<<ch[i];
    }
    cout<<endl;
    for(char s:ch)
    {
        cout<<s;
    }
    cout<<endl;

    string&mych=ch;
    cin>>mych;

    cout<<ch<<endl;
    const int &a=100;
    cout<<a<<endl;
    system("pause");
    return 0;
}
