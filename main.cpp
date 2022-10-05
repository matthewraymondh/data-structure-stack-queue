#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct rahasia
{
    char huruf;
};

struct rahasia sandi[100];
int top=1;

void push_inqueue(char x)
{
    sandi[top].huruf = x;
    top++;
}

void pop()
{
    top--;
}

void dequeque()
{
    for(int a=2;a<100;a++)
    {
        sandi[a-1]=sandi[a];
    }
    top--;
}

int main()
{
    char kata[100]={"1W1i1L3101Z21V1E1Y1O1U"};

    int datake=0;
    do
    {
        if(kata[datake]=='1')
        {
            cout<<"Lakukan Push/Inqueue Untuk Data: ";
            datake++;
            cout<<kata[datake]<<endl;
            push_inqueue(kata[datake]);
            getch();
        }
        if(kata[datake]=='2')
        {
            cout<<"Lakukan POP Data"<<endl;
            getch();
            pop();
        }
        if(kata[datake]=='3')
        {
            cout<<"Lakukan Dequeue Data"<<endl;
            getch();
            dequeue();
        }
        datake++;
    }
    while(datake<strlen(kata));


    return 0;
}
