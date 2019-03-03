#include <iostream>

using namespace std;

class fibonacci{
    private:

    public:
        int a, b, c;
        void gen(int);
};

void fibonacci::gen(int n){
    cout << "Fibonacci" << endl;
    a = 1;
    b = 1;
    
    for (int i=1; i<=n; i++){
        if (i==1 || i==2){
            cout << "1" << " ";
        }
        else{
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
}

// Function e.g. mult table
void mult(){
    
    cout << "Multiplication table" << endl;

    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            cout << i*j << " ";
        }
        cout << endl;
    }
}

int main(){
    /* multiplication table */
    mult();

    /* Fibonacci */
    fibonacci f;
    f.gen(20);

    return 0;
}




