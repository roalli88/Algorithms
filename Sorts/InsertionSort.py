def InsertionSort(Array, size):
    """Simple implementation of insertion sort

       Program assumes the size argument is greater than zero and not more
       than the size of the Array

    """

    #Python uses zero based index so counting starts here at idx = 1
    for idx in range(1, size):
        key = Array[idx]
        j = idx - 1
        while j >= 0 and Array[j] > key:
            Array[j+1] = Array[j]
            j = j - 1
        Array[j+1] = key

