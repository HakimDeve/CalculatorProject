// CalculatorProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

 // Data
enum enOperatorType { Addition = 1, Sub = 2, Multiplication = 3, Division = 4 };
struct stFunctions
{
    void ReadNumbers(int Number[2])
    {
        for (int i = 0; i <= 1; i++)
        {
            cout << "Enter The Number : " << i << endl;
            cin >> Number[i];
        }


    }
    //Operations
    void Addition(int Number1, int Number2)
    {
        cout << "\n========================\n";
        cout << " The Result is : " << Number1 + Number2 << endl;
        cout << "==========================\n";
    }
    void Sub(int Number1, int Number2)
    {
        cout << "\n========================\n";
        cout << " The Result is : " << Number1 - Number2 << endl;
        cout << "==========================\n";
    }
    void Multiplication(int Number1, int Number2)
    {
        cout << "\n========================\n";
        cout << " The Result is : " << Number1 * Number2 << endl;
        cout << "==========================\n";
    }
    void Division(float Number1, float Number2)
    {
        cout << "\n========================\n";
        cout << " The Result is : " << Number1 / Number2 << endl;
        cout << "==========================\n";
    }

};
struct stData
{
    int Number[2], OperatorType;

    stFunctions Function;
};

// Processing Data
void ScreenMainu()
{
    cout << "******************************************\n";
    cout << "Please Chose The Number of Your Operato ?\n";
    cout << "(1) Addition\n";
    cout << "(2) Sub\n";
    cout << "(3) Multiplication\n";
    cout << "(4) Division\n";
    cout << "******************************************\n\n";
    cout << "Your Choice ?\n";

}
void ReadNumberOpreator(stData& typeOp)
{
    cin >> typeOp.OperatorType;
}
int Calculator(stData RunData)
{
    

    switch (RunData.OperatorType)
    {

    case enOperatorType::Addition:
        RunData.Function.ReadNumbers(RunData.Number);
        RunData.Function.Addition(RunData.Number[0], RunData.Number[1]);
        return system("color 4f");
        break;
    case enOperatorType::Sub:
        RunData.Function.ReadNumbers(RunData.Number);
        RunData.Function.Sub(RunData.Number[0], RunData.Number[1]);
        return system("color 1F");
        break;
    case enOperatorType::Multiplication:
        RunData.Function.ReadNumbers(RunData.Number);
        RunData.Function.Multiplication(RunData.Number[0], RunData.Number[1]);
        return system("color 2F");
        break;
    case enOperatorType::Division:
        RunData.Function.ReadNumbers(RunData.Number);
        RunData.Function.Division(RunData.Number[0], RunData.Number[1]);
        return system("color 6F");
        break;

    default:
        cout << "Worong Operator\n";
        break;
    }

    return RunData.OperatorType;
}


int main()
{
    stData OpData;

    ScreenMainu();
    ReadNumberOpreator(OpData);
    Calculator(OpData);

    return 0;
}