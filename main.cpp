#include"PrimeNumbers.h"

int main(){
    size_t size = 10000;
    PrimeNumbers num = PrimeNumbers(size);
    std::vector<int> v; 
    v = num.GitPriority();
    for(int i = 0; i < v.size(); i++){
        std::cout <<v[i]<< std::endl;
    }
}