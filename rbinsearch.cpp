#include<iostream>
using namespace std;
int binsearch(int arr[],int fst,int lst,int num){
    if (fst==lst)
    {
        if (fst==num)
        {
            return fst;
        }
        
    }
    else{
        int mid=(fst+lst)/2;
        if (num==arr[mid])
        {
            return mid;
        }
        else{
            if (num<arr[mid])
            {
                return binsearch(arr,fst,mid-1,num);
            }
            else{
                return binsearch(arr,mid+1,lst,num);
            }
            
        }
        
    }
   return -1;
}
int main(){
    int arr[20],n,a,i,num;
    cout<<"Enter no. of elements :";
    cin>>n;
    cout<<"\nEnter elements:";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter no. to be searched:";
    cin>>num;
    a=binsearch(arr,0,n,num);
    if (a==-1)
    {
        cout<<"\nElement not found....!";
    }
    else{
    cout<<"\nElement found at index :"<<a;
    }
    return 0;
}