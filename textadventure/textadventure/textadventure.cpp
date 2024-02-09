#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;



struct RoomA { // struct for room A storing information
    string st_well = " Hole "; // to give item's name when item1/item2 is called
    bool notebook = false; //starting spells for dungeon
    string st_notebook = " Notebook? "; // name for item in void item check
};

bool cho1;
bool cho2;



static string item1 = ""; //start of each room, fills in each with items in the room
static string item2 = "";
static string room; //says what room you are in


static void Item_check(string& room) {
        cout << "you scan the room for items...\n\n";
        cout << "ITEMS -----" << item1 << "---" << item2 << "-----" << endl; // calling out items that are in the room
      
}

    struct Spellbook { // put spells in here
        int fireball = 0;
        int heal = 0;
        int destroy = 0;

    };

    static void Spell_list(int& spells) {
    
    }
    // setting up function so when user asks for spell list it gives them the spells
    // do if any of the spells = 1, then they are unlocked if they = 0 then they are locked



int main()
{
    string player_input = "";
    while (player_input != "N") {
        cout << "press 'n' for next" << endl;
        cout << "Press  'e' to exit" << endl; //idk if this works yet hahahah
         cin >> player_input;

       

        string choice_nav = " ";
        string choice_item = " ";

        Spellbook Spb;

        RoomA romA; // setting something for struct roomA to be referred too

        room = "a"; // setting the room number for the start of the game
        item1 = romA.st_well; // items numbers
        item2 = romA.st_notebook;

        cout << "You awake on a bed of stone, distant memories of beautiful colours flash in your mind," << endl;
        cout << "only for you to open your eyes to darkness\n" << endl;
        //story
        void roomA();
        {
            cout << "\n\nyou are in room-A\n\n" << endl;
            cout << "Pickup or examine by typing     look_1      or by typing     look_2" << endl;
            cout << "And use items by      use(item_name)\n\n" << endl;
            cout << "\n\nas your eyes adjust you see four doorways around you, and a hole above you.\n" << endl;

            // for loop (a && b = true; end loop){
            Item_check(room);  // chuck a for loop in here so that they can examine both items maybe by putting a bool on the end of each choice, and when both bools are true it passes them
            cout << "\n" << endl;
            cin >> choice_item;
            if (choice_item == "look_1") {
                cout << "\n\nyou examine the hole, the slimey sides and the slight dripping of water indicate that it used to be a well." << endl;
                cout << "memories of playing around an empty well in a bright green and gorgeous field as a kid come back to you," << endl;
                cout << "\nCould this possibly where you are ? \n\n" << endl;
                // bool a = true
            }
            else if (choice_item == "look_2") {
                cout << "\n\nyou examine the notebook, as you wipe off dust and rocks off of the cover you're able too read 'wizard 101... tips, tricks and more!'" << endl;
                cout << "\n\n---type    'spellbook'   to see learnt spells---\n\n" << endl;
                Spb.fireball + 1;
                // bool b = true
            }
            else {
                cout << "\n\n---ERROR--- try typing look_1 or look_2, dont forget underscores!!\n\n" << endl; // if this keeps appearing try putting else if 
            }
        }

        // somehow just fixed every bug in one run, dont change anything but add a loop or something w the bools


        cout << "\n\nyou can move, North, East, South, West.\nType move and then the direction to change rooms...\n\n" << endl;
        cin >> choice_nav;
        room = choice_nav;





    }
}

