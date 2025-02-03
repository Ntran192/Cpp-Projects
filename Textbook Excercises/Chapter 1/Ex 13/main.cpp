// Nathan Tran
// Ch 1 Ex 13 Solution
// Last Updated: 2/2/25

#include <iostream> /* cin, cout */
#include <iomanip>  /* setw(), fixed, setprecision(), left, right */

int main()
{
    float testScore;   // A float that keeps track of current test score
    int weight;        // A int that keeps track of current weight
    int sumOfWeights;  // A int that has the sum of the weights
    float average;     // A float that determines the weighted average

    sumOfWeights = 0;
    average = 0;

    /*
        Prompt the user for four test scores
        we use a for loop here because we know the amount of iterations (ie. amount of times we ask)
    */
    for (int i = 0; i < 4; i++)
    {
        /* input */
        /*
            Since our input is "testscore weight," we can use two cins to parse the input
            the 1st one parses the testscore and stops at the whitespace and then the
            2nd one parses weight.
        */
        std::cout << "Enter test score #" << i + 1 << " ('test score' 'weight'): ";
        std::cin >> testScore;
        std::cin >> weight;

        /* calculate */
        
        // Grab the sum of the weights after every input
        sumOfWeights += weight;

        // calculate the current test score with its weight and add it to the average total
        average += testScore * weight;
    }
    /* calculate */
    // divide the average by the sum of the weights to get the true average score of all four tests
    average = average / sumOfWeights; 

    /* output */
    // display the result with 2 decimal points if needed.
    std::cout << "Average Result: " << std::fixed << std::setprecision(2) << average;

    return 0;
}