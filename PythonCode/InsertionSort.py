def AscendingOrderInsertionSort( arr ):
    j = 0
    for index, value in enumerate(arr):
        key = arr[index]
        j = index - 1
        while( j >= 0 and arr[j] > key ):
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

def DescendingOrderInsertionSort( arr ):
    j = 0
    for index, value in enumerate(arr):
        key = arr[index]
        j = index - 1
        while( j >= 0 and arr[j] < key ):
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr
