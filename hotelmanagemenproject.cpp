
 #include<iostream>
 using namespace std;
 int main()
 {
     int quant;
     int choice;
     //Quantity
     int Qrooms = 0, Qpasta = 0, Qburger = 0, Qshake = 0, Qnoodles = 0, Qchiken = 0;
     // dood items sold
     int Srooms = 0, Spasta = 0, Sburger = 0, Sshake = 0, Snoodles = 0, Schiken = 0;
     // total prace of items
     int total_rooms = 0, total_pasta = 0, total_burger = 0, total_shake = 0, total_noodles = 0, total_chiken = 0;

     cout<<"\n\t Quantity of items we have";
     cout<<"\nRooms avalibe:";
     cin>>Qrooms;
     cout<<"\n Quantity of Pasta:";
     cin>>Qpasta;
     cout << "\n Quantity of Burger:";
     cin >> Qburger;
     cout << "\n Quantity of Shake:";
     cin >> Qshake;
     cout << "\n Quantity of Noodles :";
     cin >> Qnoodles;
     cout << "\n Quantity of Chiken-roll:";
     cin >> Qchiken;

     m:
     cout<<"\n\t\t Please select from the menu option";
     cout<<"\n\n1)Rooms";
     cout<<"\n2) Pasta";
     cout << "\n3) Burger";
     cout << "\n4) Shake";
     cout << "\n5) Noodles";
     cout << "\n6) Chiken-roll";
     cout << "\n7) Information regrading sales and collection";
     cout << "\n8)Exit ";
     cout <<"\n\n please Enter your choice ";
     cin>>choice;
     
     switch (choice)
     {
     case 1:
          cout<<"\n\n Enter the number of rooms you want:";
          cin>>quant;
          if(Qrooms-Srooms>=quant)

          {
             Srooms=Srooms+quant;
             total_rooms= total_rooms+quant*1200;
             cout<<"\n\n\t\t"<<quant<< " room/rooms have been alloted to you";
          }
          
          else
                 cout<< "\n\t only" << Qrooms - Srooms << "Rooms remaining in hotel";
          break;
     case 2:
         cout << "\n\n Enter Pasta Quantity:";
          cin >> quant;
         if (Qpasta - Spasta >= quant)
           {
              Spasta = Spasta + quant;
              total_pasta = total_pasta + quant * 250;
              cout << "\n\n\t\t" << quant << "pasta is the order";
           }
           else 
              {cout << "\n\tonly" << Qpasta - Spasta << "pasta remaining in hotel";}
          break;

     case 3:
       cout << "\n\n Enter burger Quantity:";
       cin >> quant;
       if (Qburger - Sburger >= quant)
       {
         Sburger = Sburger + quant;
         total_burger = total_burger + quant * 120;
         cout << "\n\n\t\t" << quant << "burger is the order";
       }
       else 
       cout << "\n\tonly" << Qpasta - Spasta << "pasta remaining in hotel";
       break;
     case 4:
       cout << "\n\n Enter Shake Quantity:";
       cin >> quant;
       if (Qshake - Sshake >= quant)
       {
         Sshake = Sshake + quant;
         total_shake = total_shake + quant * 120;
         cout << "\n\n\t\t" << quant << "shake is the order";
       }
       else 
       cout << "\n\tonly" << Qshake - Sshake << "shake remaining in hotel";
       break;
     case 5:
       cout << "\n\n Enter noodles Quantity:";
       cin >> quant;
       if (Qnoodles - Snoodles >= quant)
       {
         Snoodles = Snoodles + quant;
         total_noodles = total_noodles + quant * 140;
         cout << "\n\n\t\t" << quant << "noodles is the order";
       }
       else 
       cout << "\n\tonly" << Qnoodles - Snoodles << "noodles remaining in hotel";
       break;
     case 6:
       cout << "\n\n Enter chiken Quantity:";
       cin >> quant;
       if (Qchiken - Schiken >= quant)
       {
         Schiken = Schiken + quant;
         total_chiken = total_chiken + quant * 150;
         cout << "\n\n\t\t" << quant << "chiken is the order";
       }
       else 
       cout << "\n\tonly" << Qchiken - Schiken << "chiken remaining in hotel";
       break;

     case 7:

      cout<<"\n\t\tDetails of sales and collection";
      cout<<"\n\n Numbers of rooms we had :"<<Qrooms;
      cout<<"\n\n Number of rooms we gave for rent"<<Srooms;
      cout<<"\n\n Remaining rooms:"<<Qrooms-Srooms;
      cout << "\n\n Total rooms collection for the day :" << total_rooms;

      cout << "\n\n Numbers of pasta we had :" << Qpasta;
      cout << "\n\n Number of pasta we sold" << Spasta;
      cout << "\n\n Remaining pasta:" << Qpasta - Spasta;
      cout << "\n\n Total pasta collection for the day :" << total_pasta;

      cout << "\n\n Numbers of burger we had :" << Qburger;
      cout << "\n\n Number of burgers we sold" << Sburger;
      cout << "\n\n Remaining burgers :" << Qburger - Sburger;
      cout << "\n\n Total burger collection for the day :" << total_burger;

      cout << "\n\n Numbers of noodles we had :" << Qnoodles;
      cout << "\n\n Number of noodles we sold" << Snoodles;
      cout << "\n\n Remaining noodles :" << Qnoodles - Snoodles;
      cout << "\n\n Total noodles collection for the day :" << total_noodles;

      cout << "\n\n Numbers of shake we had :" << Qshake;
      cout << "\n\n Number of shake  we sold" << Sshake;
      cout << "\n\n Remaining shake :" << Qshake - Sshake;
      cout << "\n\n Total shake collection for the day :" << total_shake;

      cout << "\n\n Numbers of chiken we had :" << Qchiken;
      cout << "\n\n Number of chiken we sold" << Schiken;
      cout << "\n\n Remaining chiken :" << Qchiken - Schiken;
      cout << "\n\n Total chiken collection for the day :" << total_chiken;

      cout << "\n\n\n Total collection of the day" << total_rooms + total_pasta + total_burger + total_shake + total_noodles + total_chiken;
      break;
     case 8:
          exit(0);
           
           default:
                cout<<"\n please select the numbers above!";

      }
      
   goto m;
    
 }
 
 
 


















  



