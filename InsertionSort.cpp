#include <iostream>
 
using namespace std;

int main(){
    int num;
    cin>>num;
    
    int array[num];
    for(int i = 0; i < num; i ++){
        cin>>array[i];
    };
    
    for(int i = 1; i < num; i ++){
        int current = array[i];
        int j = i - 1;
        while(array[j] > current && j >= 0){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
    
    for(int i = 0; i < num; i ++){
        cout<<array[i]<<" ";
    }

    return 0;
}