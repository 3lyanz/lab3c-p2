#include <iostream>
#include "../include/menu.hpp"
#include "../include/clear.hpp"
#include "../include/color.hpp"
#include "../include/ArrowInput2.hpp"
#include "../include/setposition.hpp"
#include "../src/employee.cpp"


using namespace std;

void menu(){
    
    clear_screen();

    char byte1 ='q';
    char byte2 ='q';
    char byte3 ='q';
    int option = 0;
    char arrow = '>';
    int count=0;
    int capacity=2;
    Employee *E = new Employee[capacity];

    char choice;
    do{
        
        clear_screen();
        //cout<<option<<endl;
        if(option == 0){
            cout<<arrow;
            setcolor("green");
            cout<<"New"<<endl;
            setcolor("white");
            cout<<"Display"<<endl;
            setcolor("white");
            cout<<"Exit"<<endl;
            if(byte1 == '\n'){
                clear_screen();
                cout<<"welcome"<<endl;
                do{
                    if(count==capacity){
                        Employee *E2= new Employee[capacity+1];
                        for(int i = 0 ; i< count; i++){
                            E2[i]=E[i];
                        }
                        delete[] E;
                        E = E2;
                        capacity++;
                    }
                    E[count].input();
                    count++;
                    cout<<"add another employee?"<<endl;
                    cout<<"y for yes & n for no: ";
                    cin>>choice;
                }while(choice=='y');

            }
        }
        else if(option == 1){
            setcolor("white");
            cout<<"New"<<endl;
            cout<<arrow;
            setcolor("green");
            cout<<"Display"<<endl;
            setcolor("white");
            cout<<"Exit"<<endl;
            if(byte1 == '\n'){
                clear_screen();
                int vcount=0;
                while(vcount<count){
                    E[vcount].print();
                    vcount++;
                    
                }

            }
        }
        else if(option == 2){
            setcolor("white");
            cout<<"New"<<endl;
            setcolor("white");
            cout<<"Display"<<endl;
            cout<<arrow;
            setcolor("green");
            cout<<"Exit"<<endl;

        }
        byte1= getch_linux();
        if (byte1 == '\033') {
            byte2=getch_linux();
            byte3=getch_linux();
            switch (byte3) {
                case 'A':
                   
                if(option > 0){
                    option-=1;
                }
                else{
                    //do nothing
                }
                    break;
                case 'B':
                
                if(option < 2){
                    option+=1;
                }
                else{
                    //do nothing
                }
                    break;
            }
        }
    }while((byte1 != 'q' && byte1 != 'Q')  && (byte1 != '\n' || option != 2));        // Exit the program if the user presses Q or q
    delete[] E;
    E=NULL;
    setcolor("reset");

}
