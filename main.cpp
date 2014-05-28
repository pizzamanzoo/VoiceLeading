#include<iostream>
#include<string>

//fills real note array with temporary one 
void fillNoteArr(std::string notes[7], std::string temp_notes[7])
{
	for(int i = 0; i < 7; i++)
	{
		notes[i] = temp_notes[i];
	}
}


//Sets notes in the scale based on input note. Could do this in an external file.  
void setNotes(std::string notes[7], std::string in_note)
{
	if(in_note.compare("C") == 0)
	{
		std::string temp_notes[7] = {"C","D","E","F","G","A","B"};
		fillNoteArr(notes, temp_notes);
	}
    else if(in_note.compare("F") == 0)
    {
        std::string temp_notes[7] = {"F", "G", "A", "Bb", "C", "D", "E"};
        fillNoteArr(notes, temp_notes);
    }
    else if(in_note.compare("Bb") == 0)
    {
        std::string temp_notes[7] = {"Bb", "C", "D", "Eb", "F", "G", "A"};
        fillNoteArr(notes, temp_notes); 
    }
    else if(in_note.compare("Eb") == 0)
    {
        std::string temp_notes[7] = {"Eb", "F", "G", "Ab", "Bb", "C", "D"};
        fillNoteArr(notes, temp_notes); 
    }
    else if(in_note.compare("Ab") == 0)
    {
        std::string temp_notes[7] = {"Ab", "Bb", "C", "Db", "Eb", "F", "G"};
        fillNoteArr(notes, temp_notes); 
    }
    else if(in_note.compare("Db") == 0)
    {
        std::string temp_notes[7] = {"Db", "Eb", "F", "Gb", "Ab", "Bb", "C"};
        fillNoteArr(notes, temp_notes); 
    }
    else if(in_note.compare("Gb") == 0)
    {
        std::string temp_notes[7] = {"Gb", "Ab", "Bb", "Cb", "Db", "Eb", "F"};
		fillNoteArr(notes, temp_notes);         
    }
    else if(in_note.compare("Cb") == 0)
    {
        std::string temp_notes[7] = {"Cb" "Db", "Eb", "Fb", "Gb", "Ab", "Bb"};
        fillNoteArr(notes, temp_notes); 
    }
    else if(in_note.compare("G") == 0)
    {
        std::string temp_notes[7] = {"G", "A", "B", "C", "D", "E", "F#"};
        fillNoteArr(notes, temp_notes); 
    }
    else if(in_note.compare("D") == 0)
    {
	    std::string temp_notes[7] = {"D", "E", "F#", "G", "A", "B", "C#"};
        fillNoteArr(notes, temp_notes); 

    }
    else if(in_note.compare("A") == 0)
    {
        std::string temp_notes[7] = {"A", "B", "C#", "D", "E", "F#", "G#"};
        fillNoteArr(notes, temp_notes);
    }
    else if(in_note.compare("E") == 0)
    {
        std::string temp_notes[7] = {"E", "F#", "G#", "A", "B", "C#", "D#"};
        fillNoteArr(notes, temp_notes);
    }
    else if(in_note.compare("B") == 0)
    {
        std::string temp_notes[7] = {"B", "C#", "D#", "E#", "F#", "G#", "A"};
        fillNoteArr(notes, temp_notes); 
    }
    else if(in_note.compare("F#") == 0)
    {   
        std::string temp_notes[7] = {"F#", "G#", "A#", "B", "C#", "D#", "E#"};
        fillNoteArr(notes, temp_notes);
    }
    else if(in_note.compare("C#") == 0)
    {
        std::string temp_notes[7] = {"C#", "D#", "E#", "F#", "G#", "A#", "B#"};
        fillNoteArr(notes, temp_notes);
    }
    else
    {
        std::cout << "This is not a valid choice" << std::endl;
    }
    
}



void getInput(std::string& in_note)
{
	std::cout << "Enter in your note: " << std::endl;
	std::cin >> in_note;
}



int main()
{

	std::string in_note;
	std::string notes[7];
	int note_num;
	int scale;
 


	getInput(in_note);
	std::cout << "NOTE: " << in_note << std::endl;

	 setNotes(notes, in_note);


    std::cout << notes[3] << " is a fourth above " << in_note << " in the key of " << in_note << std::endl;  
	std::cout << notes[4] << " is a fifth above " << in_note << " in the key of " << in_note << std::endl;



	return 0;

}
