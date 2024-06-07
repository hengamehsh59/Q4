
#include <iostream>
using namespace std;
void getArray(int a[100],int n){
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]:";
    cin>>a[i];
}
}
void printArry(int a[100],int n){
for(int j=0;j<n;j++){
    cout<<"a["<<j<<"]:";
    cout<<a[j]<<endl;
}
    }
    int findMax(int a[100],int n)
    {
        int max=a[10],index=0;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                index=i;
            }
        }
        return index;
    }
    int main()
    {
        int n;
        int x[100];
        cout<<"please enter n:";
        cin>>n;
        cout<<"EnterArray Data:"<<endl;
        getArray(x,n);
        cout<<"ArrayData:"<<endl;
        printArry(x,n);
        cout<<"MaxIndex:"<<findMax(x,n)<<endl;
        cout<<"MaxValue:"<<x[findMax(x,n)];
        return 2;
    }


