#include <iostream>



using namespace std;

int main() {

    bool running = true;

    auto result = 0;

    while(running) {
        string number1,number2;
        char op;

        cout << "Rakamınızı girin.\nİptal etmek için q yazın." << endl;
        cin >> number1;

        if(number1.compare("q") == 0){
            cout << "Bay Bay!" << endl;
            break;
        }

        cout << "İşleminizi belirtin. [+,-,*,/,%]\nİptal etmek için q yazın." << endl;
        cin >> op;


        if(op == 'q') {
            cout << "Bay Bay!" << endl;
            break;
        }
        
        if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
            cout << "İkinci rakamınızı girin.\nİptal etmek için q yazın." << endl;
            cin >> number2;

            if(number2.compare("q")==0){
                cout << "Bay Bay!" << endl;
                break;
            }

            

            try {
                string resultStr = number1 + " " + op + " " + number2 + " = ";
                switch (op) {
                    case '+':
                        cout << resultStr << (stoi(number1) + stoi(number2)) << endl;
                        break;
                    case '-':
                        cout << resultStr << (stoi(number1) - stoi(number2)) << endl;
                        break;
                    case '*':
                        cout << resultStr << (stoi(number1) * stoi(number2)) << endl;
                        break;
                    case '/':
                        cout << resultStr << (stoi(number1) / stoi(number2)) << endl;
                        break;
                    case '%':
                        cout << resultStr << (stoi(number1) % stoi(number2)) << endl;
                        break;
                }
            } catch (exception err) {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << "Yanlış kullanım!" << endl;
            continue;
        }

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
    }

    return 0;
}