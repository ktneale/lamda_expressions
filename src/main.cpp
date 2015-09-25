#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    using namespace std;


    std::vector < int >c {
    1, 2, 3, 4, 5, 6, 7, 8, 9};

    int multiple = 5;
    size_t cnt =
	count_if(c.begin(), c.end(),[ =] (int i) { return !(i % multiple);
		 }
    );
    std::
	cout << "Number of multiples of " << multiple << " is: " << cnt <<
	std::endl;

    int sum = 0;

    cnt = count_if(c.begin(), c.end(),[&](int i) {
		   return sum += i;
		   }
    );

    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
