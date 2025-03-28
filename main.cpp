//prob1
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number of integers: ";
//     cin >> n;
//
//     int arr[n];
//     int sum = 0;
//
//     cout << "Enter " << n << " integers: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//
//     cout << "Sum of the entered numbers: " << sum << endl;
//     return 0;
// }

//prob2
// #include <iostream>
// using namespace std;
//
// double calculateAverage(int numbers[], int n) {
//     int sum = 0;
//     for (int i = 0; i < n; ++i) {
//         sum += numbers[i];
//     }
//     return static_cast<double>(sum) / n;
// }
//
// int main() {
//     int n;
//     cout << "Enter the number of integers: ";
//     cin >> n;
//
//     int numbers[n];
//
//     cout << "Enter " << n << " integers: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> numbers[i];
//     }
//     cout << "Average = " << calculateAverage(numbers, n) << endl;
//     return 0;
// }

//prob3
 // #include <iostream>
 // using namespace std;
 //
 // int findMinimum(int numbers[], int n) {
 //     int min = numbers[0];
 //     for (int i = 1; i < n; ++i) {
 //         if (numbers[i] < min) {
 //             min = numbers[i];
 //         }
 //     }
 //     return min;
 // }
 //
 // int main() {
 //     int n;
 //     cout << "Enter the number of integers: ";
 //     cin >> n;
 //
 //     int numbers[n];
 //
 //     cout << "Enter " << n << " integers: ";
 //     for (int i = 0; i < n; ++i) {
 //         cin >> numbers[i];
 //     }
 //
 //     cout << "Min = " << findMinimum(numbers, n) << endl;
 //     return 0;
 // }


//prob4
// #include <iostream>
// using namespace std;
//
// int indexOfLargestElement(double array[], int size) {
//  if (size <= 0) return -1;
//
//  int largestIndex = 0;
//  for (int i = 1; i < size; i++) {
//   if (array[i] >= array[largestIndex]) {
//    largestIndex = i;
//   }
//  }
//  return largestIndex;
// }
//
// int main() {
//  const int SIZE = 15;
//  double numbers[SIZE];
//
//  cout << "Enter 15 numbers: ";
//  for (int i = 0; i < SIZE; i++) {
//   cin >> numbers[i];
//  }
//
//  int index = indexOfLargestElement(numbers, SIZE);
//  cout << "The index of the largest element is: " << index << endl;
//
//  return 0;
// }


//prob5
// #include <iostream>
// using namespace std;
//
// bool strictlyEqual(const int list1[], const int list2[], int size) {
//     for (int i = 0; i < size; ++i) {
//         if (list1[i] != list2[i]) {
//             return false;
//         }
//     }
//     return true;
// }
//
// int main() {
//     int n;
//     cout << "Enter the size of the lists: ";
//     cin >> n;
//
//     int list1[n], list2[n];
//
//     cout << "Enter " << n << " integers for list1: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> list1[i];
//     }
//
//     cout << "Enter " << n << " integers for list2: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> list2[i];
//     }
//
//     if (strictlyEqual(list1, list2, n)) {
//         cout << "Two lists are strictly identical" << endl;
//     } else {
//         cout << "Two lists are not strictly identical" << endl;
//     }
//
//     return 0;
// }

//prob6
// #include <iostream>
// using namespace std;
//
// void countLowercaseFrequency() {
//     int frequency[26] = {0};
//     char ch;
//
//     cout << "Enter characters (end with '0'): ";
//     while (cin >> ch && ch != '0') {
//         if (ch >= 'a' && ch <= 'z') {
//             frequency[ch - 'a']++;
//         }
//     }
//
//     cout << "Letter frequencies:" << endl;
//     for (int i = 0; i < 26; ++i) {
//         if (frequency[i] > 0) {
//             cout << char('a' + i) << ": " << frequency[i] << endl;
//         }
//     }
// }
// int main() {
//     countLowercaseFrequency();
//     return 0;
// }

//prob7
// #include <iostream>
// using namespace std;
//
// void sortArray(int arr[], int n) {
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = i + 1; j < n; ++j) {
//             if (arr[i] > arr[j]) {
//int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }
//
// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter " << n << " integers: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }
//
//     sortArray(arr, n);
//
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; ++i) {
//         cout << arr[i];
//     }
//     cout << endl;
//
//     return 0;
// }

//prob8
// #include <iostream>
// using namespace std;
//
// void rollDie(int rolls) {
//  int frequency[6] = {0};
//  int seed = 1;
//
//  for (int i = 0; i < rolls; i++) {
//   seed = (seed * 7) % 13; // Simple pseudo-random generator
//   int roll = (seed % 6) + 1;
//   frequency[roll - 1]++;
//  }
//
//  for (int i = 0; i < 6; i++) {
//   cout << "Face " << (i + 1) << ": " << frequency[i] << " times" << endl;
//  }
// }
//
// int main() {
//  int rolls = 10000;
//  rollDie(rolls);
//  return 0;
// }

//prob9
// #include <iostream>
// using namespace std;
//
// void reverseArray(int arr[], int start, int end) {
//  while (start < end) {
//   int temp = arr[start];
//   arr[start] = arr[end];
//   arr[end] = temp;
//   start++;
//   end--;
//  }
// }
//
// int main() {
//  int size;
//  cout << "Enter the size of the array: ";
//  cin >> size;
//
//  int arr[size];
//  cout << "Enter " << size << " elements: ";
//  for (int i = 0; i < size; i++) {
//   cin >> arr[i];
//  }
//
//  reverseArray(arr, 0, size - 1);
//
//  cout << "Reversed array: ";
//  for (int i = 0; i < size; i++) {
//   cout << arr[i] << " ";
//  }
//  cout << endl;
//
//  return 0;
// }


//prob10
// #include <iostream>
// using namespace std;
//
// void reverseArray(int arr[], int start, int end) {
//  while (start < end) {
//   int temp = arr[start];
//   arr[start] = arr[end];
//   arr[end] = temp;
//   start++;
//   end--;
//  }
// }
//
// bool isSorted(int arr[], int size) {
//  for (int i = 1; i < size; i++) {
//   if (arr[i] < arr[i - 1]) {
//    return false;
//   }
//  }
//  return true;
// }
//
// int main() {
//  int size;
//  cout << "Enter the size of the array: ";
//  cin >> size;
//
//  int arr[size];
//  cout << "Enter " << size << " elements: ";
//  for (int i = 0; i < size; i++) {
//   cin >> arr[i];
//  }
//
//  if (isSorted(arr, size)) {
//   cout << "YES" << endl;
//  } else {
//   cout << "NO" << endl;
//  }
//
//  return 0;
// }



