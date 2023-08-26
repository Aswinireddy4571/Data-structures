// Returns the element with highest frequency in array
int mostFrequent(int arr[], int len)
{
    int freqMax = 0;
    int element = arr[freqMax];

    // Iterate over all elements of array
    for (int i = 0; i < len; i++)
    {
        int frequency = 1;

        // Iterate over array from index i+1 till end of array
        for (int j= i+1; j < len; j++)
        {
            // Check if element at index j is a duplicate element
            if (arr[j] == arr[i])
            {
                // If yes, then increment the frequency count
                frequency++;
            }
        }
        // Check if the frequency of ith element
        // is the maximum frequency
        if (frequency > freqMax)
        {
            freqMax = frequency;
            element = arr[i];
        }
    }
    return element;
}
