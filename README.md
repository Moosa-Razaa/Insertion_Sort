# Insertion_Sort
Insertion sort code in C#, C++ and Python with some additional details about the sorting algorithm in general.

### Time Complexity : 0( n^2 )
### Space Complexity : 0( 1 )

### Useage
* This algorithm is mostly used when the array is sorted or partially sorted.
* This sorting algorithm is generally not good for sorting large arrays/list.

### Loop Invariants
* Initialization : We have to proof that the loop invariant hols true before the first iteration, when i = 1. The array \[0 . . i - 1 \] since holds only singel element array\[0\]. A single element is ofcourse sorted and hence our lopp invariant holds true before the first iteration.
* Maintenance : The subarray, which is array\[i - 1\] will always be sorted after every iteration. 
* Termination : The condition when the for loop will terminate is when the value of i becomes equal to arrays' length. Because i increments by 1 at every iteration, so we will have i equals to arrays length and array\[0 . . array.length - 1\] is whole array. So we can conclude that the whole array is sorted.
