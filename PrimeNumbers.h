#pragma once
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <vector>

class PrimeNumbers{
private:
int* _array;
size_t _size;
size_t _count;
public:

    PrimeNumbers(size_t size) {
        _array = new int[size];
        _size = size;
        _count = 0;
        for(int i = 0; i < size; i++){
            _array[i] = _count;
            _count++;
        }
    }


    std::vector<int> GitPriority()const{
        int* array;
        array = new int[_size];
        array = _array;
        size_t k = 2;
        size_t l = 3;
        while(k < _size){
            for(int i = l; i < _size; i++){
                if((array[i] % k) == 0)
                    array[i] = 0;
            }
            k++;
            l++;
        }
        std::vector<int> vec;
        vec.push_back(1);
        for(int i = 2; i < _size; i++){
            if(array[i] != 0){
                vec.push_back(array[i]);
            }
        }
        return vec;
    }


};
