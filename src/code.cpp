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

    if (left != nullptr or right != nullptr)
      std::cout << "left = " << right << ", right = " << left;
    else {
      std::cout << "left = " << left << ", right = " << right;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    int sum_ = 0;
    if (arr != 0 or length <= 0) {
      for (int i = 0; i <= length; i++) {
        sum_ += arr[i];
      }
      return sum_;
    }

    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {



    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
