#include <iostream> 

#include <cmath> 

#define MIN -10 

#define MAX 10 



using namespace std;

int main(int argc, char** argv) {

    /* Variables for calculations */

    int first, last, range, result;

    /* Counters */

    int i, j;

    /* Array for temporary numbers */

    int* array;

    /* Initializing variables */

    first = last = result = 0;

    range = MAX - MIN;



    /* User input */

    cout << "Input first number of range, please: ";

    cin >> first;

    cout << "Input last number of range, please: ";

    cin >> last;



    /* Range checking */

    if (first > last) {

        cout << "First number is greater than last.\n";

        return 1;

    }

    else if (first == last) {

        cout << "First number is equal to last.\n";

        return 1;

    }

    else if (first < MIN || last > MAX) {

        cout << "Given numbers are out of range.\n";

    }



    /* Allocating memory for temporary numbers */

    array = new int[range];



    /* Outputting odd numbers */

    cout << "Odd numbers are: ";

    for (i = first, j = 0; i <= last; i++) {

        if (!(i % 2 == 0))

        {

            cout << i << ' ';

            array[j] = i;

            j++;

        }

    }

    cout << ".\n";



    /* Outputting sum of odd numbers */

    for (i = 0; i < j; i++) {

        result += array[i];

    }

    cout << "Sum of odd numbers is: ";

    cout << result << ".\n";

    /* Outputting negative numbers */

    cout << "Negative numbers are: ";

    for (i = first, j = 0; i <= last; i++) {

        if (i < 0)

        {

            cout << i << ' ';

            array[j] = i;

            j++;

        }

    }

    cout << ".\n";

    /* Outputting sum of negative numbers  */

    for (i = 0; i < j; i++) {

        result += array[i];

    }

    cout << "Sum of negative numbers is: ";

    cout << result << ".\n";

    /* Free memory */

    delete array;

    return 0;

}