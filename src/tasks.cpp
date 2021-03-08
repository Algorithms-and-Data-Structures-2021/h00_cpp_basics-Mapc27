#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs and rhs) {
        *lhs = *lhs + *rhs;
        *rhs = *lhs - *rhs;
        *lhs = *lhs - *rhs;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows < 1 || num_cols < 1) return nullptr;
    int **array_2d = new int *[num_rows];

    for (int row_index = 0; row_index < num_rows; row_index++){
        array_2d[row_index] = new int [num_cols];
    }

    for(int i = 0; i < num_rows; i ++){
        for(int j = 0; j < num_cols; j ++) array_2d[i][j] = init_value;
    }
    return array_2d;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (arr_2d_source == nullptr || arr_2d_target == nullptr) return false;
    if (num_rows < 1 || num_cols < 1) return false;

    for(int i = 0; i < num_rows; i++){
        for(int j = 0; j < num_cols; j++){
            arr_2d_target[i][j] = arr_2d_source[i][j];
        }
    }
    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int t, size = arr.size();
    if (size != 0) {
        for(int i = 0; i < size/2; i++){
            t = arr[i];
            arr[i] = arr[size-1-i];
            arr[size-1-i] = t;
        }
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin != nullptr && arr_end != nullptr){
        int t;
        while(arr_end - arr_begin > 0){
            t = *arr_begin;
            *arr_begin = *arr_end;
            *arr_end = t;
            arr_end --;
            arr_begin ++;
        }

    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if(arr == nullptr || size < 1) return nullptr;
    int *max_ptr = arr;
    while(size > 0){
        if(*arr > *max_ptr) max_ptr = arr;
        arr ++;
        size --;
    }
    return max_ptr;}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    if(arr.size() == 0) return {};
    vector<int> list;
    for(int i: arr) if (i % 2 != 0) list.push_back(i);
    return list;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    int size_a = arr_a.size(), size_b = arr_b.size();
    if(size_a == 0 || size_b == 0) return {};
    vector<int> result;
    for(int i = 0; i < size_a; i ++){
        for(int j = 0; j < size_b; j ++){
            if(arr_a[i] == arr_b[j]){
                result.push_back(arr_a[i]);
                break;
            }
        }
    }
    return result;
}

