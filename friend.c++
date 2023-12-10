#include <iostream>
using namespace std;
class abc{
    private:
    float x=10.3, y=3.2; 
    public:

   float sum;
    void dis()
    {
        sum= x+y;
    }
friend int xyz(abc r); 
};
int xyz(abc r){
    cout<<"Sum of x and y ar : "<<r.sum;

}
int main()
{
    abc obj;
    obj.dis();
    xyz(obj);
}