#include <iostream> 
#include <fstream> // reading and writing files 
#include <string>

using namespace std;

bool isLoggedIn()
{
    string username, password;
    string un, pw; // comparison strings

    cout << "                                       Enter a username: ";
    cin >> username; 
    cout << "                                       Enter a password: ";
    cin >> password;

    ifstream read(username + ".txt"); // ifstream reads a file 
    getline(read, un); // reads the username 
    getline(read, pw); // reads the password

    if(un == username && pw == password) // if both un & username and pw & password are the same, true
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Barfi(){
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 8.1/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            Barfi forms a special bond with Jhilmil, a girl with autism.                                                          |"<<endl;
    cout<<"|            When Barfi's old flame walks back into his life, it causes                                                            |"<<endl;  
    cout<<"|            misunderstandings between Jhilmil and him.                                                                            |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Ranbir Kapoor- Barfi.                                                                                              |"<<endl;
    cout<<"|             2.Ileana D'Cruz- Shruti Ghosh                                                                                        |"<<endl;
    cout<<"|             3.Priyanka Chopra- Jhilmil Durjoy Chatterjee                                                                         |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}

void JabWeMet()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 7.9/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            Aditya, a heartbroken business tycoon, aimlessly boards a train to escape his depressing life.                        |"<<endl;
    cout<<"|            He meets Geet, a bubbly Punjabi girl, and gets pulled into her crazy life.                                            |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Shahid Kapoor- Aditya D. Kashyap.                                                                                  |"<<endl;
    cout<<"|             2.Kareena Kapoor- Geet Dhillon.                                                                                      |"<<endl;
    cout<<"|             3.Tarun Arora- Anshuman.                                                                                             |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void KalHoNaaHo()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 7.9/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            Naina, a girl living a dreary life, finds a new meaning to her life when she meets Aman.                              |"<<endl;
    cout<<"|            Even though she loves him, Aman claims to be a married man and convinces Rohit, her friend, to woo her..              |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Sharukh Khan- Amar Mathur.                                                                                         |"<<endl;
    cout<<"|             2.Saif Ali Khan- Rohit.                                                                                              |"<<endl;
    cout<<"|             3.Preeti Zinta- Naina Catherine.                                                                                     |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void KapoorSons()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 7.7/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            Brothers Arjun and Rahul return home to visit their ailing grandfather.                                               |"<<endl;
    cout<<"|            Amidst numerous ongoing family problems, emotions get intensified when a girl causes a rift between the two.          |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Fawad Khan- Rahul Kapoor                                                                                           |"<<endl;
    cout<<"|             2.Rishi Kapoor- Amarjeet Kapoor                                                                                      |"<<endl;
    cout<<"|             3.Sidharth Malhotra- Arjun kapoor                                                                                    |"<<endl;
    cout<<"|             4.Alia Bhatt- Tia Malik                                                                                              |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void YehJawaaniHaiDeewani()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 9/10                                                                                                               |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            Kabir and Naina meet during a trekking trip where she falls in love with him but refrains from expressing it.         |"<<endl;
    cout<<"|            They soon drift apart but end up meeting at a friend's wedding.                                                       |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Ranbir Kapoor- Kabir Thapar                                                                                        |"<<endl;
    cout<<"|             2.Deepika Padukone- Naina Talwar                                                                                     |"<<endl;
    cout<<"|             3.Aditya Roy Kapur- Avi                                                                                              |"<<endl;
    cout<<"|             4.Kalki Koechlin- Aditi                                                                                              |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void HeraPheri() 
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 8.1/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            Three unemployed men in dire need of money                                                                            |"<<endl;
    cout<<"|            become involved in a gangster's plot to kidnap a wealthy man's gradson                                                |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Akshay Kumar – Raju                                                                                                |"<<endl;
    cout<<"|             2.Sunil Shetty – Shyam                                                                                               |"<<endl;
    cout<<"|             3.Paresh Rawal – Baburao Ganapatrao Apte                                                                             |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Idiots()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 8.4/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            Two friends are searching for their long lost companion.                                                              |"<<endl;
    cout<<"|            They revisit their college days and recall the memories of their friend                                               |"<<endl;
    cout<<"|            who inspired them to think differently, even as the rest of the world called them 'idiots'.                           |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Amir Khan – Rancho                                                                                                 |"<<endl;
    cout<<"|             2.Madhavan – Farhan                                                                                                  |"<<endl;
    cout<<"|             3.Sharman Joshi – Hari                                                                                               |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void GaramMasala()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 6.7/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            A skirt-chasing photographer constructs an elaborate pretense to three-time three unsuspecting flight attendants.     |"<<endl;
    cout<<"|            However, when his kindred spirit tries to get in on it, everything becomes a mess.                                    |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Akshay Kumar – Mac                                                                                                 |"<<endl;
    cout<<"|             2.John Abraham – Sam                                                                                                 |"<<endl;
    cout<<"|             3. Daisy Bopanna- Deepti                                                                                             |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Dhamaal()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 7.4/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            Four slackers race to find a mobster's buried treasure while being pursued by a determined police inspector.          |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Aashish Chaudhary - Boman Contractor                                                                               |"<<endl;
    cout<<"|             2.Ritesh Deshmukh – Detective Roy                                                                                    |"<<endl;
    cout<<"|             3.Javed Jaffrey – Manav                                                                                              |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Golmaal()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 7.4/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            Four slackers race to find a mobster's buried treasure while being pursued by a determined police inspector.          |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Ajay Devgan - Gopal                                                                                                |"<<endl;
    cout<<"|             2.Arshad Warsi – Madhav                                                                                              |"<<endl;
    cout<<"|             3.Sharman Joshi- Laxman                                                                                              |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Freddy() 
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 8/10                                                                                                               |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|             The lines between love and obsession blur in this romantic thriller packed with unpredictable twists and sharp turns.|"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Kartik Aryan - Dr. Freddy Ginwala                                                                                  |"<<endl;
    cout<<"|             2.Alaya - Kainaaz Iran                                                                                               |"<<endl;
    cout<<"|             3.Sajjad Delafrooz - Rustom Irani                                                                                    |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Goodbye()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 7.3/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|             A heartwarming story of the Bhalla family that depicts their journey of grief                                        |"<<endl;
    cout<<"|             and self-discovery after they suffer the loss of their loved one.                                                    |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1. Amitabh Bachchan - Harish Bhalla                                                                                  |"<<endl;
    cout<<"|             2.Neena Gupta - Gayatri Harish Bhalla                                                                                |"<<endl;
    cout<<"|             3.Rashmika Mandanna -Tara Bhalla                                                                                     |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Drishyam()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS:  8.2/10                                                                                                            |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|              Desperate measures are taken by a man who tries to save his family from the dark side of the law,                   |"<<endl;
    cout<<"|              after they commit an unexpected crime.                                                                              |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Ajay Devgn: Vijay Salgaonkar                                                                                       |"<<endl;
    cout<<"|             2.Tabu: I.G. Meera Deshmukh                                                                                          |"<<endl;
    cout<<"|             3.Ishita Dutta: Anju Salgaonkar                                                                                      |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}

void VikramVedha()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS:7.1/10                                                                                                              |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            A tough police officer sets out to track down and kill an equally tough gangster.                                     |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Hrithik Roshan - Vedha                                                                                             |"<<endl;
    cout<<"|             2.Saif Ali Khan – Vikram                                                                                             |"<<endl;
    cout<<"|             3.Radhika Apte - Priya                                                                                               |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}

void Liger()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS:3/10                                                                                                                |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl;
    cout<<"|            A story about martial arts, dreams and star crossed lovers.                                                           |"<<endl;
    cout<<"|            Liger is an MMA fighter who trains hard and rises up the ranks with one goal in mind,                                 |"<<endl;
    cout<<"|            to fight like his idol, world renowned MMA fighter Mark Anderson and get noticed by him.                              |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Vijay Deverakonda- Sashwath 'Liger' Agarwal                                                                        |"<<endl;
    cout<<"|             2.Ananya Panday- Tanya                                                                                               |"<<endl;
    cout<<"|             3.Mike Tyson- Mark Anderson                                                                                          |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Bulbul() 
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS:5.1/10                                                                                                              |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl; 
    cout<<"|            A young mother waiting for her husband to be back for                                                                 |"<<endl;
    cout<<"|            years falls in love with a guy while she looks after her paralyzed father-in-law.                                     |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Swastima Khadka- Ranakala                                                                                          |"<<endl;
    cout<<"|             2.Mukunda Bhusal- Chopendra                                                                                          |"<<endl;
    cout<<"|             3.Laxmi Bardewa- Bhima                                                                                               |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Pari()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 6.6/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl; 
    cout<<"|            Arnab tries to help Ruksahana, who is found under mysterious circumstances in a house.                                |"<<endl;
    cout<<"|            He lets her stay at his home until he discovers something strange about her.                                          |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Anushka Sharma- Rukhsana                                                                                           |"<<endl;
    cout<<"|             2. Parambrata Chattopadhyay- Arnab                                                                                   |"<<endl;
    cout<<"|             3.Rajat Kapoor- Professor                                                                                            |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Bhoot()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 5.4/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl; 
    cout<<"|            A bereaved shipping officer investigates the mystery behind a ghost ship that washes ashore in Mumbai.                |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Vicky Kaushal-Prithvi Prakashan                                                                                    |"<<endl;
    cout<<"|             2.Ashutosh Rana- Professor Raghuveer Joshi                                                                           |"<<endl;
    cout<<"|             3.Meher Vij- Vandana                                                                                                 |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Stree()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS:7.5/10                                                                                                              |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl; 
    cout<<"|            In the small town of Chanderi, the menfolk live in fear of an evil spirit named 'Stree'                               |"<<endl;
    cout<<"|            who abducts men in the night. Based on the urban legend of 'Nale Ba' that went viral in Karnataka in the 1990s.       |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1. Rajkummar Rao- Vicky                                                                                              |"<<endl;
    cout<<"|             2.Aparshakti Khurana- Bittu                                                                                          |"<<endl;
    cout<<"|             3.Shraddha Kapoor-Unnamed Woman                                                                                      |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Tumbbad()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS:8.2/10                                                                                                              |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl; 
    cout<<"|             A mythological story about a goddess who created the entire universe.                                                |"<<endl;
    cout<<"|             The plot revolves around the consequences when humans build a temple for her first-born.                             |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1. Sohum Shah- Vinayak Rao                                                                                           |"<<endl;
    cout<<"|             2.Jyoti Malshe-Vinayak's Mother                                                                                      |"<<endl;
    cout<<"|             3.Anita Date-Kelkar-Vaidehi                                                                                          |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Talvar()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS:8.1/10                                                                                                              |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl; 
    cout<<"|        An experienced investigator confronts several conflicting theories about the perpetrators of a violent double homicide.   |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1. Irrfan Khan - Ashwin Kumar                                                                                        |"<<endl;
    cout<<"|             2.Konkona Sen Sharma - Nutan Tandon                                                                                  |"<<endl;
    cout<<"|             3.Neeraj Kabi -Ramesh Tandon                                                                                         |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Kahaani()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 8.1/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl; 
    cout<<"|        A pregnant woman's search for her missing husband takes her from London to Kolkata,                                       |"<<endl;
    cout<<"|        but everyone she questions denies having ever met him.                                                                    |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Vidya Balan- Vidya Venkatesan-Bagchi                                                                               |"<<endl;
    cout<<"|             2.Indraneil Sengupta - Arnab Bagchi, Milan Damji                                                                     |"<<endl;
    cout<<"|             3.Nawazuddin Siddiqui - Mr. Khan                                                                                     |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Baby()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 7.9/10                                                                                                             |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl; 
    cout<<"|       An elite team of the Indian intelligence system perpetually strives to detect and eliminate terrorists and their plots.    |"<<endl;
    cout<<"|       Officer Ajay leads a team to destroy one such potentially lethal operation.                                                |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Akshay kumar – Ajay                                                                                                |"<<endl;
    cout<<"|             2.Rana Daggupati – Jai                                                                                               |"<<endl;
    cout<<"|             3.Anupam Kher - Shuklagi                                                                                             |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Special26()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 8/10                                                                                                               |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl; 
    cout<<"|       A gang of con-men rob prominent rich businessmen and politicians by posing as C.B.I and income tax officers.               |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1.Akshay Kumar - Ajay                                                                                                |"<<endl;
    cout<<"|             2.Anupam Kher - Sharma Ji                                                                                            |"<<endl;
    cout<<"|             3.Jimmy Shergill - Ranveer Singh                                                                                     |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}
void Shanghai()
{
    cout<<" __________________________________________________________________________________________________________________________________"<<endl;
    cout<<"| ABOUT:                                                                                                                           |"<<endl;
    cout<<"|                                                                                                                                  |"<<endl;                  
    cout<<"|MOVIE RATINGS: 4.5 /10                                                                                                            |"<<endl;
    cout<<"|DESCRIPTION:                                                                                                                      |"<<endl; 
    cout<<"|            A drunk truck driver kills a prominent social activist on the eve of the opening of an international                  |"<<endl;
    cout<<"|            business park in an Indian city, and a group of disparate characters uncover government corruption.                   |"<<endl;                                                                                
    cout<<"|CAST MEMBERS:                                                                                                                     |"<<endl;
    cout<<"|             1. Emraan Hashmi – Jogi Parmar                                                                                       |"<<endl;
    cout<<"|             2.Kalki Koechlin – Shalini Sahay                                                                                     |"<<endl;
    cout<<"|             3.Abay Deol – T.A.Krishnan                                                                                           |"<<endl;
    cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;
}

// to check whether all sits are occupied or not
int allOccupied(char arr[9][21]){ 
	int count=0;
	for(int i=0;i<9;i++){
		for(int j=1;j<21;j++)
		if(arr[i][j]=='X')
			count++;
			
	}


	if(count==180)
		return 1;
	return 0;
}

//to display the sits
void display(char arr[9][21]){ 
	for(int i=0;i<9;i++){
		for(int j=0;j<21;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
cout<<"\n-------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"                      Your screen is here\n\n";
	return;
}

//take user data
string getData(){ 
	string p;
	cout<<"\nEnter valid seat no to check(like 1B) or N to end: ";
	cin>>p;
	return p;
}

//update sit status
void update(char arr[9][21],int row,int col){ 
	cout<<"\nCongrats, your seat is valid. Reserved for you\n";
	cout<<"\nUpdated seat status..........\n";
	arr[row][col]='X';
}

//checking whether user request for 
//his sit no can be processed or not
int check(char arr[9][21],string s){ 
//if user input is not in the range 1A to 7D
if(s[0]> '9' || s[0]< '1' || s[1]>'T' || s[1]<'A'){ 
cout<<"\nInvalid seat no\n"; //invalid sit no
return 0;
}

int row=-1,col=-1;
//find the row no of the user sit
for(int i=0;i<9;i++){
if(arr[i][0]==s[0])
row=i;
}
 //find the column no of user sit
for(int j=0;j<21;j++){
if(arr[row][j]==s[1])
col=j;
}

//check whether sit is already occupied or not.
if(col==-1){
cout<<"\nSeat is already occupied\n";
return 0;
}
else{
//if it's a valid sit & not occupied, 
//process the requested & update the sit as occupied 
update(arr,row,col);   
}
return 1;
} 


void seat(char arr[9][21]){
	// user can stop process by pressing 'N'
	cout<<"\nEnter N if you are done!\n"; 
	string s;
	// continue if not interrepted by user or 
	//there is valid sit in unoccupied state
	while(true){ 
		s=getData(); //get user input
		//if user input is to stop the process
		if(s[0]=='N') 
			break; // break

		//process the request & check according to
		if(check(arr,s)) 
			display(arr);

		if(allOccupied(arr)){ //if all sits are occupied
			cout<<"\nSorry, no more seats left!!!!!!!!!!1..."<<endl;
			break; //break
		}
	}
	cout<<"\nThanks,Your seats have been booked!"<<endl; //end of program
}

int main()
{  
    int choice;
    cout<<endl;
    cout<<"                                       ____________________________________________________________"<<endl;
    cout<<"                                      |                                                            |"<<endl;
    cout<<"                                      |                                                            |"<<endl;
    cout<<"                                      |                MOVIE TICKET BOOKING SYSTEM                 |"<<endl;
    cout<<"                                      |                                                            |"<<endl;
    cout<<"                                      |                                                            |"<<endl;
    cout<<"                                      |                                       BY:-                 |"<<endl;
    cout<<"                                      |                                       PRAPTI GUPTA (A-180) |"<<endl;
    cout<<"                                      |                                       TANISHA SHAHA (A-175)|"<<endl;
    cout<<"                                      |                                                            |"<<endl;
    cout<<"                                      |____________________________________________________________|"<<endl;

    cout << endl;

    cout << endl;
    cout<<"***************************************************************************************************************************************";
    cout << "                                                          Main Menu: " << endl;
    cout <<"***************************************************************************************************************************************"<< endl;
    cout << "                                       1. Register" << endl;
    cout << "                                       2. Login" << endl;
    cout << endl;
    cout << "                                       Your choice: ";
    cin >> choice; 

    if(choice == 1)
    {
        string username, password;

        cout << "                                   Registration: " << endl;
        cout << endl;
        cout << "                                   Select a username: "; 
        cin >> username;
        cout << "                                   Select a password: ";
        cin >> password;

        ofstream file; // ofstream creates a file
        file.open(username + ".txt"); 
        file << username << endl << password;
        file.close();
        cout << "                                   Welcome " << username << "!" << endl;
         bool status = isLoggedIn();

        if(!status) // if isLoggedIn() returns false
        {
            system("clear");
            cout << endl;
            cout << "                               Invalid login!" << endl;
            main();
            return 0;
        }
        else // if isLoggedIn() returns true, the dashboard is displayed
        {
            cout << "                                       Successfully logged in!" << endl;
            cout << endl;

            int choiceTwo;

            // Display dashboard:
            cout << "                                       Welcome back!" << endl;
            cout << endl;
            genre: 
               cout<<"***************************************************************************************************************************************";
                cout << "                                                          SELECT YOUR DESIRED MOVIE: " << endl;
                cout <<"***************************************************************************************************************************************"<< endl;
                cout << "Select a genre from the list below:" << endl;
                cout << "1. Romance" << endl;
                cout << "2. Comedy" << endl;
                cout << "3. Drama" << endl;
                cout << "4. Horror" << endl;
                cout<<  "5. Thriller" << endl;
    
              int choice;
             char movie;
             cout<<"Enter you Choice: ";
             cin >> choice;
             string genre;
             switch(choice)
             {
             case 1:
            cout << "You selected Romance"<<endl<<endl;
            cout << "Choose a movie from the following list: \n";
            cout << "a. Barfi\n";
            cout << "b. Jab We Met\n";
            cout << "c. Kal Ho Naa Ho\n";
            cout << "d. Kapoor & Sons\n";
            cout << "e. Yeh Jawaani Hai Deewani\n";
            cout<<"Enter the movie you want to select: ";
            cin >> movie;
            cout<<endl;
            
    
              switch (movie)
            {
            case 'a':
                cout << "You have selected Barfi"<<endl;
                Barfi();
                break;
            case 'b':
                cout << "You have selected Jab We Met"<<endl;
                JabWeMet();
                break;
            case 'c':
                cout << "You have selected Kal Ho Naa Ho"<<endl;
                KalHoNaaHo();
                break;
            case 'd':
                cout << "You have selected Kapoor & Sons"<<endl;
                KapoorSons();
                break;
            case 'e':
                cout << "You have selected Yeh Jawaani Hai Deewani"<<endl;
                YehJawaaniHaiDeewani();
                break;
            default:
                cout << "Invalid selection."<<endl;
                break;
            }
            break;
            case 2:
            cout << "You selected Comedy"<<endl<<endl;
            cout << "Choose a movie from the following list: \n";
            cout << "a. Hera Pheri\n"; 
            cout << "b. 3 Idiots\n";
            cout << "c. Garam Masala\n";
            cout << "d. Dhamaal\n";
            cout << "e. Golmaal\n";
            cout<<"Enter the movie you want to select: ";
            cin >> movie;
            cout<<endl;
        
            switch (movie)
            {
            case 'a':
            cout << "You have selected Hera Pheri"<<endl;
            HeraPheri();
            break;
            case 'b':
            cout << "You have selected 3 Idiots"<<endl;
            Idiots();
            break;
            case 'c':
            cout << "You have selected Garam Masala"<<endl;
            GaramMasala();
            break;
            case 'd':
            cout << "You have selected Dhamaal"<<endl;
            Dhamaal();
            break;
            case 'e':
            cout << "You have selected Golmaal"<<endl;
            Golmaal();
            break;
            default:
            cout << "Invalid selection."<<endl;
            break;
            }
            break;
            case 3:
             cout << "You selected Drama"<<endl<<endl; 
             cout << "Choose a movie from the following list: \n"; 
             cout << "a. Freddy\n"; 
             cout << "b. Goodbye\n";
             cout << "c. Drishyam\n";
             cout << "d. Vikram Vedha\n";
             cout << "e. Liger\n";
             cout<<"Enter the movie you want to select: ";
            cin >> movie;
            cout<<endl;
 
        switch (movie)
        {
        case 'a':
            cout << "You have selected Freddy"<<endl;
            Freddy();
            break;
        case 'b':
            cout << "You have selected Goodbye"<<endl;
            Goodbye();
            break;
        case 'c':
            cout << "You have selected Drishyam"<<endl;
            Drishyam();
            break;
        case 'd':
            cout << "You have selected Vikram Vedha"<<endl;
            VikramVedha();
            break;
        case 'e':
            cout << "You have selected Liger"<<endl;
            Liger();
            break;
        default:
            cout << "Invalid selection."<<endl;
            break;
        }
        break;
        case 4:
            cout << "You selected Horror"<<endl<<endl; 
            cout << "Choose a movie from the following list: \n"; 
            cout << "a. Bulbul\n"; 
            cout << "b. Pari\n";
            cout << "c. Bhoot\n";
            cout << "d. Stree\n";
            cout << "e. Tumbbad\n";
            cout<<"Enter the movie you want to select: ";
            cin >> movie;
            cout<<endl;
            
        switch (movie)
        {
        case 'a':
            cout << "You have selected Bulbul"<<endl;
            Bulbul();
            break;
        case 'b':
            cout << "You have selected Pari"<<endl;
            Pari();
            break;
        case 'c':
            cout << "You have selected Bhoot"<<endl;
             Bhoot();
            break;
        case 'd':
            cout << "You have selected Stree"<<endl;
            Stree();
            break;
        case 'e':
            cout << "You have selected Tumbbad"<<endl;
            Tumbbad();
            break;
        default:
            cout << "Invalid selection."<<endl;
        }
        break;
        case 5:
            cout << "You selected Thriller"<<endl<<endl; 
            cout << "Choose a movie from the following list: \n";
            cout << "a. Talvar\n";
            cout << "b. Kahaani\n";
            cout << "c. Baby\n";
            cout << "d. Special 26\n";
            cout << "e. Shanghai\n";
            cout<<"Enter the movie you want to select: ";
            cin >> movie;
            cout<<endl;
   
        switch (movie)
        {
        case 'a':
            cout << "You have selected Talvar"<<endl;
            Talvar();
            break;
        case 'b':
            cout << "You have selected Kahaani"<<endl;
            Kahaani();
            break;
        case 'c':
            cout << "You have selected Baby"<<endl;
            Baby();
            break;
        case 'd':
            cout << "You have selected Special 26"<<endl;
            Special26();
            break;
        case 'e':
            cout << "You have selected Shanghai"<<endl;
            Shanghai();
            break;
        default:
            cout << "Invalid selection."<<endl;
         }
         break;
        default:
        cout<<"Invalid selection"<<endl;
        }
        
        char TH;
        cout<<endl<<endl;
        cout<<"***************************************************************************************************************************************";
        cout << "                                                    AVAILABLE MOVIE THEATRES NEARBY:  " << endl;
        cout<<"***************************************************************************************************************************************";
        cout<<endl;
    int theatre;
    TH:
    cout<<"\nSelect a Theatre: "<<endl;
    cout<<"1.INOX Cinemas, Glomax Kharghar."<<endl;
    cout<<"2.Carnival Cinemas, Little World Kharghar."<<endl;
    cout<<"3.Cinepolis Cinemas, Nexus Seawoods."<<endl;
    cout<<"4.PVR Cinemas, Orion Panvel."<<endl;
    cout<<"5.INOX Cinemas, Raghuleela Vashi."<<endl<<endl;
    cout<<"Enter Your Choice: ";
    cin>>theatre;
    
    switch (theatre)
    {
        case 1:
            cout << "You have selected INOX Cinemas, Glomax Kharghar.";
            break;
        case 2:
            cout << "You have selected Carnival Cinemas, Little World Kharghar.";
            break;
        case 3:
            cout << "You have selected Cinepolis Cinemas, Nexus Seawoods.";
            break;
        case 4:
            cout << "You have selected PVR Cinemas, Orion Panvel.";
            break;
        case 5:
            cout << "You have selected INOX Cinemas, Raghuleela Vashi.";
            break;
            
        default:
            cout << "Invalid selection.";
            goto TH;
    
    }
    
         cout<<endl<<endl;
        cout<<"***************************************************************************************************************************************";
        cout << "                                                              SHOW TIMINGS:  " << endl;
        cout<<"***************************************************************************************************************************************";
        cout<<endl;
         char timing;
         TE:
         cout<<"\nSelect a Time: "<<endl<<endl;
    cout<<"           ___________    ___________    ___________    ___________    ___________    ___________    ___________    ___________"<<endl; 
    cout<<"          |a. 8:30 AM |  |b. 9:15 AM |  |c. 12:15 PM|  |d. 1:10 PM |  |e. 4:05 PM |  |f. 5:05 PM |  |g. 8:00 pm |  |h. 9:00 PM |"<<endl;
    cout<<"          |___________|  |___________|  |___________|  |___________|  |___________|  |___________|  |___________|  |___________|"<<endl;
    
    cout<<"\nEnter Your Choice: ";
    cin>>timing;
    cout<<endl;
    
    switch (timing)
    {
        case 'a':
        case 'A':
            cout << "You have selected 8:30 am"<<endl;
            break;
        case 'b':
        case 'B':
            cout << "You have selected 9:15 am"<<endl;
            break;
        case 'c':
        case 'C':
            cout << "You have selected 12:15 pm"<<endl;
            break;
        case 'd':
        case 'D':
            cout << "You have selected 1:10 pm"<<endl;
            break;
        case 'e':
        case 'E':
            cout << "You have selected 4:05 pm"<<endl;
            break;
        case 'f':
        case 'F':
            cout << "You have selected  5:05 pm"<<endl;
            break; 
        case 'g':
        case 'G':
            cout << "You have selected 8:00 pm"<<endl;
            break;
        case 'h':
        case 'H':
            cout << "You have selected 9:00 pm"<<endl;
            break;
            
        default:
            cout << "Invalid selection."<<endl;
            goto TE;
    }
    
         char answer;
          cout<<endl<<endl;
         cout<<"***************************************************************************************************************************************";
         cout << "                                                           TERMS AND CONDITIONS:  " << endl;
        cout<<"***************************************************************************************************************************************";
	cout << endl;
	cout << "1. Please read the following Terms and Conditions carefully before proceeding:" << endl;
	cout << endl;
	cout << "2. Guests aged under 18 will not be allowed in 'A' rated movies" << endl;
	cout << endl;
	cout << "3. Children above the age of 3 years require tickets for 'U' or 'U/A' rated movies" << endl;
	cout << endl;
	cout << "4. Guests aged under 18 will not be allowed in 'A' rated movies" << endl;
	cout << endl;
	cout << "5. In case a ticket is losed or misplaced, a duplicate ticket cannot be issued" << endl;
	cout << endl;
	cout << "6. Outside food and beverages are not allowed inside the cinema premises" << endl;
	cout << endl;
	cout << endl;
	yes:
	cout << "Do you agree to these terms and conditions? (Y/N): ";
	
cin >> answer;
cout<<endl;	
	
	if (answer == 'Y' || answer == 'y')
	{
		cout << "You have agreed to the Terms and Conditions." << endl;
		
	}
	else if (answer == 'N' || answer == 'n')
	{
		cout << "You have declined to the Terms and Conditions." << endl;
		cout<<"To continue please Agree."<<endl;
		goto yes;
	}
	else
	{
		cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
	}
	
	int no,Total,PS,DS;
	string p;
	cout<<endl<<endl;
	cout<<"****************************************************************************************************************************************"<<endl;
	cout<<"                                                        SELECT YOUR DESIRED SEATS: "<<endl;
	cout<<"*****************************************************************************************************************************************"<<endl<<endl;
	cout<<"We offer ONLY Premium Seats. "<<endl;
	cout<<"Premium Seats are Recllinear seats having more leg space and complimentary blankets to enhance your expeience."<<endl;
	cout<<"\n Cost-Rs.300"<<endl<<endl;
	cout<<"Enter the number of seats you want to book: ";
	cin>>no;
	cout<<"\n\n";

	//2-D array for storing sit number
	char arr[9][21]; 
	for(int i=0;i<9;i++){
		//forst column is row number
		arr[i][0]=i+1+'0';
		for(int j=1;j<21;j++){
			//to represent sit number A,B,C,D respectively
			arr[i][j]='A'+j-1; 
		}
	}
	
	cout<<"Initial seat arrangements........\n\n";
	display(arr);
	
	seat(arr); //airline function
	Total=no*300;
	cout<<"Your Total of seats costs Rs."<<Total;
	
	
	
	int snacks, beverages;
	int amount;
	int snacks_price, beverages_price;
	int numPizza, numSandwich, numPopcorn, numSoda, numCoke, numWater;
	double totalPrice;
	int price=0;
	cout<<endl;
	cout<<"***************************************************************************************************************************************";
    cout << "                                                    WELCOME TO THE SNACKS AND BEVERAGE SECTION  " << endl;
    cout<<"***************************************************************************************************************************************";
    cout<<endl;
	cout << "Would you like to add snacks and beverages to your order? (Y/N): ";
	cin >> answer;
while(answer == 'Y' || answer == 'y') 
{
	cout << "\nSNACKS" << endl;
	cout << "1. Pizza (Rs.350)" << endl;
	cout << "2. Sandwich - (Rs.250)" << endl;
	cout << "3. Popcorn - (Rs.300)" << endl;
	cout<<endl;
	cout << "BEVERAGES" << endl;
	cout << "4. Soda (Rs.85)" << endl;
	cout << "5. Coke - (Rs.110)" << endl;
	cout << "6. Water - (Rs.65)" << endl;
	cout<<endl;
	cout <<"What kind of snack and beverage would you like to add?: ";
	cin >> answer;
	{
	if (answer == '1') 
	{
		cout << "You have selected Pizza!" << endl;
    	cout << "How many Pizza would you like? ";
    	cin >> numPizza;
		price = numPizza*350;
		cout<<"It costs "<<price;
	}
	else if (answer == '2') 
	{
		cout << "You have selected Sandwich!" << endl;
		cout << "How many Sandwich would you like? ";
    	cin >> numSandwich;
		price = price + numSandwich*250;
		cout<<"It costs "<<price;
	}
	else if (answer == '3') 
	{
		cout << "You have selected Popcorn!" << endl;
		cout << "How many Popcorn would you like? ";
    	cin >> numPopcorn;
		price = price + numPopcorn*300;
		cout<<"It costs "<<price;
	}
	else if (answer == '4')
	{
		cout << "You have selected Soda!" << endl;
		cout << "How many Soda would you like? ";
    	cin >> numSoda;
		
		price = price + numSoda*85;
		cout<<"It costs "<<price;
	}
	else if (answer == '5') 
	{
		cout << "You have selected Coke!" << endl;
		cout << "How many Coke would you like? ";
    	cin >> numCoke;
		price = price + numCoke*110;
		cout<<"It costs "<<price;
	}
	else if (answer == '6') 
	{
		cout << "You have selected Water!" << endl;
		cout << "How many Water would you like? ";
    	cin >> numWater;
		price = price + numWater*65;
		cout<<"It costs "<<price;
	}
    cout << endl;
    cout << endl;
	cout << "Would you like to add more snacks and beverages to your order? (Y/N): ";
	cin >> answer;
	if (answer == 'N' || answer == 'n')
	{
	    cout << endl;
	    cout << "The above order is placed."<<endl;
	    cout<<"You can collect the snacks and beverages from the food counter by showing the ticket "<<endl;
	}
	
    }
}
    
    if (answer == 'N' || answer == 'n')
	{
		cout << "Thank you!" << endl;
	}
	
		cout<<"***************************************************************************************************************************************";
    cout << "                                                           PAYMENT WINDOW: " << endl;
    cout<<"***************************************************************************************************************************************";
    cout<<endl;
	Total = Total + price;
    cout << "Total cost including seats and beverages is: " << Total;
    //declaring variables
    char paymentOption;

    //displaying options
    cout << "\nEnter your payment option for buying a movie ticket:" << endl;
    cout << endl;
    cout << "A. Cash" << endl;
    cout << "B. Credit Card" << endl;
    cout << "C. Mobile Payment" << endl;
    cout << "D. Other Payment Option" << endl;
    cout << endl;
    //user input
    cout << "Enter your choice of Payment: ";
    cin >> paymentOption;

    switch (paymentOption) 
    {
        case 'A':
        case 'a':
            cout << "You chose Cash to pay for your movie ticket."<<endl<<"Please proceed the payment" << endl;
            break;
        case 'B':
        case 'b':
            cout << "You chose Credit Card to pay for your movie ticket."<<endl<<"Please proceed the payment" << endl;
            break;
        case 'C':
        case 'c':
            cout << "You chose Mobile Payment to pay for your movie ticket."<<endl<<"Please proceed the payment" << endl;
            break;
        case 'D':
        case 'd':
            cout << "You chose Other Payment Option to pay for your movie ticket."<<endl<<"Please proceed the payment" << endl;
            break;
        default:
            cout << "Invalid option. Please choose one of the available options." << endl;
    }
    pay:
    cout<<"\nThe amount to be paid is "<<Total;
    cout << "\nEnter amount to pay: ";
    cin >> amount;
    if(amount==Total)
    {
        cout<<"PAID"<<endl;
    }
    else
    {
        cout<<"\nPlease enter correct value to place your order.";
        goto pay;
    }
    cout<<"\n\nYOU HAVE SUCCESSFULLY BOOKED YOUR MOVIE TICKETS."<<endl;
    cout<<"THE TICKET HAS BEEN SENT TO YOUR REGISTERED MOBILE NUMBER !"<<endl<<endl;
    	cout<<"***************************************************************************************************************************************";
    cout << "                                                               THANKYOU " << endl;
    cout<<"***************************************************************************************************************************************";
    cout<<endl;
    cout << endl;
            cout << "                                      1. Sign Out" << endl;
            cout << "                                      2. Back to main menu" << endl;
            cout << "                                      Your choice: ";
            cin >> choiceTwo;

            if(choiceTwo == 1)
            {
                cout<<endl<<"                                    You have been logged Out."<<endl;
                cout<<"                                    Thanks for using our platform to Book your tickets."<<endl;
                cout<<"                                    Hope you had a wonderful experience!";
                system("exit"); // exits program 
            }
            else if(choiceTwo == 2)
            {
                goto genre; // returns to the beginning of the main() function
            }
            
        }
    
    }
         else if(choice == 2) // if user chooses to login
        {
        bool status = isLoggedIn();

        if(!status) // if isLoggedIn() returns false
        {
            system("clear");
            cout << endl;
            cout << "                               Invalid login!" << endl;
            main();
            return 0;
        }
        else // if isLoggedIn() returns true, the dashboard is displayed
        {
            cout << "                                       Successfully logged in!" << endl;
            cout << endl;

            int choiceTwo;

            // Display dashboard:
            cout << "                                       Welcome back!" << endl;
            cout << endl;

        
               
        }
    }

    return 1;
}