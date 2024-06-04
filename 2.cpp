#include <iostream>
using namespace std;

// void linearSearch(int arr[], int n ,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             return;
//         }
//     }
//     return;
// }

// Debugged function
bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;

    bool ans = linearSearch(arr , size , 7);

    cout << ans << endl;
    return 0;
}