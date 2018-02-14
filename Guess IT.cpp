#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

    vector <string> easy;//bollywood
    vector <string> medium;
    vector <string> hard;
    vector <string> easy2;//hollywood
    vector <string> medium2;
    vector <string> hard2;
    vector <string>  :: iterator it;

int main()

{
    system("color 9");
    int a,b,c,d,e,f,h,i,l,z,x,y,s,g,n,m,v;
    hard.push_back("Junooniyat");
    hard.push_back("Rahasya");
    hard.push_back("Hawaizaada");
    hard.push_back("Badmashiyaan");
    hard.push_back("Hunterrr");
    hard.push_back("Ishqedarriyaan");
    hard.push_back("Shamitabh");
    hard.push_back("Drishyam");
    hard.push_back("Ranbanka");
    hard.push_back("Kajarya");
    medium.push_back("Azhar");
    medium.push_back("Sarbjit");
    medium.push_back("Heera Panna");
    medium.push_back("Jine Kii Raah");
    medium.push_back("Kati Patang");
    medium.push_back("Jagga Jasoos");
    medium.push_back("Housefull");
    medium.push_back("Munna Michael");
    medium.push_back("Haseena Parkar");
    medium.push_back("Qaidi Band");
    easy .push_back("Airlift");
    easy .push_back("Baahubali");
    easy .push_back("Dear Zindagi");
    easy .push_back("Dangal");
    easy .push_back("Ziddi");
    easy .push_back("Neerja");
    easy .push_back("Yaarana");
    easy .push_back("Ghajini");
    easy .push_back("Sultan");
    easy .push_back("Baarish");
    easy2.push_back("Easy");
    easy2.push_back("Spider Man");
    easy2.push_back("Iron Man");
    easy2.push_back("Titanic");
    easy2.push_back("Inception");
    easy2.push_back("Memento");
    easy2.push_back("Interstellar");
    easy2.push_back("Twilight");
    easy2.push_back("Cars");
    easy2.push_back("The Terminator");
    medium2.push_back("Tombstone");
    medium2.push_back("Dunkirk");
    medium2.push_back("The Prestige");
    medium2.push_back("Insomnia");
    medium2.push_back("Man of Steel");
    medium2.push_back("The Godfather");
    medium2.push_back("Avatar");
    medium2.push_back("Jurassic Park");
    medium2.push_back("Casablanca");
    medium2.push_back("Fight Club");
    hard2.push_back("Annabelle");
    hard2.push_back("A New Hope");
    hard2.push_back("Die Hard");
    hard2.push_back("The Firm");
    hard2.push_back("Schindlers List");
    hard2.push_back("Cliffhanger");
    hard2.push_back("Rudy");
    hard2.push_back("Hocus Pocus");
    hard2.push_back("Rocky");
    hard2.push_back("Braveheart");
    cout<<"\t\t\t\t\t\t\t\t\t\tFor HollyWood Type 1 For BollyWood Type 2\n\n";
    cin>>z;
    cout<<"\t\t\t\t\t\t\t\t\t\tEnter Your Lucky No From 0 To Less Than 10\n\n";
    cin>>g;
    char ch='a';
    bool flag=0;
    string jan;
    switch(z)
    {
      case 1://hollywood
      {
//          clrscr();
      cout<<"\t\t\t\t\t\t\t\t\t\t0 - EASY\n\n\t\t\t\t\t\t\t\t\t\t1 - MEDIUM\n\n\t\t\t\t\t\t\t\t\t\t2 - HARD\n\n";
      cin>>v;
//system("cls");
      switch(v)
      {
       case 0://easy
//clrscr();
       {
        system("color 2");
        a=0;
        l=0;
        for(it=easy2.begin();it!=easy2.end();it++)
            {
                if(l==g)break;
                l++;
            }
       b  = (*it).size();
       c=0;
       jan = *it;
       e=0;
      // cout<<b<<"\n";
       for(d=0;d<b;d++)
       {
        if(jan[d]=='A' || jan[d]=='E' || jan[d]=='I' || jan[d]=='O' || jan[d]=='U' ||jan[d]=='a' || jan[d]=='e' || jan[d]=='i' || jan[d]=='o' || jan[d]=='u')
           {
           }
        else if(jan[d]==' ')
            {}
        else
            {
                jan[d] = '_';
                e++;
            }
       }
       e = e +4;
       while(e!=0)
       {
        cout<<"\t\t\t\t\t\t\t\t\t\tYOU Have "<<e<<" Chances Left\n\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        for(d=0;d<b;d++)
         {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<jan[d]<<"   ";
        }
       cout<<"\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<d<<"   ";
       }
       cout<<"\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\tEnter Position and Value You Want to Enter\n\n";
       cin>>d;
       cin.ignore();
       cin>>ch;
       //system("cls");
       if((*it)[d]!=ch)
       {
           cout<<"\t\t\t\t\t\t\t\t\t\tWrong Attempt\n\n";
           e--;
       }
       else
       {
           jan[d] = ch;
       }
       c++;
       if(jan==*it)
        {
            flag=1;
            break;
        }
       }
       if(flag==0)
       cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU LOST\n\n";
       else
       cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU WON\n\n";
       break;
       }
       case 1:
       {
           system("color 6");
           a=0;
           l=0;
       for(it=medium2.begin();it!=medium2.end();it++)
       {
        if(l==g)
            break;
        l++;
       }
       b  = (*it).size();
       c=0;
       jan = *it;
       e = 0;
      // cout<<b<<"\n";
       for(d=0;d<b;d++)
       {
        if(jan[d]=='A' || jan[d]=='E' || jan[d]=='I' || jan[d]=='O' || jan[d]=='U' ||jan[d]=='a' || jan[d]=='e' || jan[d]=='i' || jan[d]=='o' || jan[d]=='u')
           {
           }
        else if(jan[d]==' ')
            {
            }
        else
            {
                jan[d] = '_';
                e++;
            }
       }
       e = e+2;
       while(e!=0)
       {
       cout<<"\t\t\t\t\t\t\t\t\t\tYOU Have "<<e<<" Chances Left\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<jan[d]<<"   ";
       }
       cout<<"\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<d<<"   ";
       }
       cout<<"\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\tEnter Position and Value You Want to Enter\n\n";
       cin>>d;
       cin.ignore();
       cin>>ch;
       //system("cls");
       if((*it)[d]!=ch)
       {
           cout<<"\t\t\t\t\t\t\t\t\t\tWrong Attempt\n\n";
           e--;
       }
       else
       jan[d] = ch;

       c++;
       if(jan==*it)
        {
            flag=1;
            break;
        }
      // system("cls");
       }
       if(flag==0)
       cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU LOST\n\n";
       else
       cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU WON\n\n";

       break;
       }

       case 2:
       {
       system("color 4");
       a=0;
       l=0;
       for(it=hard2.begin();it!=hard2.end();it++)
       {
        if(l==g)
            break;
        l++;
       }
       b  = (*it).size();
       c=0;
       jan = *it;
       e = 0;
      // cout<<b<<"\n";
       for(d=0;d<b;d++)
       {
        if(jan[d]=='A' || jan[d]=='E' || jan[d]=='I' || jan[d]=='O' || jan[d]=='U' ||jan[d]=='a' || jan[d]=='e' || jan[d]=='i' || jan[d]=='o' || jan[d]=='u')
           {

           }
        else if(jan[d]==' ')
            {
            }
        else
            {
                jan[d] = '_';
                e++;
            }
       }
       e++;
       while(e!=0)
       {
       cout<<"\t\t\t\t\t\t\t\t\t\tYOU Have "<<e<<" Chances Left\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<jan[d]<<"   ";
       }
          cout<<"\n\n";
          cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<d<<"   ";
       }
       cout<<"\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\tEnter Position and Value You Want to Enter\n\n";
       cin>>d;
       cin.ignore();
       cin>>ch;
       //system("cls");
       if((*it)[d]!=ch)
       {
           cout<<"\t\t\t\t\t\t\t\t\t\tWrong Attempt\n\n";
           e--;
       }
       else
       jan[d] = ch;

       c++;
       if(jan==*it)
        {
            flag=1;
            break;
        }
      // system("cls");
       }
      if(flag==0)
      cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU LOST\n\n";
      else
      cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU WON\n\n";

      break;
      }
      }
      break;
      }

      case 2:
     {
      cout<<"\t\t\t\t\t\t\t\t\t\t0 - EASY\n\n\t\t\t\t\t\t\t\t\t\t1 - MEDIUM\n\n\t\t\t\t\t\t\t\t\t\t2 - HARD\n\n";
      cin>>v;
       //system("cls");
      switch(v)
      {
       case 0:
       {
           system("color 2");
             a=0;
             l=0;
       for(it=easy.begin();it!=easy.end();it++)
       {
        if(l==g)
          break;
        l++;
       }
       b  = (*it).size();
       c=0;
       jan = *it;
       e = 0;
      // cout<<b<<"\n";
       for(d=0;d<b;d++)
       {
        if(jan[d]=='A' || jan[d]=='E' || jan[d]=='I' || jan[d]=='O' || jan[d]=='U' ||jan[d]=='a' || jan[d]=='e' || jan[d]=='i' || jan[d]=='o' || jan[d]=='u')
           {

           }
        else if(jan[d]==' ')
            {
            }
        else
            {
                jan[d] = '_';
                e++;
            }
       }
       e=e+4;
       while(e!=0)
       {
       cout<<"\t\t\t\t\t\t\t\t\t\tYOU Have "<<e<<" Chances Left\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
         {
             cout<<"   ";
         }
        else
           cout<<jan[d]<<"   ";
       }
       cout<<"\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<d<<"   ";
       }
       cout<<"\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\tEnter Position and Value You Want to Enter\n\n";
       cin>>d;
       cin.ignore();
       cin>>ch;
      // system("cls");
       if((*it)[d]!=ch)
       {
           cout<<"\t\t\t\t\t\t\t\t\t\tWrong Attempt\n\n";
           e--;
       }
       else
       jan[d] = ch;

       c++;
       if(jan==*it)
        {
            flag=1;
            break;
        }
      // system("cls");
       }
       if(flag==0)
       cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU LOST\n\n";
       else
       cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU WON\n\n";

       break;
       }

       case 1:
       {
           system("color 6");
           a=0;
           l=0;
        for(it=medium.begin();it!=medium.end();it++)
       {
        if(l==g)
            break;
        l++;
       }
       b  = (*it).size();
       c=0;
       jan = *it;
       e = 0;
       //cout<<b<<"\n";
       for(d=0;d<b;d++)
       {
        if(jan[d]=='A' || jan[d]=='E' || jan[d]=='I' || jan[d]=='O' || jan[d]=='U' ||jan[d]=='a' || jan[d]=='e' || jan[d]=='i' || jan[d]=='o' || jan[d]=='u')
           {

           }
        else if(jan[d]==' ')
            {
            }
        else
            {
                jan[d] = '_';
                e++;
            }
       }
       while(e!=0)
       {
       cout<<"\t\t\t\t\t\t\t\t\t\tYOU Have "<<e<<" Chances Left\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<jan[d]<<"   ";
       }
         cout<<"\n\n";
      cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<d<<"   ";
       }
       cout<<"\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\tEnter Position and Value You Want to Enter\n\n";
       cin>>d;
       cin.ignore();
       cin>>ch;
     //  system("cls");
       if((*it)[d]!=ch)
       {
           cout<<"\t\t\t\t\t\t\t\t\t\tWrong Attempt\n\n";
           e--;
       }
       else
       jan[d] = ch;

       c++;
       if(jan==*it)
        {
            flag=1;
            break;
        }
      // system("cls");
       }
       if(flag==0)
       cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU LOST\n\n";
       else
       cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU WON\n\n";

       break;
       }

       case 2:
       {
           system("color 4");
          a=0;
          l=0;
        for(it=hard.begin();it!=hard.end();it++)
         {
        if(l==g)
            break;
        l++;
         }
       b  = (*it).size();
       c=0;
       jan = *it;
       e = 0;
      // cout<<b<<"\n";
       for(d=0;d<b;d++)
       {
        if(jan[d]=='A' || jan[d]=='E' || jan[d]=='I' || jan[d]=='O' || jan[d]=='U' ||jan[d]=='a' || jan[d]=='e' || jan[d]=='i' || jan[d]=='o' || jan[d]=='u')
           {

           }
        else if(jan[d]==' ')
            {
            }
        else
            {
                jan[d] = '_';
                 e++;
            }
       }
       e++;
       while(e!=0)
       {
       cout<<"\t\t\t\t\t\t\t\t\t\tYOU Have "<<e<<" Chances Left\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<jan[d]<<"   ";
       }
        cout<<"\n\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t";
       for(d=0;d<b;d++)
       {
        if(jan[d]==' ')
            {
             cout<<"   ";
            }
        else
           cout<<d<<"   ";
       }
       cout<<"\n\n";
       cout<<"\t\t\t\t\t\t\t\t\t\tEnter Position and Value You Want to Enter\n\n";
       cin>>d;
       cin.ignore();
       cin>>ch;
       //system("cls");
       if((*it)[d]!=ch)
       {
           cout<<"\t\t\t\t\t\t\t\t\t\tWrong Attempt\n\n";
           e--;
       }
       else
       jan[d] = ch;

       c++;
       if(jan==*it)
        {
            flag=1;
            break;
        }
       //system("cls");
       }
      if(flag==0)
      cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU LOST\n\n";
      else
      cout<<"\n\n\t\t\t\t\t\t\t\t\t\tYOU WON\n\n";
      break;
         }
        }
      }
    }
 }
