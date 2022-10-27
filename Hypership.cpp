/// Hypership - hyperspeed Authorship variant (6,570-bit encryption.)
/// Nikolay Valentinovich Repnitskiy - License: WTFPLv2+ (wtfpl.net)


/*  Version  1.0.0.  Get a number only you can modify--which anyone can verify.
Disposable public files are 1.2kB text files. Numbers are  150  char text files.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 Set testing_mode to true and get a number. Now repeat options 2 and 3; You're
 verifying yourself to see what others will see but you need only verify others.
 Otherwise you enter randomness twice then only once every  504  modifications.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 1. Proof of life
 2. User authentication
 3. Canary update authentication
 4. --------
 5. -------- (see github)
 6. --------
 7. --------
 8. Animal theft management (assign animal ID to Authorship number, registrars
    should easily identify animals such as by imaging a cow's wrinkly nose.)
 9. --------
10. Ownership proof, trade, & handover --------
11. Rolling-code replacement (use extended cryptographer's acknowledgment.)
12. --------
13. Adjustable compromise-evident device (just as  tamper-evident  devices prove
    they've been tampered with, Authorship proves its user has been compromised,
    and no one can  impersonate  that user--feature 4. This can be a  dead-man's
    switch and  early warning  for groups.  "Self-destruct  if  no  timely mouse
    movement" is an  inactivity-evident  device  adjustable to match the time it
    takes to modify your  number  and upload the  public file  where  inactivity
    results in nothing uploaded--cryptographically-killed authentication events.
    Access to your  ever-changing  Authorship private file  means your adversary
    can impersonate you publicly.  Their goal is to interrupt your life, without
    interrupting your authentication events.  Authorship  forces them to operate
    with  unlikely  delicacy...  You can  message  that  you're alive,  but when
    compromised,  those with access to  your  device  can keep messaging on your
    behalf and fool the public. With Authorship,  they would need access to your
    Authorship private file inorder to make those messages publicly-verifiable.)
14. Exposure-independent authentication (typically, authentication--rolling-code
    or not--relies on shared secrets;  employers allow you to open a door if and
    only if that door accepts your ID or secret  string  of characters--matching
    what the door already expects to see. The door is aware of a secret and must
    never expose it.  But if instead the door contained your  Authorship  number
    which only you modify,that ever-changing number can be displayed on the door
    and even made public. EVERYTHING you gave the door,  and EVERYTHING the door
    contains, can be  safely  made public raw.  And thanks to  super-flexibility
    of Authorship, those things can be safely made public raw, forever.)
15. Symmetry-independent authentication  (feature 14;  verifying parties are not
    and need not be aware of what any  Authorship number  should look like after
    modification.  In  fact,  no one knows;  numbers are not  predetermined  but
    generated upon  modification.  They can be  any string,  but preferably that
    which Authorship gives you. The  essence  of Authorship is what emerges from
    the  presence  and  absence  of keys.  Verifying parties  simply  check that
    modification makes sense  mathematically.  They are given every function but
    not every key; modifying parties  indefinitely  withhold all-new secrets for
    each event. And thanks to super-flexibility of Authorship, those secrets can
    increase in size and quantity forever.)
16. Encryption-type-independent  authentication  (feature  15;  the  essence  of
    Authorship is a  clever  assembly  of  encrypted  items.  Those items can be
    anything  of  difficulty,  including  riddles,  encrypted  files,  and  even
    philosophical puzzles. A deeper essence of  Authorship  is what emerges when
    solutions are withheld,  selectively.  No matter the encrypted item type, it
    stands alone to serve as something solved or unsolved (2 actions.)Authorship
    does not depend on item particularities in order to assemble those items.)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
How to run the program  -  Software package repositories for GNU+Linux operating
systems have all the tools you can imagine. Open a terminal and use this command
as root to install Geany and g++ on your computer: apt install geany g++   Geany
is a fast & lightweight text editor and Integrated Development Environment where
you can write and run code. g++ is the GNU compiler for C++ which allows written
code to run. The compiler operates in the background and displays errors in your
code as you will see in the lower Geany box. Make a new folder somewhere on your
machine. Paste this code into Geany. For clarity in auditing, enable indentation
guides: go to View >> Show Indentation Guides. Save the document as anything.cpp
within the newly-created folder. Use these shortcuts to run the program: F9, F5.
You may paste over this code with other  .cpp files, or open a new tab & repeat.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
How to make an executable with g++  -  Save this program as anything.cpp, open a
terminal, and type g++ then space. Drag & drop this saved file into the terminal
and its directory will be  appended to your pending entry. Click on the terminal
and press enter.   a.out now resides in the user directory, you may rename it to
anything.  To run that executable, simply drag and drop it into a terminal, then
click on the terminal and press enter.  Reminder:  executable's effect-directory
is the user directory on your machine, for example:  /home/nikolay    Enjoy. */

#include <fstream>
#include <iostream>
#include <sys/stat.h> //For mkdir() (creating folders.)
using namespace std;

int main()
{	//                                                                                                                                                            |
	bool testing_mode = false; //DEFAULT = FALSE ELSE WEAKENS & SKIPS MANUAL ENTRY OF RANDOM SEEDS.                                      fatal if broken   >      |
	//                                                                                                                                                            |
	
	if(testing_mode == true) {cout << "\n(Hypership)  testing_mode is on,  DON'T ACTUALLY USE NUMBERS MADE THIS WAY!\n\n";}
	else {cout << "\n(Hypership)\n\n";}
	
	cout << "(1) Create - get a number only you can modify--which anyone can verify.\n"
	     << "(2) Modify - needs Hypership.private folder to make Hypership.public file.\n"
	     << "(3) Verify - needs both their Hypership.public and Hypership.number files.\n\n"
	
	     << "Enter option: ";
	
	int user_option; cin >> user_option;
	ifstream in_stream;
	ofstream out_stream;
	
	
	
	
	
	//_____________________________________________________________________________________________________________________
	//__________________________________________________GET_FIRST_NUMBER__________________________________________________/
	if(user_option == 1)
	{	//Checks if files already exists. This is a block from Authorship.cpp option 1.
		in_stream.open("Hypership.number");                  if(in_stream.fail() == false) {cout << "\nFiles already present.\n"; in_stream.close(); return 0;} in_stream.close();
		in_stream.open("./Hypership.private/Representing");  if(in_stream.fail() == false) {cout << "\nFiles already present.\n"; in_stream.close(); return 0;} in_stream.close();
		in_stream.open("./Hypership.private/Number_backup"); if(in_stream.fail() == false) {cout << "\nFiles already present.\n"; in_stream.close(); return 0;} in_stream.close();
		
		//Gets seeds for RNG.
		unsigned int user_seeds[50] = {0};
		if(testing_mode == false)
		{	//Gets 50 seeds from the user.
			cout << "\nEnter a random 8-digit integer, repeat 50 times.\n\n";
			for(int a = 0; a < 50; a++)
			{	if(a < 9) {cout << " " << (a + 1) << " of 50: ";} //Blank for aesthetics.
				else      {cout <<        (a + 1) << " of 50: ";}
				
				//Gets and checks input.
				cin >> user_seeds[a];
				if((user_seeds[a] > 99999999) || (user_seeds[a] < 10000000)) {cout << "\nOut of bounds, try again.\n"; return 0;}
			}
		}
		else
		{	//Fills seeds automatically (not secure, please turn off testing_mode.)
			srand(time(0));
			for(int a = 0; a < 50; a++) {user_seeds[a] = (rand() % 100000000);}
		}
		
		cout << "\nWait 5 seconds...\n";
		
		/*Generates random numbers in arrays functions[] and keys[]. (Constructively applies randomness based on 50 user seeds.)
		Number of possible keys per key: (95^1,000 or 10^1977) ~= 529182274774504763830539013129828002031774783533315989172550112454325120067086
		5320146452373594718852917306195312985394577376458207810856924643582943374082422747388708888747644424641359666528756626103165740624350564
		7458352903136303750933244235717370788699695208239031166611256027967040028838334795356155711479538914638596550775005291039392481521230142
		4866763813372856977497426768548229883133952014400000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000  */
		unsigned char functions[50400] = {0}; //Eventually  becomes 1,008 contiguous    50-character functions (encrypted.)
		unsigned char keys   [1008000] = {0}; //Immediately becomes 1,008 contiguous 1,000-character keys (used as seeds.)
		for(int a = 0; a < 50; a++)
		{	srand(user_seeds[a]);
			
			if((user_seeds[a] % 2) == 0)
			{	//Constructively fills functions[] and keys[] LEFT to right based on seeds.
				for(int b = 0; b < 50400; b++)
				{	functions[b] += (rand() % 10);
					functions[b] %= 10;
				}
				
				for(int b = 0; b < 1008000; b++)
				{	keys[b] += (rand() % 95);
					keys[b] %= 95;
				}
			}
			else
			{	//Constructively fills functions[] and keys[] RIGHT to left based on seeds.
				for(int b = 50399; b >= 0; b--)
				{	functions[b] += (rand() % 10);
					functions[b] %= 10;
				}
				
				for(int b = 1007999; b >= 0; b--)
				{	keys[b] += (rand() % 95);
					keys[b] %= 95;
				}
			}
		}
		
		//Generates additional seeds from keys[] for additional transformation of actual_key[] before encryption.
		long long secondary_seeds[100800] = {0}; //Assembles 100 (mostly 11-digit) seeds per key, from each of the 1,008 1,000-character keys.
		int keys_read_bookmark = 0;
		int secondary_seeds_write_bookmark = 0;
		for(int a = 0; a < 100800; a++) //100,800 comes from 10 contiguous key characters being scraped at once, 100,800 times. Recall that keys[] is 10x bigger.
		{	for(int b = 0; b < 10; b++)
			{	secondary_seeds[secondary_seeds_write_bookmark] *= 10;
				secondary_seeds[secondary_seeds_write_bookmark] += keys[keys_read_bookmark + b];
			}
			
			keys_read_bookmark += 10;
			secondary_seeds_write_bookmark++;
		}
		
		//Generates 1,008 contiguous 50-digit plaintext (each composed of 10 contiguous 5-digit primes.)
		//Randomness in functions[] is used to create this plaintext then functions[] is overwritten with it.
		bool sieve[100000] = {1, 1}; //Boolean sieve of Eratosthenes. Zeros are mapped to prime elements.
		for(int prime = 2; prime < 317; prime++) //317 is sqrt(100,000)
		{	for(int a = prime + prime; a < 100000; a += prime) {sieve[a] = 1;}
		}
		
		int functions_read_bookmark  = 0;
		int functions_write_bookmark = 0;
		for(int a = 0; a < 10080; a++) //50,400/5 = 10,080 total 5-digit primes.
		{	//Unloads 5 array elements to make one integer.
			int temp_5_digit_prime;
			temp_5_digit_prime  = functions[functions_read_bookmark    ]; if(temp_5_digit_prime == 0) {temp_5_digit_prime++;} temp_5_digit_prime *= 10;
			temp_5_digit_prime += functions[functions_read_bookmark + 1]; temp_5_digit_prime *= 10;
			temp_5_digit_prime += functions[functions_read_bookmark + 2]; temp_5_digit_prime *= 10;
			temp_5_digit_prime += functions[functions_read_bookmark + 3]; temp_5_digit_prime *= 10;
			temp_5_digit_prime += functions[functions_read_bookmark + 4];
			
			//Adjusts temp_5_digit_prime for primality (tests & searches in pos dir.) If length > 5, sets to largest 5-digit prime.
			while(sieve[temp_5_digit_prime] == 1)
			{	if(temp_5_digit_prime > 99991) {temp_5_digit_prime = 99991; break;}
				temp_5_digit_prime++;
			}
			
			//Writes the prime to functions[].
			functions[functions_write_bookmark + 4] = (temp_5_digit_prime % 10); temp_5_digit_prime /= 10;
			functions[functions_write_bookmark + 3] = (temp_5_digit_prime % 10); temp_5_digit_prime /= 10;
			functions[functions_write_bookmark + 2] = (temp_5_digit_prime % 10); temp_5_digit_prime /= 10;
			functions[functions_write_bookmark + 1] = (temp_5_digit_prime % 10); temp_5_digit_prime /= 10;
			functions[functions_write_bookmark    ] =  temp_5_digit_prime;
			
			functions_read_bookmark  += 5;
			functions_write_bookmark += 5;
		}
		
		//Encrypts 1,008 plaintext to make the functions.
		functions_write_bookmark = 0;
		keys_read_bookmark = 0;
		unsigned char actual_key[50] = {0};
		int secondary_seeds_read_bookmark = 0;
		for(int a = 0; a < 1008; a++) //Generates random numbers in array actual_key[].
		{	for(int b = 0; b < 1000; b++) //Constructively applies randomness based on keys[] (used as seeds, 1,000 items per actual_key[].)
			{	srand(keys[keys_read_bookmark]);
				
				if((keys[keys_read_bookmark] % 2) == 0)
				{	for(int c = 0; c < 50; c++) //Fills left to right based on seeds.
					{	actual_key[c] += (rand() % 95);
						actual_key[c] %= 95;
					}
				}
				else
				{	for(int c = 49; c >= 0; c--) //Fills right to left based on seeds.
					{	actual_key[c] += (rand() % 95);
						actual_key[c] %= 95;
					}
				}
				
				keys_read_bookmark++;
			}
			
			//Further transforms actual_key[] based on secondary_seeds[].
			for(int b = 0; b < 100; b++) //Constructively applies randomness based on secondary_seeds[] (used as seeds, 100 11-digit integer per actual_key[].)
			{	srand(secondary_seeds[secondary_seeds_read_bookmark]);
				
				if((secondary_seeds[secondary_seeds_read_bookmark] % 2) == 0)
				{	for(int c = 0; c < 50; c++) //Fills left to right based on SECONDARY seeds.
					{	actual_key[c] += (rand() % 95);
						actual_key[c] %= 95;
					}
				}
				else
				{	for(int c = 49; c >= 0; c--) //Fills right to left based on SECONDARY seeds.
					{	actual_key[c] += (rand() % 95);
						actual_key[c] %= 95;
					}
				}
				
				secondary_seeds_read_bookmark++;
			}
			
			///Encrypts functions[] using actual_key[].
			for(int b = 0; b < 50; b++)
			{	functions[functions_write_bookmark] += actual_key[b];
				functions[functions_write_bookmark] %= 95;
				
				functions_write_bookmark++;
			}
			
			//Resetting actual key. If not reset (in option 3) then string depends on keys not present.
			for(int a = 0; a < 50; a++) {actual_key[a] = 0;}
		}
		
		
		
		
		
		///Generating 505 numbers (documentation: step 2 in Create.) The following long for() is the main Hypership addition.
		unsigned char numbers[36360]; for(int a = 36288; a < 36360; a++) {numbers[a] = 16;} //Makes last 72 elements 0 when written to file.
		unsigned char       cat[172];             //You may fill the last 72 elements with data after this fix (see documentation for #505.)
		int numbers_read_bookmark  = 36288; //First element of #505.
		int numbers_write_bookmark = 36216; //First element of #504.
		functions_read_bookmark    = 50300; //First element of function pair 504.
		
		for(int a = 0; a < 504; a++)
		{	//Loading cat[172]
			int cat_write_bookmark = 0;
			
			for(int b = 0; b < 72; b++)
			{	cat[cat_write_bookmark] = numbers[numbers_read_bookmark];
				cat_write_bookmark++;
				numbers_read_bookmark++;
			}
			
			numbers_read_bookmark -= 144;
			
			for(int b = 0; b < 100; b++)
			{	cat[cat_write_bookmark] = functions[functions_read_bookmark];
				cat_write_bookmark++;
				functions_read_bookmark++;
			}
			
			functions_read_bookmark -= 200;
			
			//Creating a 72-char hash of cat[].
			unsigned char hash[72] = {0};
			for(int b = 0; b < 172; b++)
			{	srand(cat[b]);
				
				if((cat[b] % 2) == 0)
				{	//Constructively fills hash[] LEFT to right based on cat[] seeds.
					for(int c = 0; c < 72; c++)
					{	hash[c] += (rand() % 95);
						hash[c] %= 95;
					}
				}
				else
				{	//Constructively fills hash[] RIGHT to left based on cat[] seeds.
					for(int c = 72; c >= 0; c--)
					{	hash[c] += (rand() % 95);
						hash[c] %= 95;
					}
				}
			}
			
			//Strengthening hash.
			unsigned char hash_copy[72];
			for(int b = 0; b < 72; b++) {hash_copy[b] = hash[b];}
			for(int b = 0; b < 72; b++)
			{	srand(hash_copy[b]);
				
				if((hash_copy[b] % 2) == 0)
				{	//Constructively fills hash[] LEFT to right based on hash_copy[] seeds.
					for(int c = 0; c < 72; c++)
					{	hash[c] += (rand() % 95);
						hash[c] %= 95;
					}
				}
				else
				{	//Constructively fills hash[] RIGHT to left based on hash_copy[] seeds.
					for(int c = 72; c >= 0; c--)
					{	hash[c] += (rand() % 95);
						hash[c] %= 95;
					}
				}
			}
			
			//Fixing hash[].
			for(int b = 0; b < 72; b++)
			{	if(hash[b] == 0) {hash[b] = 16;}
			}
			
			//Writing hash[] to previous slot in numbers[].
			for(int b = 0; b < 72; b++)
			{	numbers[numbers_write_bookmark] = hash[b];
				numbers_write_bookmark++;
			}
			
			numbers_write_bookmark -= 144;
		}
		
		
		
		
		
		//Writes numbers, functions, and keys to file "Representing" in folder "Hypership.private".
		mkdir("Hypership.private", 0777);
		out_stream.open("./Hypership.private/Representing");
		out_stream << "DO NOT PUBLISH! Hypership.private v1.0.0=\r\n\r\n"; //45-byte header must be. Use "\r\n" for all returns (for max compatibility.)
		for(int a = 72; a <   36360; a++) {out_stream.put(numbers  [a] + 32);} out_stream << "\r\n";
		for(int a =  0; a <   50400; a++) {out_stream.put(functions[a] + 32);} out_stream << "\r\n";
		for(int a =  0; a < 1008000; a++) {out_stream.put(keys     [a] + 32);} out_stream << "\r\n\r\n";
		
		out_stream << "Top   :   504 numbers   (   72 characters each.)\r\n"
		           << "Middle: 1,008 functions (   50 characters each.)\r\n"
		           << "Bottom: 1,008 keys      (1,000 characters each.)";
		out_stream.close();
		
		//Creates file Hypership.number.
		out_stream.open("Hypership.number");
		for(int a = 0; a < 72; a++) {out_stream.put(numbers[a] + 32);}
		out_stream << ":RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRMMMMMM"; //Fixed so that server storage reserves, not adjusts in panic.
		out_stream.close();
		
		//Creates file Number_backup in folder Hypership.private.
		out_stream.open("./Hypership.private/Number_backup");
		for(int a = 0; a < 72; a++) {out_stream.put(numbers[a] + 32);}
		out_stream << ":RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRMMMMMM";
		out_stream.close();
		
		//Number of possible 72-character Hypership numbers:
		// 94^72 (10^142) = 11619982103541360429570091169019894280819808066625711271662459939988115078448841979838719421596124781100212182033223601060008989038777976487936
		
		//Overwrites RAM of arrays: unsigned int user_seeds[50] and unsigned char actual_key[50].
		for(int a = 0; a < 50; a++)
		{	user_seeds[a] = 0; user_seeds[a] = 12345678; user_seeds[a] = 87654321; user_seeds[a] = 99999999;
			actual_key[a] = 0; actual_key[a] = 255;
		}
		
		//Overwrites RAM of array: unsigned char keys[1008000].
		for(int a = 0; a < 1008000; a++) {keys[a] = 0; keys[a] = 255;}
		
		cout << "\n\n\nPublish the contents of Hypership.number (150 characters.)\n"
		     << "Please include the Hypership version used, and your name or tag.\n"
		     << "(Not needed once published; verifying parties update it as you modify.)\n"
		     << "Guardedly cache Hypership.private. It contains dynamic one-time data.\n\n";
	}
	
	
	
	
	
	//_____________________________________________________________________________________________________________________
	//____________________________________________________MODIFY_NUMBER___________________________________________________/
	else if(user_option == 2)
	{	//Checks if files are missing.
		in_stream.open("./Hypership.private/Representing");  if(in_stream.fail() == true) {cout << "\nFiles missing.\n"; in_stream.close(); return 0;} in_stream.close();
		in_stream.open("./Hypership.private/Number_backup"); if(in_stream.fail() == true) {cout << "\nFiles missing.\n"; in_stream.close(); return 0;} in_stream.close();
		
		//Getting event cycle value from file Number_backup.
		int event_cycle; //0 to 504 (never reaches 504, resets to 0 in number files.)
		char number[150];
		in_stream.open("./Hypership.private/Number_backup");
		for(int a = 0; a < 150; a++) {in_stream.get(number[a]);}
		in_stream.close();
		
		int M_counter = 0;
		for(int a = 144; a < 150; a++)
		{	if(number[a] == 77) {M_counter++;}
		}
		M_counter = (6 - M_counter);
		
		int R_counter = 0;
		for(int a = 143; a > 72; a--)
		{	if(number[a] == 82) {R_counter++;}
			else {break;}
		}
		R_counter = (72 - R_counter);
		R_counter--;
		R_counter *= 7;
		
		event_cycle = (M_counter + R_counter);
		
		//This is separate from built-in verify.
		{	
			if(event_cycle == 0) //This is a block from option 1.
			{	
				/* Basic layout:
				1. Creates new number data (same as option 1) but holds it in RAM.
				2. Moves select items from file Representing to file Publishing to represent number in RAM.
				3. Overwrites file Representing with number data in RAM. */
				
				if(testing_mode == false) {cout << "\nRandomness entry is needed only once every 504 events.";}
				
				//Gets seeds for RNG.
				unsigned int user_seeds[50] = {0};
				if(testing_mode == false)
				{	//Gets 50 seeds from the user.
					cout << "\nEnter a random 8-digit integer, repeat 50 times.\n\n";
					for(int a = 0; a < 50; a++)
					{	if(a < 9) {cout << " " << (a + 1) << " of 50: ";} //Blank for aesthetics.
						else      {cout <<        (a + 1) << " of 50: ";}
						
						//Gets and checks input.
						cin >> user_seeds[a];
						if((user_seeds[a] > 99999999) || (user_seeds[a] < 10000000)) {cout << "\nOut of bounds, try again.\n"; return 0;}
					}
				}
				else
				{	//Fills seeds automatically (not secure, please turn off testing_mode.)
					srand(time(0));
					for(int a = 0; a < 50; a++) {user_seeds[a] = (rand() % 100000000);}
				}
				
				cout << "\nWait 5 seconds...\n";
				
				/*Generates random numbers in arrays functions[] and keys[]. (Constructively applies randomness based on 50 user seeds.)
				Number of possible keys per key: (95^1,000 or 10^1977) ~= 529182274774504763830539013129828002031774783533315989172550112454325120067086
				5320146452373594718852917306195312985394577376458207810856924643582943374082422747388708888747644424641359666528756626103165740624350564
				7458352903136303750933244235717370788699695208239031166611256027967040028838334795356155711479538914638596550775005291039392481521230142
				4866763813372856977497426768548229883133952014400000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
				000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000  */
				unsigned char functions[50400] = {0}; //Eventually  becomes 1,008 contiguous    50-character functions (encrypted.)
				unsigned char keys   [1008000] = {0}; //Immediately becomes 1,008 contiguous 1,000-character keys (used as seeds.)
				for(int a = 0; a < 50; a++)
				{	srand(user_seeds[a]);
					
					if((user_seeds[a] % 2) == 0)
					{	//Constructively fills functions[] and keys[] LEFT to right based on seeds.
						for(int b = 0; b < 50400; b++)
						{	functions[b] += (rand() % 10);
							functions[b] %= 10;
						}
						
						for(int b = 0; b < 1008000; b++)
						{	keys[b] += (rand() % 95);
							keys[b] %= 95;
						}
					}
					else
					{	//Constructively fills functions[] and keys[] RIGHT to left based on seeds.
						for(int b = 50399; b >= 0; b--)
						{	functions[b] += (rand() % 10);
							functions[b] %= 10;
						}
						
						for(int b = 1007999; b >= 0; b--)
						{	keys[b] += (rand() % 95);
							keys[b] %= 95;
						}
					}
				}
				
				//Generates additional seeds from keys[] for additional transformation of actual_key[] before encryption.
				long long secondary_seeds[100800] = {0}; //Assembles 100 (mostly 11-digit) seeds per key, from each of the 1,008 1,000-character keys.
				int keys_read_bookmark = 0;
				int secondary_seeds_write_bookmark = 0;
				for(int a = 0; a < 100800; a++) //100,800 comes from 10 contiguous key characters being scraped at once, 100,800 times. Recall that keys[] is 10x bigger.
				{	for(int b = 0; b < 10; b++)
					{	secondary_seeds[secondary_seeds_write_bookmark] *= 10;
						secondary_seeds[secondary_seeds_write_bookmark] += keys[keys_read_bookmark + b];
					}
					
					keys_read_bookmark += 10;
					secondary_seeds_write_bookmark++;
				}
				
				//Generates 1,008 contiguous 50-digit plaintext (each composed of 10 contiguous 5-digit primes.)
				//Randomness in functions[] is used to create this plaintext then functions[] is overwritten with it.
				bool sieve[100000] = {1, 1}; //Boolean sieve of Eratosthenes. Zeros are mapped to prime elements.
				for(int prime = 2; prime < 317; prime++) //317 is sqrt(100,000)
				{	for(int a = prime + prime; a < 100000; a += prime) {sieve[a] = 1;}
				}
				
				int functions_read_bookmark  = 0;
				int functions_write_bookmark = 0;
				for(int a = 0; a < 10080; a++) //50,400/5 = 10,080 total 5-digit primes.
				{	//Unloads 5 array elements to make one integer.
					int temp_5_digit_prime;
					temp_5_digit_prime  = functions[functions_read_bookmark    ]; if(temp_5_digit_prime == 0) {temp_5_digit_prime++;} temp_5_digit_prime *= 10;
					temp_5_digit_prime += functions[functions_read_bookmark + 1]; temp_5_digit_prime *= 10;
					temp_5_digit_prime += functions[functions_read_bookmark + 2]; temp_5_digit_prime *= 10;
					temp_5_digit_prime += functions[functions_read_bookmark + 3]; temp_5_digit_prime *= 10;
					temp_5_digit_prime += functions[functions_read_bookmark + 4];
					
					//Adjusts temp_5_digit_prime for primality (tests & searches in pos dir.) If length > 5, sets to largest 5-digit prime.
					while(sieve[temp_5_digit_prime] == 1)
					{	if(temp_5_digit_prime > 99991) {temp_5_digit_prime = 99991; break;}
						temp_5_digit_prime++;
					}
					
					//Writes the prime to functions[].
					functions[functions_write_bookmark + 4] = (temp_5_digit_prime % 10); temp_5_digit_prime /= 10;
					functions[functions_write_bookmark + 3] = (temp_5_digit_prime % 10); temp_5_digit_prime /= 10;
					functions[functions_write_bookmark + 2] = (temp_5_digit_prime % 10); temp_5_digit_prime /= 10;
					functions[functions_write_bookmark + 1] = (temp_5_digit_prime % 10); temp_5_digit_prime /= 10;
					functions[functions_write_bookmark    ] =  temp_5_digit_prime;
					
					functions_read_bookmark  += 5;
					functions_write_bookmark += 5;
				}
				
				//Encrypts 1,008 plaintext to make the functions.
				functions_write_bookmark = 0;
				keys_read_bookmark = 0;
				unsigned char actual_key[50] = {0};
				int secondary_seeds_read_bookmark = 0;
				for(int a = 0; a < 1008; a++) //Generates random numbers in array actual_key[].
				{	for(int b = 0; b < 1000; b++) //Constructively applies randomness based on keys[] (used as seeds, 1,000 items per actual_key[].)
					{	srand(keys[keys_read_bookmark]);
						
						if((keys[keys_read_bookmark] % 2) == 0)
						{	for(int c = 0; c < 50; c++) //Fills left to right based on seeds.
							{	actual_key[c] += (rand() % 95);
								actual_key[c] %= 95;
							}
						}
						else
						{	for(int c = 49; c >= 0; c--) //Fills right to left based on seeds.
							{	actual_key[c] += (rand() % 95);
								actual_key[c] %= 95;
							}
						}
						
						keys_read_bookmark++;
					}
					
					//Further transforms actual_key[] based on secondary_seeds[].
					for(int b = 0; b < 100; b++) //Constructively applies randomness based on secondary_seeds[] (used as seeds, 100 11-digit integer per actual_key[].)
					{	srand(secondary_seeds[secondary_seeds_read_bookmark]);
						
						if((secondary_seeds[secondary_seeds_read_bookmark] % 2) == 0)
						{	for(int c = 0; c < 50; c++) //Fills left to right based on SECONDARY seeds.
							{	actual_key[c] += (rand() % 95);
								actual_key[c] %= 95;
							}
						}
						else
						{	for(int c = 49; c >= 0; c--) //Fills right to left based on SECONDARY seeds.
							{	actual_key[c] += (rand() % 95);
								actual_key[c] %= 95;
							}
						}
						
						secondary_seeds_read_bookmark++;
					}
					
					///Encrypts functions[] using actual_key[].
					for(int b = 0; b < 50; b++)
					{	functions[functions_write_bookmark] += actual_key[b];
						functions[functions_write_bookmark] %= 95;
						
						functions_write_bookmark++;
					}
					
					//Resetting actual key. If not reset (in option 3) then string depends on keys not present.
					for(int a = 0; a < 50; a++) {actual_key[a] = 0;}
				}
				
				///Generating 505 numbers (documentation: step 3 in Create.) The following long for() is the main Hypership addition.
				unsigned char numbers[36360]; for(int a = 36288; a < 36360; a++) {numbers[a] = 16;} //Makes last 72 elements 0 when written to file.
				unsigned char       cat[172];       //You may fill those last 72 elements with data HERE AND NOW ONLY! (see documentation for #505.)
				int numbers_read_bookmark  = 36288; //First element of #505.
				int numbers_write_bookmark = 36216; //First element of #504.
				functions_read_bookmark    = 50300; //First element of function pair 504.
				
				for(int a = 0; a < 504; a++)
				{	//Loading cat[172]
					int cat_write_bookmark = 0;
					
					for(int b = 0; b < 72; b++)
					{	cat[cat_write_bookmark] = numbers[numbers_read_bookmark];
						cat_write_bookmark++;
						numbers_read_bookmark++;
					}
					
					numbers_read_bookmark -= 144;
					
					for(int b = 0; b < 100; b++)
					{	cat[cat_write_bookmark] = functions[functions_read_bookmark];
						cat_write_bookmark++;
						functions_read_bookmark++;
					}
					
					functions_read_bookmark -= 200;
					
					//Creating a 72-char hash of cat[].
					unsigned char hash[72] = {0};
					for(int b = 0; b < 172; b++)
					{	srand(cat[b]);
						
						if((cat[b] % 2) == 0)
						{	//Constructively fills hash[] LEFT to right based on cat[] seeds.
							for(int c = 0; c < 72; c++)
							{	hash[c] += (rand() % 95);
								hash[c] %= 95;
							}
						}
						else
						{	//Constructively fills hash[] RIGHT to left based on cat[] seeds.
							for(int c = 72; c >= 0; c--)
							{	hash[c] += (rand() % 95);
								hash[c] %= 95;
							}
						}
					}
					
					//Strengthening hash.
					unsigned char hash_copy[72];
					for(int b = 0; b < 72; b++) {hash_copy[b] = hash[b];}
					for(int b = 0; b < 72; b++)
					{	srand(hash_copy[b]);
						
						if((hash_copy[b] % 2) == 0)
						{	//Constructively fills hash[] LEFT to right based on hash_copy[] seeds.
							for(int c = 0; c < 72; c++)
							{	hash[c] += (rand() % 95);
								hash[c] %= 95;
							}
						}
						else
						{	//Constructively fills hash[] RIGHT to left based on hash_copy[] seeds.
							for(int c = 72; c >= 0; c--)
							{	hash[c] += (rand() % 95);
								hash[c] %= 95;
							}
						}
					}
					
					//Fixing hash[].
					for(int b = 0; b < 72; b++)
					{	if(hash[b] == 0) {hash[b] = 16;}
					}
					
					//Writing hash[] to previous slot in numbers[].
					for(int b = 0; b < 72; b++)
					{	numbers[numbers_write_bookmark] = hash[b];
						numbers_write_bookmark++;
					}
					
					numbers_write_bookmark -= 144;
				}
				
				
				
				
				
				//Converts the last-generated number to a 504-bit string (72 7-Byte items.)
				char number_1_copy[72];
				for(int a = 0; a < 72; a++) {number_1_copy[a] = numbers[a];}//Creates copy for writing it to file Publishing (unnecessary but good to have.)
				
				bool binary[504] = {0};
				int binary_write_bookmark = 0;
				for(int a = 0; a < 72; a++)
				{	numbers[a] += 32;
					
					int place_value = 64;
					for(int b = 0; b < 7; b++)
					{	if(numbers[a] >= place_value)
						{	binary[binary_write_bookmark] = 1;
							numbers[a] -= place_value;
						}
						
						place_value /= 2;
						binary_write_bookmark++;
					}
				}
				
				//Creates file Publishing (selectively writes items from EXISTING file Representing so as to represent the new number.)
				char numbers_temp  [36288];
				char functions_temp[50400];
				char keys_temp   [1008000];
				in_stream.open("./Hypership.private/Representing"); //Loads EXISTING file Representing.
				for(int a = 0; a <      45; a++) {in_stream.get(numbers_temp  [0]);} //Skips header.
				for(int a = 0; a <   36288; a++) {in_stream.get(numbers_temp  [a]);} //Loads numbers.
				in_stream.get(keys_temp[0]); //Skips \r
				in_stream.get(keys_temp[0]); //Skips \r
				for(int a = 0; a <   50400; a++) {in_stream.get(functions_temp[a]);} //Loads functions.
				in_stream.get(keys_temp[0]); //Skips \n
				in_stream.get(keys_temp[0]); //Skips \n
				for(int a = 0; a < 1008000; a++) {in_stream.get(keys_temp     [a]);} //Loads keys.
				in_stream.close();
				
				numbers_read_bookmark   = 0;
				functions_read_bookmark = 0;
				keys_read_bookmark      = 0;
				out_stream.open("./Hypership.private/Publishing"); //Writes
				out_stream << "DO NOT PUBLISH! Hypership creates public files using 1 line per event (504 lines here.)\r\n"; //216-Byte header (total.)
				out_stream << "Binary on the right end represents the new number: ";
				for(int a = 0; a < 72; a++) {out_stream.put(number_1_copy[a] + 32);}
				out_stream << "\r\n\r\n";
				
				for(int a = 0; a < 504; a++)
				{	for(int b = 0; b <  72; b++) {out_stream.put(    numbers_temp[numbers_read_bookmark]);   numbers_read_bookmark++;} //Writes 1 number.
					for(int b = 0; b < 100; b++) {out_stream.put(functions_temp[functions_read_bookmark]); functions_read_bookmark++;} //Writes 2 functions (pair.)
					
					if(binary[a] == 0) //Writes first key, skips second.
					{	for(int b = 0; b < 1000; b++) {out_stream.put(keys_temp[keys_read_bookmark]); keys_read_bookmark++;} //Writes 1 key.
						keys_read_bookmark += 1000;
						out_stream << "0";
					}
					else //Skips first key, writes second.
					{	keys_read_bookmark += 1000;
						for(int b = 0; b < 1000; b++) {out_stream.put(keys_temp[keys_read_bookmark]); keys_read_bookmark++;} //Writes 1 key.
						out_stream << "1";
					}
					
					out_stream << "\r\n";
				}
				out_stream << "\r\nThe zeros are space for authenticating 72 characters. Overwrite them in the C++ file ONLY! (Utilized whole once every 504 events.)\r\n";
				out_stream.close();
				
				//Overwrites EXISTING file Representing with numbers, functions, and keys.
				mkdir("Hypership.private", 0777);
				out_stream.open("./Hypership.private/Representing");
				out_stream << "DO NOT PUBLISH! Hypership.private v1.0.0=\r\n\r\n"; //45-byte header must be. Use "\r\n" for all returns (for max compatibility.)
				for(int a = 72; a <   36360; a++) {out_stream.put(numbers  [a] + 32);} out_stream << "\r\n";
				for(int a =  0; a <   50400; a++) {out_stream.put(functions[a] + 32);} out_stream << "\r\n";
				for(int a =  0; a < 1008000; a++) {out_stream.put(keys     [a] + 32);} out_stream << "\r\n\r\n";
				
				out_stream << "Top   :   504 numbers   (   72 characters each.)\r\n"
				           << "Middle: 1,008 functions (   50 characters each.)\r\n"
				           << "Bottom: 1,008 keys      (1,000 characters each.)";
				out_stream.close();
				
				//Overwrites RAM of arrays: unsigned int user_seeds[50] and unsigned char actual_key[50].
				for(int a = 0; a < 50; a++)
				{	user_seeds[a] = 0; user_seeds[a] = 12345678; user_seeds[a] = 87654321; user_seeds[a] = 99999999;
					actual_key[a] = 0; actual_key[a] = 255;
				}
				
				//Overwrites RAM of arrays: unsigned char keys[1008000] and char keys_temp[1008000].
				for(int a = 0; a < 1008000; a++)
				{	keys[a] = 0;
					keys_temp[a] = '\0';
					keys[a] = 255;
					keys_temp[a] = -1;
				}
			}
			
			//Grabs 1 line from file Publishing (based on event_cycle.) After the if()  above is evaluated, Hypership.public is created anyway.
			char Publishing_line[1173];
			char file_byte_absorber;
			in_stream.open("./Hypership.private/Publishing"); //Grabs line.
			for(int a = 0; a < 216; a++) {in_stream.get(Publishing_line[0]);} //Skips 216-Byte header.
			
			for(int a = 0; a < 504; a++)
			{	for(int b = 0; b < 1173; b++) {in_stream.get(Publishing_line[b]);}
				in_stream.get(file_byte_absorber); //Skips \r
				in_stream.get(file_byte_absorber); //Skips \n
				
				if(event_cycle == a) {break;}
			}
			in_stream.close();
			
			//Creates file Hypership.public.
			out_stream.open("Hypership.public");
			out_stream << "Hypership.public v1.0.0= "; //25-Byte header, (1,198-yte file.)
			for(int a = 0; a < 1173; a++) {out_stream.put(Publishing_line[a]);}
			out_stream.close();
		}
		
		
		
		
		
		//Verifies automatically and redundantly (option 3 built-in. Uses and modifies file Number_backup, file Hypership.number is left for option 3.)
		char Publishing_line[1173];
		char file_byte_absorber;
		in_stream.open("Hypership.public");
		for(int a = 0; a < 25; a++)   {in_stream.get(file_byte_absorber);} //Skips 25-Byte header.
		for(int a = 0; a < 1173; a++) {in_stream.get(Publishing_line[a]); Publishing_line[a] -= 32;} //Loads Publishing_line.
		in_stream.close();
		
		unsigned char hash[72] = {0}; //Creating a 72-char hash of cat[].
		for(int a = 0; a < 172; a++)
		{	srand(Publishing_line[a]);
			
			if((Publishing_line[a] % 2) == 0)
			{	//Constructively fills hash[] LEFT to right based on cat[] seeds.
				for(int b = 0; b < 72; b++)
				{	hash[b] += (rand() % 95);
					hash[b] %= 95;
				}
			}
			else
			{	//Constructively fills hash[] RIGHT to left based on cat[] seeds.
				for(int b = 72; b >= 0; b--)
				{	hash[b] += (rand() % 95);
					hash[b] %= 95;
				}
			}
		}
		
		//..........Strengthening hash.
		unsigned char hash_copy[72];
		for(int a = 0; a < 72; a++) {hash_copy[a] = hash[a];}
		for(int a = 0; a < 72; a++)
		{	srand(hash_copy[a]);
			
			if((hash_copy[a] % 2) == 0)
			{	//Constructively fills hash[] LEFT to right based on hash_copy[] seeds.
				for(int b = 0; b < 72; b++)
				{	hash[b] += (rand() % 95);
					hash[b] %= 95;
				}
			}
			else
			{	//Constructively fills hash[] RIGHT to left based on hash_copy[] seeds.
				for(int b = 72; b >= 0; b--)
				{	hash[b] += (rand() % 95);
					hash[b] %= 95;
				}
			}
		}
		
		//..........Fixing hash.
		for(int a = 0; a < 72; a++)
		{	if(hash[a] == 0) {hash[a] = 16;}
		}
		
		//..........Compares hash to Number_backup's first 72 char (Number_backup was loaded at the beginning to get event_cycle.)
		for(int a = 0; a < 72; a++)
		{	if(hash[a] != (number[a] - 32)) {cout << "\n\n\nFailed! (Hypership double-checks if each event will be verifiable by others. (1)\n"; return 0;}
		}
		
		/// This is a modified block from Authorship.cpp option 3 (verify.)
		char functions[50];
		char keys   [1000];
		
		//Loads 1 function.
		if(Publishing_line[1172] == 16)
		{	for(int a = 0; a < 50; a++) {functions[a] = Publishing_line[a + 72];}
		}
		else
		{	for(int a = 0; a < 50; a++) {functions[a] = Publishing_line[a + 122];}
		}
		
		//Loads 1 key.
		for(int a = 0; a < 1000; a++) {keys[a] = Publishing_line[a + 172];}
		
		//Generates additional seeds from keys[] for additional transformation of actual_key[] before decryption.
		long long secondary_seeds[100] = {0}; //Assembles 100 (mostly 11-digit) seeds from the key.
		int keys_read_bookmark = 0;
		for(int a = 0; a < 100; a++)
		{	for(int b = 0; b < 10; b++)
			{	secondary_seeds[a] *= 10;
				secondary_seeds[a] += keys[keys_read_bookmark + b];
			}
			
			keys_read_bookmark += 10;
		}
		
		//Turns key into actual key.
		unsigned char actual_key[50] = {0};
		for(int a = 0; a < 1000; a++) //Constructively applies randomness based on keys[].
		{	srand(keys[a]);
			
			if((keys[a] % 2) == 0)
			{	for(int b = 0; b < 50; b++) //Fills left to right based on seeds.
				{	actual_key[b] += (rand() % 95);
					actual_key[b] %= 95;
				}
			}
			else
			{	for(int b = 49; b >= 0; b--) //Fills right to left based on seeds.
				{	actual_key[b] += (rand() % 95);
					actual_key[b] %= 95;
				}
			}
		}
		
		//Further transforms actual_key[] based on secondary_seeds[].
		for(int a = 0; a < 100; a++) //Constructively applies randomness based on secondary_seeds[].
		{	srand(secondary_seeds[a]);
			
			if((secondary_seeds[a] % 2) == 0)
			{	for(int b = 0; b < 50; b++) //Fills left to right based on SECONDARY seeds.
				{	actual_key[b] += (rand() % 95);
					actual_key[b] %= 95;
				}
			}
			else
			{	for(int b = 49; b >= 0; b--) //Fills right to left based on SECONDARY seeds.
				{	actual_key[b] += (rand() % 95);
					actual_key[b] %= 95;
				}
			}
		}
		
		//Decrypts 1 function.
		/*   ______________________________________________ ________________________________________________
		    |                                              |                                                |
		    |              if key <= ciphertext            |                     else                       |
		    |      then plaintext = (ciphertext - key)     |      plaintext = ((95 - key) + ciphertext)     |
		    |______________________________________________|________________________________________________|
		*/
		for(int a = 0; a < 50; a++)
		{	if(actual_key[a] <= functions[a])
			{	functions[a] = (functions[a] - actual_key[a]);
				
				//Checks if extracted plaintext is one digit. Never exceeds 99,999 upon later reconstruction from 5 elements.
				if(functions[a] > 9)
				{	cout << "\n\n\nFailed! (Hypership double-checks if each event will be verifiable by others. (2)\n";
					return 0;
				}
			}
			else
			{	functions[a] = ((95 - actual_key[a]) + functions[a]);
				
				//Checks if extracted plaintext is one digit. Never exceeds 99,999 upon later reconstruction from 5 elements.
				if(functions[a] > 9)
				{	cout << "\n\n\nFailed! (Hypership double-checks if each event will be verifiable by others. (3)\n";
					return 0;
				}
			}
		}
		
		
		//Checks if solved function contains 10 unspecified 5-digit contiguous primes.
		//This means solutions are not mathematically inherent to a function hence no reversal shortcuts.
		bool sieve[100000] = {1, 1}; //Boolean sieve of Eratosthenes. Zeros are mapped to prime elements.
		for(int prime = 2; prime < 317; prime++) //317 is sqrt(100,000)
		{	for(int a = prime + prime; a < 100000; a += prime) {sieve[a] = 1;}
		}
		
		int functions_read_bookmark = 0;
		for(int b = 0; b < 10; b++)
		{	//Unloads 5 array elements to make one integer.
			int five_digit_prime;
			five_digit_prime  = functions[functions_read_bookmark    ]; five_digit_prime *= 10;
			five_digit_prime += functions[functions_read_bookmark + 1]; five_digit_prime *= 10;
			five_digit_prime += functions[functions_read_bookmark + 2]; five_digit_prime *= 10;
			five_digit_prime += functions[functions_read_bookmark + 3]; five_digit_prime *= 10;
			five_digit_prime += functions[functions_read_bookmark + 4];
			
			//Tests for primality.
			if((five_digit_prime < 10007)
			|| (sieve[five_digit_prime] != 0))
			{	cout << "\n\n\nFailed! (Hypership double-checks if each event will be verifiable by others. (4)\n";
				return 0;
			}
			
			functions_read_bookmark  += 5;
		}
		
		
		
		
		
		//Updates file Number_backup.
		//Attempts to create 7-bit character based on ending 6 MMMMMM + end-message-bit of Publishing_line[].
		if(M_counter < 6) //Actually: if not full of message data. Appends bit to MMMMMM slot.
		{	number[144 + M_counter] = char(Publishing_line[1172] + 32);
			
			out_stream.open("./Hypership.private/Number_backup");
			for(int a =  0; a <  72; a++) {out_stream.put(Publishing_line[a] + 32);}
			for(int a = 72; a < 150; a++) {out_stream.put(    char(number[a]));}
			out_stream.close();
		}
		else //Creates 7-bit character from MMMMMM + msg (converts from 7 binary to a 7-bit character.)
		{	int byte = 0;
			if(number[144] == 49) {byte += 64;}
			if(number[145] == 49) {byte += 32;}
			if(number[146] == 49) {byte += 16;}
			if(number[147] == 49) {byte +=  8;}
			if(number[148] == 49) {byte +=  4;}
			if(number[149] == 49) {byte +=  2;}
			if(int(Publishing_line[1172] + 32) == 49) {byte++;}
			
			//Writes 7-bit character to ...RRRR...
			if(event_cycle < 503) //Appends 7-bit character to items consuming ...RRRR...
			{	int colon_location = (event_cycle + 1);
				colon_location /=  7;
				colon_location += 71;
				number[colon_location + 1] = 58;
				number[colon_location] = char(byte);
				
				out_stream.open("./Hypership.private/Number_backup");
				for(int a =  0; a <  72; a++) {out_stream.put(Publishing_line[a] + 32);}
				for(int a = 72; a < 144; a++) {out_stream.put(    char(number[a]));}
				out_stream << "MMMMMM";
				out_stream.close();
			}
			else //Overwrites 1st 72 of number file with message and resets message.
			{	number[143] = char(byte);
				out_stream.open("./Hypership.private/Number_backup");
				for(int a =  72; a < 144; a++) {out_stream.put(char(number[a]));}
				out_stream << ":RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRMMMMMM";
				out_stream.close();
			}
		}
		
		if(event_cycle == 0) {cout << "\n\nHypership.private has been completely overwritten--once every 504 events.\n";}
		else                 {cout << "\n\n\nOnly Number_backup has been overwritten.\n";}
		cout << "(VITAL DATA! MAKE SURE IT GETS TO WHERE YOU HIDE IT ENCRYPTED, EVERY TIME!)\n\n";
		
		cout << "Publish Hypership.public, it modifies your number on their end.\n"
		     << "(Once they verify this 1.2kB file, it needs not exist anywhere.\n"
		     << "The Number_backup file contains your updated number; you may if\n"
		     << "requested share it with those only now beginning verification.)";
	}
	
	
	
	
	
	//_____________________________________________________________________________________________________________________
	//_____________________________________________VERIFY_NUMBER_MODIFICATION_____________________________________________/
	else if(user_option == 3)
	{	/* Basic layout:  (verify copied from option 2--auto verify.)
		1. Grabs number & 2 functions from public file and takes their hash (they are contiguous.)
		2. Compares that hash to the first 72 Bytes in the number file.
		3. Grabs the key and decrypts one of those functions, which one indicates 1 bit (automatic message.)
		4. Updates number file whose number (1st 72 char) is now the number from the public file, while the message
		   bit is applied in slowly constructing the new number automatically-planned 504 events ahead of time. */
		
		//Checks if files are missing.
		in_stream.open("Hypership.public"); if(in_stream.fail() == true) {cout << "\nFiles missing.\n"; in_stream.close(); return 0;} in_stream.close();
		in_stream.open("Hypership.number"); if(in_stream.fail() == true) {cout << "\nFiles missing.\n"; in_stream.close(); return 0;} in_stream.close();
		
		//Gets event cycle value from file Hypership.number.
		int event_cycle; //0 to 504 (never reaches 504, resets to 0 in number files.)
		char number[150];
		in_stream.open("Hypership.number");
		for(int a = 0; a < 150; a++) {in_stream.get(number[a]);}
		in_stream.close();
		
		int M_counter = 0;
		for(int a = 144; a < 150; a++)
		{	if(number[a] == 77) {M_counter++;}
		}
		M_counter = (6 - M_counter);
		
		int R_counter = 0;
		for(int a = 143; a > 72; a--)
		{	if(number[a] == 82) {R_counter++;}
			else {break;}
		}
		R_counter = (72 - R_counter);
		R_counter--;
		R_counter *= 7;
		
		event_cycle = (M_counter + R_counter);
		
		//Verifies.
		char Publishing_line[1173];
		char file_byte_absorber;
		in_stream.open("Hypership.public");
		for(int a = 0; a < 25; a++)   {in_stream.get(file_byte_absorber);} //Skips 25-Byte header.
		for(int a = 0; a < 1173; a++) {in_stream.get(Publishing_line[a]); Publishing_line[a] -= 32;} //Loads Publishing_line.
		in_stream.close();
		
		unsigned char hash[72] = {0}; //Creating a 72-char hash of cat[].
		for(int a = 0; a < 172; a++)
		{	srand(Publishing_line[a]);
			
			if((Publishing_line[a] % 2) == 0)
			{	//Constructively fills hash[] LEFT to right based on cat[] seeds.
				for(int b = 0; b < 72; b++)
				{	hash[b] += (rand() % 95);
					hash[b] %= 95;
				}
			}
			else
			{	//Constructively fills hash[] RIGHT to left based on cat[] seeds.
				for(int b = 72; b >= 0; b--)
				{	hash[b] += (rand() % 95);
					hash[b] %= 95;
				}
			}
		}
		
		//..........Strengthening hash.
		unsigned char hash_copy[72];
		for(int a = 0; a < 72; a++) {hash_copy[a] = hash[a];}
		for(int a = 0; a < 72; a++)
		{	srand(hash_copy[a]);
			
			if((hash_copy[a] % 2) == 0)
			{	//Constructively fills hash[] LEFT to right based on hash_copy[] seeds.
				for(int b = 0; b < 72; b++)
				{	hash[b] += (rand() % 95);
					hash[b] %= 95;
				}
			}
			else
			{	//Constructively fills hash[] RIGHT to left based on hash_copy[] seeds.
				for(int b = 72; b >= 0; b--)
				{	hash[b] += (rand() % 95);
					hash[b] %= 95;
				}
			}
		}
		
		//..........Fixing hash.
		for(int a = 0; a < 72; a++)
		{	if(hash[a] == 0) {hash[a] = 16;}
		}
		
		//..........Compares hash to file Hypership.number's first 72 char.
		for(int a = 0; a < 72; a++)
		{	if(hash[a] != (number[a] - 32)) {cout << "\n\n\nFailed! (1)\n"; return 0;}
		}
		
		/// This is a modified block from Authorship.cpp option 3 (verify.)
		char functions[50];
		char keys   [1000];
		
		//Loads 1 function.
		if(Publishing_line[1172] == 16)
		{	for(int a = 0; a < 50; a++) {functions[a] = Publishing_line[a + 72];}
		}
		else
		{	for(int a = 0; a < 50; a++) {functions[a] = Publishing_line[a + 122];}
		}
		
		//Loads 1 key.
		for(int a = 0; a < 1000; a++) {keys[a] = Publishing_line[a + 172];}
		
		//Generates additional seeds from keys[] for additional transformation of actual_key[] before decryption.
		long long secondary_seeds[100] = {0}; //Assembles 100 (mostly 11-digit) seeds from the key.
		int keys_read_bookmark = 0;
		for(int a = 0; a < 100; a++)
		{	for(int b = 0; b < 10; b++)
			{	secondary_seeds[a] *= 10;
				secondary_seeds[a] += keys[keys_read_bookmark + b];
			}
			
			keys_read_bookmark += 10;
		}
		
		//Turns key into actual key.
		unsigned char actual_key[50] = {0};
		for(int a = 0; a < 1000; a++) //Constructively applies randomness based on keys[].
		{	srand(keys[a]);
			
			if((keys[a] % 2) == 0)
			{	for(int b = 0; b < 50; b++) //Fills left to right based on seeds.
				{	actual_key[b] += (rand() % 95);
					actual_key[b] %= 95;
				}
			}
			else
			{	for(int b = 49; b >= 0; b--) //Fills right to left based on seeds.
				{	actual_key[b] += (rand() % 95);
					actual_key[b] %= 95;
				}
			}
		}
		
		//Further transforms actual_key[] based on secondary_seeds[].
		for(int a = 0; a < 100; a++) //Constructively applies randomness based on secondary_seeds[].
		{	srand(secondary_seeds[a]);
			
			if((secondary_seeds[a] % 2) == 0)
			{	for(int b = 0; b < 50; b++) //Fills left to right based on SECONDARY seeds.
				{	actual_key[b] += (rand() % 95);
					actual_key[b] %= 95;
				}
			}
			else
			{	for(int b = 49; b >= 0; b--) //Fills right to left based on SECONDARY seeds.
				{	actual_key[b] += (rand() % 95);
					actual_key[b] %= 95;
				}
			}
		}
		
		//Decrypts 1 function.
		/*   ______________________________________________ ________________________________________________
		    |                                              |                                                |
		    |              if key <= ciphertext            |                     else                       |
		    |      then plaintext = (ciphertext - key)     |      plaintext = ((95 - key) + ciphertext)     |
		    |______________________________________________|________________________________________________|
		*/
		for(int a = 0; a < 50; a++)
		{	if(actual_key[a] <= functions[a])
			{	functions[a] = (functions[a] - actual_key[a]);
				
				//Checks if extracted plaintext is one digit. Never exceeds 99,999 upon later reconstruction from 5 elements.
				if(functions[a] > 9)
				{	cout << "\n\n\nFailed! (2)\n";
					return 0;
				}
			}
			else
			{	functions[a] = ((95 - actual_key[a]) + functions[a]);
				
				//Checks if extracted plaintext is one digit. Never exceeds 99,999 upon later reconstruction from 5 elements.
				if(functions[a] > 9)
				{	cout << "\n\n\nFailed! (3)\n";
					return 0;
				}
			}
		}
		
		
		//Checks if solved function contains 10 unspecified 5-digit contiguous primes.
		//This means solutions are not mathematically inherent to a function hence no reversal shortcuts.
		bool sieve[100000] = {1, 1}; //Boolean sieve of Eratosthenes. Zeros are mapped to prime elements.
		for(int prime = 2; prime < 317; prime++) //317 is sqrt(100,000)
		{	for(int a = prime + prime; a < 100000; a += prime) {sieve[a] = 1;}
		}
		
		int functions_read_bookmark = 0;
		for(int b = 0; b < 10; b++)
		{	//Unloads 5 array elements to make one integer.
			int five_digit_prime;
			five_digit_prime  = functions[functions_read_bookmark    ]; five_digit_prime *= 10;
			five_digit_prime += functions[functions_read_bookmark + 1]; five_digit_prime *= 10;
			five_digit_prime += functions[functions_read_bookmark + 2]; five_digit_prime *= 10;
			five_digit_prime += functions[functions_read_bookmark + 3]; five_digit_prime *= 10;
			five_digit_prime += functions[functions_read_bookmark + 4];
			
			//Tests for primality.
			if((five_digit_prime < 10007)
			|| (sieve[five_digit_prime] != 0))
			{	cout << "\n\n\nFailed! (4)\n";
				return 0;
			}
			
			functions_read_bookmark  += 5;
		}
		
		
		
		
		
		//Updates file Hypership.number.
		//Attempts to create 7-bit character based on ending 6 MMMMMM + end-message-bit of Publishing_line[].
		if(M_counter < 6) //Actually: if not full of message data. Appends bit to MMMMMM slot.
		{	number[144 + M_counter] = char(Publishing_line[1172] + 32);
			
			out_stream.open("Hypership.number");
			for(int a =  0; a <  72; a++) {out_stream.put(Publishing_line[a] + 32);}
			for(int a = 72; a < 150; a++) {out_stream.put(    char(number[a]));}
			out_stream.close();
		}
		else //Creates 7-bit character from MMMMMM + msg (converts from 7 binary to a 7-bit character.)
		{	int byte = 0;
			if(number[144] == 49) {byte += 64;}
			if(number[145] == 49) {byte += 32;}
			if(number[146] == 49) {byte += 16;}
			if(number[147] == 49) {byte +=  8;}
			if(number[148] == 49) {byte +=  4;}
			if(number[149] == 49) {byte +=  2;}
			if(int(Publishing_line[1172] + 32) == 49) {byte++;}
			
			//Writes 7-bit character to ...RRRR...
			if(event_cycle < 503) //Appends 7-bit character to items consuming ...RRRR...
			{	int colon_location = (event_cycle + 1);
				colon_location /=  7;
				colon_location += 71;
				number[colon_location + 1] = 58;
				number[colon_location] = char(byte);
				
				out_stream.open("Hypership.number");
				for(int a =  0; a <  72; a++) {out_stream.put(Publishing_line[a] + 32);}
				for(int a = 72; a < 144; a++) {out_stream.put(    char(number[a]));}
				out_stream << "MMMMMM";
				out_stream.close();
			}
			else //Overwrites 1st 72 of number file with message and resets message.
			{	number[143] = char(byte);
				out_stream.open("Hypership.number");
				for(int a =  72; a < 144; a++) {out_stream.put(char(number[a]));}
				out_stream << ":RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRMMMMMM";
				out_stream.close();
			}
		}
		
		cout << "\n\n\tVerification SUCCESSFUL!\n\n"
		
		     << "The number file has been overwritten with their new number.\n"
		     << "You can discard any and all old modification information.\n";
	}
	
	else {cout << "\nInvalid option, program ended.\n"; return 0;}
	
	/*  50-char multi-way functions, 1k-char keys. This is computational difficulty
	and super-flexibility  in  endless  cryptographic  evidence. (Publicly-verifiable
	authorized-only number modification.)  Always generate & publish extra numbers at
	once for backup.       Sample number:       */
	
	//    W6/afJF3pm|`|s&qXN6/kaR5.`jDM&XlOqKpVAxm[JH.N5dA+FWk}seL:2HQP}3_JI0PTd08:RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRMMMMMM
}
