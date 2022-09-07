#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class Number_System{
        
    public:

       
        
        int place_value(int num,int place,int count){
            if(place == pow(10,count)){
                return num%10;
            }
            else
            {
                count++;
                int ans = place_value(num/10,place,count);
                return ans;
            }
    
        }

        bool Divisibility(){
            int choice,num;
            cout<<"Enter the Dividing factor to check with :";
            cin>>choice;
            cout<<"Enter the number for which to check :";
            cin>>num;
            if (num%choice==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        bool check_prime(int num){
            for(int j = 2;num;j++){
                if (num%j==0)
                {
                    return false;
                }
                return true;
                

            }
            

        }

        bool check_perfect_num(int num){
            vector<int> factor;
            for (int i = 1; i <= num; i++)
            {
                if(num%i==0){
                    factor.push_back(i);
                }
            }
            int sum =(-1)*num;
            for(int i : factor){
                sum += i;
            }
            if(sum==num){
                return true;
            }
            return false;
            
        }



};




int main(){
    Number_System obj;
    
    return 0;
}