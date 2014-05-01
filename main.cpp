#include<iostream>
#include<string>

void setNotes(std::string notes[17])
{
	notes[0] = "A";
	notes[1] = "Bb";
	notes[2] = "A#";
	notes[3] = "B";
	notes[4] = "C";
	notes[5] = "C#";
	notes[6] = "Db";
	notes[7] = "D";
	notes[8] = "D#";
	notes[9] = "Eb";
	notes[10] = "E";
	notes[11] = "F";
	notes[12] = "F#";
	notes[13] = "Gb";
	notes[14] = "G";
	notes[15] = "G#";
	notes[16] = "Ab";

}

void getInput(std::string& in_note)
{
	std::cout << "Enter in your note: " << std::endl;
	std::cin >> in_note;
}



int main()
{

	std::string in_note;
	std::string notes[17];
	int note_num;

	setNotes(notes);

	getInput(in_note);
	std::cout << "NOTE: " << in_note << std::endl;
	for(int i = 0; i < 17; i++)
	{
		if(in_note.compare(notes[i]) == 0)
		{
			note_num = i;
			i = 18;
		}
	} 
	std::cout << notes[note_num + 10] << " is a fifth above " << in_note << std::endl;

	
	
	return 0;

}
