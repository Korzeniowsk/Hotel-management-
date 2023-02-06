 #include <iostream>
 using namespace std;
 int main ()
 {
 	int quant;
 	int choice;
 	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qmilkshake=0, Qchickenroll=0; //these hold the quantity of food that is available as of then at the hotel
 	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Smilkshake=0, Schickenroll=0; //these are the food materials that got sold at the hotel
 	int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_milkshake=0, Total_chickenroll=0; //Total price of all the services provided
 	cout << "\t\t Quantity of items that we have " << endl;
 	cout << "\n Rooms avaiable: ";
 	cin >> Qrooms;
 	cout << "\n Plates of pasta available: ";
 	cin >> Qpasta;
 	cout << "\n Plates of burger available: ";
 	cin >> Qburger;
 	cout << "\n Plates of noodles available: ";
 	cin >> Qnoodles;
 	cout << "\n Plates of milkshake available: ";
 	cin >> Qmilkshake;
 	cout << "\n Plates of chickenroll available: ";
 	cin >> Qchickenroll;
 	
 	label:
 		
 	cout << "\n\n\t Please select from the menu options: ";
 	cout << "\n 1. Rooms";
 	cout << "\n 2. Pasta";
 	cout << "\n 3. Burger";
 	cout << "\n 4. Noodles";
 	cout << "\n 5. Milkshake";
 	cout << "\n 6. Chicken Roll";
 	cout << "\n 7. Information regarding sales and collection";
 	cout << "\n 8. Exit";
 	
 	cout << "\n\n Please select your choice: ";
 	cin >> choice;
 	
 	switch (choice)
	 
 	{
 		case 1:
 		cout << "\nPlease enter the number of rooms you want: ";
 		cin >> quant;
 		if (Qrooms-Srooms >= quant)
 		
 		{
			 	Srooms = Srooms+quant;
 			Total_rooms = Total_rooms+ quant*2000;
 			cout << "\n\n Your wish is our command!";
 		}
		 
		 else 
		
		 	{
			 cout << "Sorry, only " << Qrooms-Srooms << "rooms are available";}
		 	break;
		 
	    case 2:
     	cout << "\nPlease enter the plates of pasta you want: ";
 		cin >> quant;
 		if (Qpasta-Spasta >= quant)
 		
 		{
			 	Spasta = Spasta+quant;
 			Total_pasta = Total_pasta+ quant*200;
 			cout << "\n\n Your wish is our command!";
 		}
		 
		 else 
		 
		 	{
			 cout << "Sorry, only " << Qpasta-Spasta << "plates of pasta are available";}
		 	break;
		
        case 3:
 		cout << "\nPlease enter the plates of burger you want: ";
 		cin >> quant;
 		if (Qburger-Sburger >= quant)
 		
 			{
			 Sburger = Sburger+quant;
 			Total_burger = Total_burger+ quant*100;
 			cout << "\n\n Your wish is our command!";}
 			
		 
		 else 
		 
		 	{
			 cout << "Sorry, only " << Qburger-Sburger << "plates of burgers are available";}
		    break;
		 
	    case 4:
 		cout << "\nPlease enter the plates of noodles you want: ";
 		cin >> quant;
 		if (Qnoodles-Snoodles >= quant)
 		
 			{
			 Snoodles = Snoodles+quant;
 			Total_noodles = Total_noodles+ quant*200;
 			cout << "\n\n Your wish is our command!";}
 			
		 
		 else 
		 
		 	{
			 cout << "Sorry, only " << Qnoodles-Snoodles << "plates of noodles are available";}
		    break;
		 
	    case 5:
 		cout << "\nPlease enter the glasses of milkshake you want: ";
 		cin >> quant;
 		if (Qmilkshake-Smilkshake >= quant)
 	
 			{
			 Smilkshake = Smilkshake+quant;
 			Total_milkshake = Total_milkshake+ quant*180;
 			cout << "\n\n Your wish is our command!";
 		}
		 
		 else 
		
		 	{
			 cout << "Sorry, only " << Qmilkshake-Smilkshake << "glasses of milkshakes are available";}
		    break;
		 
	    case 6:

 		cout << "\nPlease enter the plates of chicken roll you want: ";
 		cin >> quant;
 		if (Qchickenroll-Schickenroll >= quant)
 		
 			{
			 Schickenroll = Schickenroll+quant;
 			Total_chickenroll = Total_chickenroll+ quant*150;
 			cout << "\n\n Your wish is our command!";}
 			
		 
		 else 
		 
		 	{
			 cout << "Sorry, only " << Qchickenroll-Schickenroll << "plates of chicken rolls are available";}
		    break;
		 
	case 7:
	
		cout << "\n\n\t The Details of sales and collection"<< endl;
		cout << "\n Number of rooms we had: " << Qrooms<< endl;
		cout << "\n Number of rooms that were rented: " << Srooms<< endl;
		cout << "\n Remaining rooms: " << Qrooms-Srooms<< endl;
		cout << "\n Total room coolection for the day: " << Total_rooms<< endl;
		
		cout << "\n Number of plates of pasta we had: " << Qpasta<< endl;
		cout << "\n Number of plates of pasta that were ordered: " << Spasta<< endl;
		cout << "\n Remaining plates: " << Qpasta-Spasta<< endl;
		cout << "\n Total pasta coolection for the day: " << Total_pasta<< endl;
		
	    cout << "\n Number of plates of burger we had: " << Qburger<< endl;
		cout << "\n Number of plates of burger that were ordered: " << Sburger<< endl;
		cout << "\n Remaining plates: " << Qburger-Sburger<< endl;
		cout << "\n Total burger coolection for the day: " << Total_burger<< endl;
		
		cout << "\n Number of plates of noodles we had: " << Qnoodles<< endl;
		cout << "\n Number of plates of noodles that were ordered: " << Snoodles <<endl;
		cout << "\n Remaining plates: " << Qnoodles-Snoodles << endl;
		cout << "\n Total noodles coolection for the day: " << Total_noodles << endl;
		
		cout << "\n Number of glasses of milkshake we had: " << Qmilkshake << endl;
		cout << "\n Number of glasses of milkshake that were ordered: " << Smilkshake << endl;
		cout << "\n Remaining plates: " << Qmilkshake-Smilkshake << endl;
		cout << "\n Total milkshake coolection for the day: " << Total_milkshake << endl;
		
		cout << "\n Number of plates of chicken rolls we had: " << Qchickenroll<< endl;
		cout << "\n Number of plates of chicken rolls that were ordered: " << Schickenroll << endl;
		cout << "\n Remaining plates: " << Qchickenroll-Schickenroll << endl;
		cout << "\n Total chicken roll coolection for the day: " << Total_chickenroll<< endl;
		
		
	case 8:
			
			exit (0);
			
	default:
	
			cout << "\n Please select one of the numbers mentioned above!"<< endl;
			
			
	}
	
 	goto label;
 	
 	
 	
 }
