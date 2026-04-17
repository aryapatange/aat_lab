// 1. tower of hanoi
// #include<bits/stdc++.h>
// using namespace std;
// void toh(int n, char A,char B,char C){
//     if(n>0){
//         toh(n-1,A,C,B);
//         cout<<"Move disk "<<n<<"from"<<A<<"to"<<C<<endl;
//         toh(n-1,B,A,C);
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number of disks:";
//     cin>>n;
//     toh(n,'A','B','C');
//     return 0;
// }


// 2. bubble sort
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, a[50];
//     int temp=0;
//     cout<<"enter the number of elements:";
//     cin>>n;
//     cout<<"Enter the elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     //bubble sort
//     for(int i=1;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     cout<<"Sorted elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

// 3. insertion sort
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,a[50];
//     cout<<"Enter the number of elements:";
//     cin>>n;
//     cout<<"Enter the elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }   
//     //insertion sort
//     for(int i=1;i<n;i++){
//         int j=i;
//         while(j>0 && a[j-1]>a[j]){
//             swap(a[j],a[j-1]);
//             j--;
//         }
//     }
//     cout<<"Sorted elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

//4. selection sort
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a[50];
//     cout<<"Enter the number of elements:";
//     cin>>n;
//     cout<<"Enter the elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     //selection sort
//     for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[minIndex])
//                 minIndex=j;
//         }
//         swap(a[i],a[minIndex]);
//     }
//     cout<<"Sorted elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }   
//     return 0;
// }

//5. binary search
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int target;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
//     cout<<"Enter the number you want to find:";
//     cin>>target;
//     int low=0,high=n-1,mid;
//     bool found=false;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(arr[mid]==target){
//             cout<<"Number "<<target<<" found at position "<<mid+1;
//             found=true;
//             break;
//         }
//         else if(target<arr[mid]){
//             high=mid-1;
//         }
//         else low=mid+1;
       
//     }
//      if(!found){ cout<<"not found";}
//     return 0;
// }

//6. Fractional Knapsack
// #include<bits/stdc++.h>
// using namespace std;

// struct Item{
//     int profit;
//     int weight;
// };

// //compare function to sort the profit/weight ratio
// bool compare(Item a, Item b){
//     return (double) (a.profit/a.weight) > (b.profit/b.weight);
// }

// int main(){
//     int n, capacity;
//     cout<<"Enter the number of items: ";
//     cin>>n;

//     Item items[100];
//     for(int i=0;i<n;i++){
//         cout<<"Enter profit and weight for item "<<i+1<<": ";
//         cin>>items[i].profit>>items[i].weight;
//     }

//     cout<<"enter the capacity of knapsack: ";
//     cin>>capacity;

//     //sort the ratio in ascending order
//     sort(items,items+n,compare);
//     double total_profit=0.0;

//     //main logic
//     for(int i=0;i<n && capacity>0;i++){
//         if(items[i].weight<=capacity){
//             total_profit+=items[i].profit;
//             capacity-=items[i].weight;
//         }
//         else{
//             total_profit+=items[i].profit * ((double(capacity)/items[i].weight));
//             break;
//         }
//     }
//     cout<<"max profit: "<<total_profit;
//     return 0;
// }

//7. Activity Selection
#include<bits/stdc++.h>
using namespace std;
