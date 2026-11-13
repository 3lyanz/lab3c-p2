#include <iostream>
#include <string>

class Employee{

    private:
    
        int ID;
        std::string   name;
        std::string   department;
        double salary;

    public:
     Employee(){
            ID=0;
            name=" ";
            department=" ";
            salary=0;
        }
        Employee(int id, std::string n, std::string d, double s){
            this->ID=id;
            this->name=n;
            this->department=d;
            this->salary=s;
        }
      

        void input(){
            std::cout<<"Enter the name: "<<std::endl;
            std::cin>>name;
            std::cout<<"Enter the id: "<<std::endl;
            std::cin>>ID;
            std::cout<<"Enter the department: "<<std::endl;
            std::cin>>department;
            std::cout<<"Enter the salary: "<<std::endl;
            std::cin>>salary;
        }
        void print(){
            std::cout<<"ID:"<<ID<<std::endl;
            std::cout<<"Name:"<<name<<std::endl;
            std::cout<<"Department:"<<department<<std::endl;
            std::cout<<"Salary:"<<salary<<std::endl;
        }
};