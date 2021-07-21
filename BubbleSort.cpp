#include <iostream>
 
using namespace std;

int main(){
    int num;
    cin>>num;
    
    int array[num];
    for(int i = 0; i < num; i ++){
        cin>>array[i];
    };
    
    int counter = 1;
    while( counter < num ){
        for(int i = 0; i < num-counter; i ++){
            if(array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        counter ++;
    }
    
    for(int i = 0; i < num; i ++){
        cout<<array[i]<<" ";
    }

    return 0;
}