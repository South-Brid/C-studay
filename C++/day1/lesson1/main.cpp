#include <iostream> //����������ļ�

using namespace std; //ʹ�ñ�׼�����ռ�

#if 0
void myfun(string ch ="this is hello")    //����Ĭ��ֵ������Ĭ��ֵ
{
    cout<<ch<<endl;
}
void myexchang(int m,int n)
{
    int t=m;
    m=n;
    n=t;
}

void myexchang2(int& m,int& n)
{
    int t=m;
    m=n;
    n=t;
}
//��������
inline void myhello()
{
    cout<<"hello"<<endl;
}

//test3
void message(string name,int age = 18,string address ="ɽ��")
{
    cout<<name<<" "<<age<<" "<<address<<endl;
}
//��������
void show(int a)
{
    cout<<"void show(int a)"<<endl;
}

void show(string name)
{
    cout<<"void show(string name)"<<endl;
}

void show(int a,int b)//ʹ�ú������ص�ʱ��Ҫע�⺯��Ĭ�ϲ���
{
    cout<<"void show(int a,int b)"<<endl;
}
void display(string name)
{
    cout<<name<<endl;
}
void display(string name,int age)

{
    cout<<name<<" "<<age<<endl;
}
void display(string name,int age,string sexy)
{
    cout<<name<<" "<<age<<" "<<sexy<<endl;
}
#endif
void func(int)
{
    cout<<"������Ԫ����"<<endl;
}

void func(string & a,int &num1,int &num2,int &num3)
{
    for(char ch:a)
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            num1++;
        }else if(ch>='0'&&ch<='9')
        {
            num2++;
        }else
        {
            num3++;
        }
    }
    cout<<"��ĸ:"<< num1 <<"����:"<<num2<<"����:"<<num3<<endl;
    num1=0;
    num2=0;
    num3=0;

}

int main()
{
#if 0
    //lesson1
    //cout �����˫����֮�����ַ���,��ԭ�����
    cout << "�������!" << endl;//endl��end line��д�����ǻ���
    int a =10;
    char ch='a';
    //    cin >> a;//cin ������,����
    cout << a << " " << ch << endl;//�����������

    //lesson2
    //c++���ַ�����string��������c�����е��ַ���char*
    string s = "world";
    for( int i = 0; i <s.size();i++)
    {
        cout<<s[i]<<"";
    }
    cout<<endl;

    //c++���ַ�����string��������c�����е��ַ���char*
    string s = "sunqingtao";
    cout << s << endl;
    cout << s[0] << endl;
    cout << s[20] << endl;//�±곬����Χ������
    cout << s.at(2) << endl;//ʹ��.at�ķ�ʽ���з��ʻ���а�ȫ�Լ��


    //c++ʹ��for each��ʽ����
    for(char ch:s)  //char��s�����Ԫ������
    {
        cout<<ch<<" ";
    }
    //lesson3 ��������
    //����1�����ó�Ϊһ�����������ú󣬾Ͳ��ܳ�Ϊ��������������
    int a = 30;
    int b =40;
    int &small_a = a; //�������˱�����ͬ����
    small_a=b;
    small_a++;
    cout << a << " " <<small_a <<endl;
    cout << &a <<" " <<&small_a <<endl;

    //����2�����ñ�����г�ʼ�����Ҳ���ΪNULL
    /****************************************/
    //   int &hello;        �������
    //   int &hello=NULL;   �������
    /****************************************/
    //����3������Ϊ�����ֵ�����ʱ��������Ҫ��const���Σ�����ָ����ֵ���ɸ�
    const int &a=100;
    //����4��const���ε����ò����Ը��ı�����ֵ��
    //������ֵ�Լ����б仯��ʱ������ֵҲ�ᷢ���仯
    int b =100;
    const int &a=b;
    b++;
    cout<<a<<" "<<b<<endl;
    //���õ�Ӧ��
    int a =10;
    int b =20;
    //1.��ֵ :ֻ���βεĿ������βεĸı䲻Ӱ��ʵ�ε�ֵ
    myexchang(a,b);
    // 2.�����ã������ò���ҪΪ�������ٿռ䣬����˴���Ч�ʣ�����ֱ�Ӳ�������
    myexchang2(a,b);
    cout<<a<<" "<<b<<endl;
    //lesson4 �������

    //�������������ڵ���Ƶ��
    //������������
    //��������ʱ���
    myhello();
    //����Ĭ��ֵ
    myfun();
    int a;
    cin>>a;
    //��ϰ��
    string name="wangwei";
    message(name);
    //��������
    show(12,2);
    //����������ϰ
    display("�ϴ���",25,"boy");
    func(1);
#endif
    int i=0;
    int x=0;
    int y =0;
    string a;
    while (1) {
        a="";
        cin>>a;   
        func(a,i,x,y);
    }
    system("pause");
    return 0;
}

