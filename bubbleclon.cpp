
//=========================================Bubble sort[static]======================================//

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[]={12,2,13,4,10};
//     int n,i,j,t,f;

//     for(i=0;i<5;i++)
//     {
//         cout<<arr[i];
//     }

// cout<<"Enter size of array\n";
// cin>>n;

// cout<<"enter number of values\n";
// for(i=0;i<n;i++)
// {
//     cin>>arr[i];
// }
//  cout<<"Unsorted array is\n";
//  for(i=0;i<n;i++)
//  {
//     cout<<arr[i];
//  }

//     for(i=0;i<5-1;i++)
//     {
//         f=0;
//         for(j=0;j<5-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 t=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=t;
//                 f=1;
//             }

//         }
//          if(f==0)
//             {
//                 break;
//             }
//     }
//     cout<<"sorted array is \n";

//         for(i=0;i<5;i++)
//         {
//             cout<<arr[i];
//         }
//     return 0;
// }



//============================================bubble sort[Dynamic]=======================================================================//
#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    int n,i,j,t,f;

    cout<<"enter the size of arry"<<"\n";
    cin>>n;

    for( i=0;i<n;i++)
    {
        cout<<"Enter values for sorting["<<i<<"]:"<<endl;

        cin>>arr[i];
    }

    cout<<"Unsorted array is :"<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<"\n";
    }

    for(i=0;i<n-1;i++)
    {
        f=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                f=3;
            }
        }
        if(f==0)
        break;
    }
    cout<<"Sorted arry is :"<<"\n";

    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
return 0;
}

// /==========================================================================================================================///

