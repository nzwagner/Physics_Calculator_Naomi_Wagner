//Practice with Functions Student: yourName, Teacher: Dr_T
//10-15-2019 updated 10-16-2019 and 3-24-2020
#include "functions.h" //reference the header file 

int main() 
{
  char input; 
  cout<< " Please enter \n v for velocity";
  cout <<" \n a for acceleration";
  cout<< " \n m for motion";
  cout<< "\n n for newton's 2nd law";
  cout<< "\n w for weight(earth)";
  cout << "and \n p for momentum\n";
  cin>> input;

  switch (input){
    case 'v':
    {
      //Ask the user for the unit of measure for ds and dt
      double ds,dt;
      cout<< "enter \t for the values of ds and dt";
      cin>> ds>>dt; 
      double v = ds/dt;
      cout<<"velocity is:"<<v;
      break;
    }
    case 'a':
    {
      //Ask the user for the unit of measure for dv and dt
      double dv,dt;
      cout<< "enter \t for the values of ds and dt";
      cin>> dv>>dt; 
      double a = dv/dt;
      cout<<"acceleration is:"<<a;
      break;
    }
     case 'm':
     
     //Ask the user first if he/she would like to calculate motion, then complete a submenu within the menu for the user to choose options 1-4.
     int num;
     {
       cout<< "\n 1 = v";
       cout<< "\n 2 = 2";
       cout<< "\n 3 = v^2";
       cout<< "\n 4 = v_bar\n";
       cin>>num;
       switch(num){
    case 1:
    {
      double v0,a,t,v;
      cout<< "\n v0,a,t\n";
      cin>> v0>>a>>t;
    v= v0+(a*t);
    cout<< "v ="<<v;
    break;
    }
    case 2:
    {
      double s,s0,v0,t,a;
      cout<<" values s0,v0,a,t";
      cin>> s0>>v0>>a>>t;
      s=s0+(v0*t)+(1/2)*(a*t*t);
      cout<< "values of s =:"<<s;
      break;
    }
    case 3:
    {
      double v,v2,v0,a,s,s0;
      cout<<"v0,a,s and s0 values\n";
      cin>> v0>>a>>s>>s0;
      v=((v0*v0)+((2*a)*(s-s0)));
      v2=v*v;
      cout<< "v2 =: "<<v2;
      break;
    }
    case 4: 
    {
      double v_bar,v,v0;
      cout<< "v0,a,s,s0 values";
      cin>>v>>v0;
      v_bar=((1/2)*(v+v0));
      cout<<"v_bar =" << v_bar;
      break;

    }
       }
       // newtons 2nd law
       case 'n':
       {
         double n, f,m,a;
         cout<<"\n n ,f,m,a values\n";
         cin>>n>>f>>m>>a;
         f=m*a;
         cout<< "f is force:"<<f;
         break;

       }
       //“Ask the user for the expected measure output. “append those values to the answer”
        case 'w':
       {
         //
         double w,m,g;
         cout<<"\n w ,m,g values\n";
         cin>>w>>m>>g;
         w=m*g;
         cout<< "w is weight:"<<w;
         break;
       
       
     }
            case 'p':
       {
         //
         double p,m,v;
         cout<<"\n p ,m,v values\n";
         cin>>p>>m>>v;
         p=m*v;
         cout<< "p is momentum:"<<p;
         break;
         
  }
  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(32) + ";1m";
  string reset = "\x1b[0m";
  //loop until the user provides "e" or (&&) "E" as exit condition
  
  do
  {
    showMenu(); //call a menu void function here
    cout << "\nPlease enter an option: ";
      cout << color; //change text to green 
     //cin >> option; //getline(cin,option); //get the entire line
    option = validateString(option); 
    cout << reset; //reset back to standard
    handleOption(option); //call handleOption and pass the user option as an argument
    
  
  }while(option != "e" && option != "E"); //DeMorgan's Law!!! 
  cout << "\nGoodbye. Hasta luego." << endl;
  return 0; 
}
  }
}
