#include<iostream>
#include<string>

void fillNoteArr(std::string notes[7], std::string temp_notes[7])
{
	for(int i = 0; i < 7; i++)
	{
		notes[i] = temp_notes[i];
	}
}

void setNotes(std::string notes[7], std::string in_note)
{
	if(in_note.compare("C") == 0)
	{
		std::string temp_notes[7] = {"C","D","E","F","G","A","B"};
		fillNoteArr(notes, temp_notes);
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

	
 
	std::cout << notes[4] << " is a fifth above " << in_note << " in the key of " << in_note << std::endl;

	
	
	return 0;

}
