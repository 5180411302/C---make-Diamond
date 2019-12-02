#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin>>x;
    cin>>y;
    for (int i = x; i > x - y; i--)
    {
        for(int j = 1; j <= x+1; j++){
            if (j > i)
            {
                cout<< "o";
            }
            else
            {
                cout<< "*";
            }
            
            
        }
        for(int j = x; j >= 1; j--){
            if (j > i)
            {
                cout<< "o";
            }
            else
            {
                cout<< "*";
            }
            
            
        }
        
        cout<<endl;
    }

    for (int i = y; i > 1; i--)
    {
        for(int j = x + 1; j >= 2; j--){
            if (j < i)
            {
                cout<< "o";
            }
            else
            {
                cout<< "*";
            }
            
            
        }
        for(int j = 1; j <= x + 1; j++){
            if (j < i)
            {
                cout<< "o";
            }
            else
            {
                cout<< "*";
            }
            
            
        }
        
        cout<<endl;
    }
    
    return 0;
}
