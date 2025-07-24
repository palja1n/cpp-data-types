#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout<<"Enter any integer: ";
    cin>>a;
    cout<<"Integer = "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;
    
    float b;
    cout<<"Enter any decimal number: ";
    cin>>b;
    cout<<"Float = "<<b<<" and size is "<<sizeof(b)<<" bytes"<<endl;
    
    double c;
    cout<<"Enter any integer: ";
    cin>>c;
    cout<<"Double is "<<c<<" and size is "<<sizeof(c)<<" bytes"<<endl;
    
    string d;
    cout<<"Enter any string: ";
    cin>>d;
    cout<<"String is "<<d<<" and size is "<<sizeof(d)<<" bytes"<<endl;
    
    char e;
    cout<<"Enter any character: ";
    cin>>e;
    cout<<"Character is "<<e<<" and size is "<<sizeof(e)<<" bytes"<<endl;
    
    bool f;
    cout<<"Enter any boolean value: ";
    cin>>f;
    cout<<"Boolean is "<<f<<" and size is "<<sizeof(f)<<" bytes"<<endl;
return 0;
}
