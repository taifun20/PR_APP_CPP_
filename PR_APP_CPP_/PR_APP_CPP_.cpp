
#include <iostream>
#include <string>


void CE_Func_Question_()
{
    std::cout << std::endl << "Ready to race ?" << std::endl << "(Yes or No)" << std::endl;
}

void CE_Func_Answer_(std::string Answer)
{
    if (Answer == "Yes") {
        std::cout << std::endl << "Turn your engine on !" << std::endl;
    }
    else if (Answer == "No") {
        std::cout << std::endl << "You beter dont waste my time !" << std::endl;
    }

}

void CE_Func_Get_Imputs_()
{   
    std::string Answer;
    std::cin >> Answer;
    std::cout << "Your answer is : " << Answer;
    CE_Func_Answer_(Answer);
}



int main()
{
    std::string UserName;
    std::string SecondText;

    UserName = "Taifun20";
    SecondText = "We are in 2024 !";

    std::cout << "Hey " << UserName << std::endl;
    std::cout << SecondText << std::endl;

    
    // CE_Func_Question_();
    // CE_Func_Get_Imputs_();

    return 0;
}