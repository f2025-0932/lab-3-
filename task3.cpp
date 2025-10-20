#include <iostream>
using namespace std;

int main()
{
    int totalSeconds = 4564;
    
    int minutes = totalSeconds / 60;
    
    int minutesInSeconds = minutes * 60;
    int seconds = totalSeconds - minutesInSeconds;
    
    cout << totalSeconds << " seconds is equivalent to:" << endl;
    cout << minutes << " minutes and " << seconds << " seconds" << endl;
    
    return 0;
}
