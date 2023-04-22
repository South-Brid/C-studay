#include <iostream> //输入输出流文件

using namespace std; //使用标准命名空间

#if 0
void myfun(string ch ="this is hello")    //函数默认值可以有默认值
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
//内联函数
inline void myhello()
{
    cout<<"hello"<<endl;
}

//test3
void message(string name,int age = 18,string address ="山东")
{
    cout<<name<<" "<<age<<" "<<address<<endl;
}
//函数重载
void show(int a)
{
    cout<<"void show(int a)"<<endl;
}

void show(string name)
{
    cout<<"void show(string name)"<<endl;
}

void show(int a,int b)//使用函数重载的时候要注意函数默认参数
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
    cout<<"我是哑元函数"<<endl;
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
    cout<<"字母:"<< num1 <<"数字:"<<num2<<"其他:"<<num3<<endl;
    num1=0;
    num2=0;
    num3=0;

}

int main()
{
#if 0
    //lesson1
    //cout 输出，双引号之间是字符串,会原样输出
    cout << "你好世界!" << endl;//endl是end line缩写，就是换行
    int a =10;
    char ch='a';
    //    cin >> a;//cin 是输入,阻塞
    cout << a << " " << ch << endl;//输出基本类型

    //lesson2
    //c++中字符串用string类来代替c语言中的字符串char*
    string s = "world";
    for( int i = 0; i <s.size();i++)
    {
        cout<<s[i]<<"";
    }
    cout<<endl;

    //c++中字符串用string类来代替c语言中的字符串char*
    string s = "sunqingtao";
    cout << s << endl;
    cout << s[0] << endl;
    cout << s[20] << endl;//下标超出范围不报错
    cout << s.at(2) << endl;//使用.at的方式进行访问会进行安全性检查


    //c++使用for each方式遍历
    for(char ch:s)  //char是s里面的元素类型
    {
        cout<<ch<<" ";
    }
    //lesson3 初见引用
    //性质1：引用成为一个变量的引用后，就不能成为其他变量的引用
    int a = 30;
    int b =40;
    int &small_a = a; //引用两端必须是同类型
    small_a=b;
    small_a++;
    cout << a << " " <<small_a <<endl;
    cout << &a <<" " <<&small_a <<endl;

    //性质2：引用必须进行初始化，且不能为NULL
    /****************************************/
    //   int &hello;        错误代码
    //   int &hello=NULL;   错误代码
    /****************************************/
    //性质3：当作为纯数字的引用时，引用需要加const修饰，代表指向数值不可改
    const int &a=100;
    //性质4：const修饰的引用不可以更改变量的值。
    //变量的值自己进行变化的时候引用值也会发生变化
    int b =100;
    const int &a=b;
    b++;
    cout<<a<<" "<<b<<endl;
    //引用的应用
    int a =10;
    int b =20;
    //1.传值 :只是形参的拷贝，形参的改变不影响实参的值
    myexchang(a,b);
    // 2.传引用：传引用不需要为参数开辟空间，提高了传递效率，可以直接操作变量
    myexchang2(a,b);
    cout<<a<<" "<<b<<endl;
    //lesson4 函数提高

    //内敛函数适用于调用频繁
    //函数代码量少
    //函数运行时间短
    myhello();
    //函数默认值
    myfun();
    int a;
    cin>>a;
    //练习题
    string name="wangwei";
    message(name);
    //函数重载
    show(12,2);
    //函数重载练习
    display("南大鸟",25,"boy");
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

