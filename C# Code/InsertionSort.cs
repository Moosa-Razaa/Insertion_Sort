class InsertionSort
{
    public static void IncreasingOrderInsertionSort(int[] numbers)
    {
        int j = 0;
        for (int i = 0; i < numbers.Length; i++)
        {
            int key = numbers[i];
            j = i - 1;

            while (j >= 0 && numbers[j] > key)
            {
                numbers[j + 1] = numbers[j--];
            }
            numbers[j + 1] = key;
        }
    }
    public static void DecreasingOrderInsertionSort(int[] numbers)
    {
        int j = 0;
        for (int i = 0; i < numbers.Length; i++)
        {
            int key = numbers[i];
            j = i - 1;

            while (j >= 0 && numbers[j] > key)
            {
                numbers[j + 1] = numbers[j--];
            }
            numbers[j + 1] = key;
        }
    }
}
