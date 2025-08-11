#include <iostream>
using namespace std;
string choice;
//============class_Animal======================
class Animal {
private:// Encapsulation
string animal;//animal name cat or dog ets...
public:
Animal(string n){//constructor
animal=n; //set animal name
}
virtual void speak(){
cout<<animal<<" animal voice\n";
}
~Animal(){//destructor
    //cout << "clear Animal \n";
}
};
//================class_dog===================
class Dog: public Animal{//class son  inheritance >:< type of_inheritance   from class 
    //attributes
    private://Encapsulation
    string DogN;//name of type dog
    public:
    bool AV;// avilability
    float  speed;
    string color;
    double p_A;//Price_animal
    float height,weight;//information
    //==method
void det(){//show public information
    cout << "     Weight: " << weight << "kg\n";
    cout << "     Height: " << height << "cm\n";
    cout << "     Color: " << color << "\n";
    cout << "     speed: " << speed << "km/h\n";
    cout << "     Available: " << (AV? "Yes" : "No") << "\n";//idea from chat
    cout << "     Price: "<< p_A<<"$\n";
    }
    
Dog(string d):Animal("dog"){//constructor
    DogN=d;//set name typ dog
//cout << "Dog created.\n";
} 
string get_dog(){//method
    return DogN;
}
void speak()override{//override
    cout <<"Dog  U•ᴥ•U\tWoof!\a\n";//dog speak
}
~Dog(){//destructor
  //  cout << "Dog destroyed.\n";
    }
};
//===================type1_dog==================================
class  German_Shepherd: public Dog{//class son  inheritance >:< type of_inheritance   from class 
    public:
    German_Shepherd():Dog("German Shepherd"){
    //scope
        AV=true;
        color="Black & Brown";
        speed=48.0;
        height=62.0;
        weight=35.0;
        p_A=2500.0;}
void speak()override{//override function
    cout <<"German Shepherd Dog  ^•ᴥ•^\tWoof!\a\n";
   det();//call from dog class
}
~German_Shepherd(){
}
};
//===============type2_dog==============================
class  Bulldog: public Dog{//class son  inheritance >:< type of_inheritance   from class 
    public:
    Bulldog():Dog("Bulldog"){
     AV=true;
     p_A=9000.0;
     color="White and Brown";
     speed=24.0;
     height=35.0;
     weight=25.0;}
void speak()override{
    cout <<"Bulldog Dog  ⊂(￣(ｴ)￣)⊃ \tWoof!\a\n";
    det();//coal from dog class
}
~Bulldog(){
}
};
//===================class_ cat=============================
class Cat : public Animal {//class son  inheritance >:< type of_inheritance   from class 
    private:// Encapsulation
    string CatN;//cat type name
    public:
    string color,fur_Type;
    double p_A;//Price-animal
    float  height, weight;
    bool AV;
    void det(){
        cout << "     Weight: " << weight << "kg\n";
        cout << "     Height: " << height << "cm\n";
        cout << "     Color: " << color << "\n";
        cout << "     fur Type: " << fur_Type << "\n";
        cout << "     Available: " << (AV ? "Yes" : "No") << "\n";
        cout << "     Price: "<< p_A<<"$\n";
    }
    Cat(string C):Animal("cat"){ //constructor
        CatN=C;
     // cout << "Cat created.\n";
    }

string  get_cat(){
return CatN;
}
    void speak()override{
    cout <<"Cat  =^.^=\tMeow!\n";
}
~Cat (){
    // cout << "Cat destroyed.\n";
    }
};
//=======================type1_cat============================
class  Siamese : public Cat{
    public:
    Siamese():Cat("Siamese"){
       p_A=2800.0;
       AV=true;
       fur_Type="Short, fine, smooth";
       color="Cream body with dark points ";
       height=28.0; 
       weight=5.0;}
void speak()override{//function override
    cout <<"Siamese Cat  ฅ^•ﻌ•^ฅ \tMeow!\n";
    det();
}
~Siamese(){
}
};
//=========================type2_cat==============================
class  Maine_Coon : public Cat{
    public:
    Maine_Coon():Cat("Maine Coon"){
        AV=true;
        p_A=2000.0;
        fur_Type=" Long, thick, and water-resistant";
        color=" Brown tabby is most common , but they can be many colors";
        height=40.0; 
        weight=9.0;}
void speak()override{
    cout <<"Maine Coon Cat   ʕ^.ᴥ.^ʔ∫   \tMeow!\n";
     det();
}
~Maine_Coon(){
}
};
//=====================[--user--]-====================
 class user {
    public:
    string user_an[4]={" "," "," "," "};
    string name;
    void set_an(string animal){//method
    for(int i=0;i<4;i++){
        if (user_an[i]==" "){//if its empty put the pet
            user_an[i]=animal;
            break;
        }}}
      void show(){
        cout <<" the purchased pets "<< name<<" got :\n";
        for(int i=0;i<4;i++){
        if (user_an[i]!=" "){//if it not empty show it
            cout <<"-";
           cout<< user_an[i]; 
           cout <<"\n"; }
        }
        }
    };

//================= MAK ANIMAL ARR========================
German_Shepherd an1;//make  dog type opj
Bulldog an2;//make  dog type opj
Siamese an3;//make  cat type opj
Maine_Coon an4;//make  cat type opj
Animal *animal[]={&an1,&an2,&an3,&an4};//arr ptr animals opj
//=============fun of SHOW PET=========================
 void Show_pet(){
    cout <<"\n========`*MeowWoof Market *`========\n";
    cout <<"The available Dog and Cat breeds :\n";
    for (int c=0 ; c<4 ;c++){//loop arowend the pets
        cout <<c+1<<" -  ";
        animal[c]-> speak(); 
        cout<<"\n";  
    
    }}

//*****************************(==MAIN==)*********************************************************************
int main() {
    user U1;// make opj user
    Show_pet();//show pe for the first time
    int i=1;//the first time
    do {
        
        cout << "========== Pet Shop Menu ==========\n";
        cout << "1- Buy a pet\n";
        cout << "2- Show purchased pets\n";
        cout << "3- Show all available pets\n";
        cout << "0- Exit\n";
        //if it the first time sin in yous name to make your animal list
        if(i==1){
        cout<<"\nenter your name\n";
        string name;// user name to  make buy_lest for hem/her
        cin>>name;
        U1.name=name;//save user name
    }
    i=2;//end sin in  
    cout << "Enter your choice:\n"; //choose from menu
    cin >>choice;
//=================menu_1====================================
if (choice=="1"){//if the user choice to buy a pet
    cout <<"enter the number of the pet you wont \n";
    cin >>choice;// enter the num of the pet you wont
   //========**choice_pet1**=====================
    if (choice=="1"){//you wont German Shepherd Dog ^•ᴥ•^
        if (an1.AV){//check if it available
            string an_name= an1.get_dog();//get dog name from dog class
            U1.set_an(an_name);//store dog name in user arr of pets
            an1.AV=false;//change the availability of the pet
}
        else {cout <<"not available\n";}//if you buy it before
}
   //========**choice_pet2**=====================
        else if (choice=="2"){
            if (an2.AV){//see if it available
                string an_name= an2.get_dog();//get pet typ name
                U1.set_an(an_name);//set pet typ name in user animal arr
                an2.AV=false;//user take the pet
}
        else {cout <<"not available\n";
}}
   //========**choice_pet3**=====================
      else if (choice=="3"){
        if (an3.AV){//see if it available
            string an_name= an3.get_cat();//get pet typ name
            U1.set_an(an_name);//set pet typ name in user animal arr
            an3.AV=false;//user take the pet
}
        else {cout <<"not available\n";}
}
//========**choice_pet4**=====================
else if (choice=="4"){
    if (an4.AV){//see if it available
        string an_name= an4.get_cat();
        U1.set_an(an_name);
        an4.AV=false;//user take the pet
}
    else {cout <<"not available\n";}
  }
//not exist choice
else{ cout <<"not available choice\n";  
        }}
//=============== MENU 2 ===============
        else if (choice=="2"){//if user choice to show the animals he/she buy
         U1.show();   
        }
//===============MENU 3=================
       else if (choice=="3"){//if user choice to show the pet menu to buy a pet 
           Show_pet();  
        }
//==================MENU 4===========
         else if (choice=="0"){//if the user choose to end  the process
           cout <<"Thank you for visit us  have a good day Bay ⊂ ◉‿◉つ ...\n";
         }
//==================NOT ON The MENU ===========
        else{//if the user enter choice not exist in menu
          cout <<"not available choice::\n";  
        }
    }
    while(choice!="0");
return 0;
 
}
