#include <iostream>

using namespace std;

int main()
{
    cout << "Choosing which Partner you would prefer" << endl;
    cout << "The following below are which you can prefer for yourself in a partner you would love to spend the rest of your life with" << endl;

    string CanCookVeryWell;
    string WhoWouldRespectMe;
    string WhoLovesFootball;

    cout << "Can your Partner cook very well? Yes/No";
    cin >> CanCookVeryWell;

    cout << "Does your partner have respect? Yes/No";
    cin >> WhoWouldRespectMe;

    cout << "Does your partner have any interest in football?";
    cin >> WhoLovesFootball;

    if (CanCookVeryWell == 'Yes') {
            if (WhoWouldRespectMe == 'Yes') {
                    if (WhoLovesFootball == 'Yes'){

                            cout << "WOW, your partner is evrything you would ever want in woman" endl;

                    } else {
                        cout << " Your partner can cook very well and would respect you" << endl;

                    } else {
                        cout << "your partner is private and enjoy indoors activities like watching sports on TV" << endl;

                    } else {
                        cout << " This is not a preferable partner for you " endl;
                    }

                    return 0;
}
