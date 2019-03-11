#include <iostream>
using namespace std;

/* 
 * Generate random number between 1 to 6 
 * and calc each probability.
 */
int *RandomNumbersGen(int num){

    int *array;
    int cnt[6+1] = {0,0,0,0,0,0,0};
    float prob;

    if (num <= 0){
        return NULL;
    }

    array = new int[num]; // allocate memorry

    /* gen random number */
    srand(time(NULL));  

    for (int i=1; i<num; i++){
        array[i-1] = rand() % 6 + 1;
        //cout << array[i-1] << endl;
        cnt[array[i-1]]++;
    }
    
    /* calc prob */
    for (int i=1; i<=6; i++){
        prob = 0;
        prob = static_cast<float>(cnt[i]) / static_cast<float>(num);
        //cout << cnt[i] << endl;
        cout << i << ": " << prob << endl;
    }
}

int main(){

    int num;

    /* exception handling */ 
    cout << "Input number of trial" << endl;
    cin.exceptions(ios::failbit);
    
    try{
        cin >> num;
    }
    catch(...){
        cout << "Error: Input value. Exit program." << endl;
        return -1;
    }
    
    /* call function */
    RandomNumbersGen(num+1);
    
    return 0;
}
