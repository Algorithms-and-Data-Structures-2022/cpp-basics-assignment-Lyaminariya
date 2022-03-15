#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    return (right - left) * (right - left);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (bit_pos >= 0 && mask >= 0 and mask & (1 << bit_pos)) {
        return true;
      }

    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    int max_ = left;
    if (middle > max_) {
      max_ = middle;
    }
    if (right > max_) {
      max_ = right;
    }
    return max_;

    return 0;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr && right != nullptr) {
      int temp = *left;
      *left = *right;
      *right = temp;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if(arr != nullptr && length > 0) {
      int sum_ = 0;
      for (int i = 0; i < length; i++) {
        sum_ += arr[i];
      }
      return sum_;
    }
    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr != nullptr && length > 0) {
      int *max_ = &arr[0];
      for (int i = 0; i < length; i++) {
        if (arr[i] > *max_) {
          max_ = &arr[i];
        }
      }
      return max_;
    }
    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
  if(length > 0) {
    int* arr = new int[length];
    std::fill(arr, arr + length, init_value);
    return arr;
    }
    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if(length > 0 && arr_in != nullptr) {
      int *clone_arr = new int[length];
      std::copy(arr_in, arr_in + length, clone_arr);
      return clone_arr;
    }
    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if(length <= 0) {
      os << "Invalid argument: length\\n";
    }
    else if(arr == nullptr) {
      os << "Invalid argument: arr\\n";
    }
    else if(k <= 0) {
      os << "Invalid argument: k\\n";
    }
    else if(length > 0 && arr != nullptr && k > 0) {
      for(int i = 0; i < length; i++) {
        if(k == 1) {
          os << arr[i] << "\t";
        }
        else if(i % k == 0) {
          os << arr[i] << "\t";
        }
      }
    }
  }

}  // namespace assignment
