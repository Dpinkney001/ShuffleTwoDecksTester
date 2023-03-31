#include<iostream>
#include<vector>
#include<string>
#include<random>
#include<list>


using namespace std;

int main() {

	for (int i = 0; i <= 5000; i++) {
		std::list<std::string> Deck1 = { "Dark_Ruler_Ha_Des",
					  "Monster_Reborn",
	"Lightning_Vortex",
	"Solemn_Judgement",
	"Enemy_Controller",
	"Contract_With_The_Dark_Master",
	"Brain_Control",
	"Monster_Reincarnation",
	"Goblin_Zombie",
		 "Berserk_Dragon",
		 "A_Deal_With_Dark_Ruler",
		 "Newdoria",
		 "Opticlops",
		 "Deck_Devastation_Virus",
		 "Brain_Jacker",
		 "Ectoplasmer",
		 "Double_Spell",
		 "Newdoria",
		 "Jowgen_The_Spiritualist",
		 "Return_From_The_Different_Dimension",
		 "Card_Destruction",
		 "Mystical_Space_Typhoon",
		"Headless_Knight",
		 "Archfiend_Soldier",
		"My_Body_As_A_Shield",
		"Megamorph",
		 "Mask_Of_Darkness",
		 "Despair_From_The_Dark",
		 "Mystic_Plasma_Zone",
		 "Dark_Master_ - _Zorc",
		 "Dark_Necrofear",
		 "Possessed_Dark_Soul",
		 "Necroface",
		"Sangan",
		 "Mirror_Force",
		 "Gernia",
		 "Shrink",
		 "Zoma_The_Spirit",
		 "Zoma_The_Spirit",
		"Sakuretsu_Armor",
		 "Heavy_Storm",
		 "Malice_Doll_Of_Demise"
		};
		std::vector<std::reference_wrapper<const std::string>> v(Deck1.cbegin(), Deck1.cend());
		std::random_device rd;
		std::mt19937 generator(rd());
		std::shuffle(v.begin(), v.end(), generator);
		std::cout << "shuffled deck:   " << endl;
		std::copy(v.cbegin(), v.cend(), std::ostream_iterator<std::string>(std::cout, " "));
		std::cout << " cards in the hand are:    " << endl;
		std::copy(v[0], v[4], std::ostream_iterator<std::string>(std::cout, " "));

		vector<string> hand = { v[0], v[1], v[2], v[3], v[4] };

		// create switch statement for generating the five cards in hand and counters for each time a card appears in 
		// in hand


		//monster counters
		int Dark_Ruler_Ha_Des_counter = 0;
		int Monster_Reborn_counter = 0;
		int Lightning_Vortex_counter = 0;
		int Solemn_Judgement_counter = 0;
		int Enemy_Controller_counter = 0;
		int Contract_With_The_Dark_Master_counter = 0;
		int Brain_Control_counter = 0;
		int Monster_Reincarnation_counter = 0;
		int Goblin_Zombie_counter = 0;
		int Berserk_Dragon_counter = 0;
		int A_Deal_With_Dark_Ruler_counter = 0;
		int Newdoria_counter = 0;
		int Opticlops_counter = 0;
		int Deck_Devastation_Virus_counter = 0;
		int Brain_Jacker_counter = 0;
		int Ectoplasmer_counter = 0;
		int Double_Spell_counter = 0;
		int Newdoria_2copy_counter = 0;
		int Jowgen_The_Spiritualist_counter = 0;
		int Return_From_The_Different_Dimension_counter = 0;
		int Card_Destruction_counter = 0;
		int Mystical_Space_Typhoon_counter = 0;
		int Headless_Knight_counter = 0;
		int Archfiend_Soldier_counter = 0;
		int My_Body_As_A_Shield_counter = 0;
		int Megamorph_counter = 0;
		int Mask_Of_Darkness_counter = 0;
		int Despair_From_The_Dark_counter = 0;
		int Mystic_Plasma_Zone_counter = 0;
		int Dark_Master_ - _Zorc_counter = 0;
		int Dark_Necrofear_counter = 0;
		int Possessed_Dark_Soul_counter = 0;
		int Necroface_counter = 0;
		int Sangan_counter = 0;
		int Mirror_Force_counter = 0;
		int Gernia_counter = 0;
		int Shrink_counter = 0;
		int Zoma_The_Spirit_counter = 0;
		int Zoma_The_Spirit_2copy_counter = 0;
		int Sakuretsu_Armor_counter = 0;
		int Heavy_Storm_counter = 0;
		int Malice_Doll_Of_Demise_counter = 0;

	for (int j = 0; j <= 4; j++) {
		vector<std::string> hand;
		hand.push_back(v[j]);


		enum class card { Dark_Ruler_Ha_Des, Monster_Reborn, Lightning_Vortex, Solemn_Judgement,
	Enemy_Controller,Contract_With_The_Dark_Master,Brain_Control,Monster_Reincarnation,Goblin_Zombie,
	Berserk_Dragon, A_Deal_With_Dark_Ruler, Newdoria, Opticlops,Deck_Devastation_Virus,Brain_Jacker,
	Ectoplasmer, Double_Spell, Newdoria, Jowgen_The_Spiritualist, Return_From_The_Different_Dimension,
	Card_Destruction, Mystical_Space_Typhoon, Headless_Knight, Archfiend_Soldier, My_Body_As_A_Shield,
	Megamorph, Mask_Of_Darkness, Despair_From_The_Dark, Mystic_Plasma_Zone, Dark_Master_Zorc,
    Dark_Necrofear, Possessed_Dark_Soul, Necroface, Sangan, Mirror_Force, Gernia, Shrink,Zoma_The_Spirit,
	Zoma_The_Spirit_2copy, Sakuretsu_Armor, Heavy_Storm, Malice_Doll_Of_Demise };

		/*
		enum class deck { Dark_Ruler_Ha_Des = "Dark_Ruler_Ha_Des",
					  Monster_Reborn = "Monster_Reborn",
	"Lightning_Vortex",
	"Solemn_Judgement",
	"Enemy_Controller",
	"Contract_With_The_Dark_Master",
	"Brain_Control",
	"Monster_Reincarnation",
	"Goblin_Zombie",
		 "Berserk_Dragon",
		 "A_Deal_With_Dark_Ruler",
		 "Newdoria",
		 "Opticlops",
		 "Deck_Devastation_Virus",
		 "Brain_Jacker",
		 "Ectoplasmer",
		 "Double_Spell",
		 "Newdoria",
		 "Jowgen_The_Spiritualist",
		 "Return_From_The_Different_Dimension",
		 "Card_Destruction",
		 "Mystical_Space_Typhoon",
		"Headless_Knight",
		 "Archfiend_Soldier",
		"My_Body_As_A_Shield",
		"Megamorph",
		 "Mask_Of_Darkness",
		 "Despair_From_The_Dark",
		 "Mystic_Plasma_Zone",
		 "Dark_Master_ - _Zorc",
		 "Dark_Necrofear",
		 "Possessed_Dark_Soul",
		 "Necroface",
		"Sangan",
		 "Mirror_Force",
		 "Gernia",
		 "Shrink",
		 "Zoma_The_Spirit",
		 "Zoma_The_Spirit",
		"Sakuretsu_Armor",
		 "Heavy_Storm",
		 "Malice_Doll_Of_Demise" };
*/
		switch (card) {
		case Dark_Ruler_Ha_Des:
			Dark_Ruler_Ha_Des_counter++;
			break;
		case Monster_Reborn:
			Monster_Reborn_counter++;
			break;
		case Lightning_Vortex:
			Lightning_Vortex_counter++;
			break;
		case Solemn_Judgement:
			Solemn_Judgement_counter++;
			break;
		case Enemy_Controller:
			Enemy_Controller_counter++;
			break;
		case Contract_With_The_Dark_Master:
			Contract_With_The_Dark_Master_counter++;
			break;


			int Brain_Control_counter = 0;
			int Monster_Reincarnation_counter = 0;
			int Goblin_Zombie_counter = 0;
			int Berserk_Dragon_counter = 0;
			int A_Deal_With_Dark_Ruler_counter = 0;
			int Newdoria_counter = 0;
			int Opticlops_counter = 0;
			int Deck_Devastation_Virus_counter = 0;
			int Brain_Jacker_counter = 0;
			int Ectoplasmer_counter = 0;
			int Double_Spell_counter = 0;
			int Newdoria_2copy_counter = 0;
			int Jowgen_The_Spiritualist_counter = 0;
			int Return_From_The_Different_Dimension_counter = 0;
			int Card_Destruction_counter = 0;
			int Mystical_Space_Typhoon_counter = 0;
			int Headless_Knight_counter = 0;
			int Archfiend_Soldier_counter = 0;
			int My_Body_As_A_Shield_counter = 0;
			int Megamorph_counter = 0;
			int Mask_Of_Darkness_counter = 0;
			int Despair_From_The_Dark_counter = 0;
			int Mystic_Plasma_Zone_counter = 0;
			int Dark_Master_ - _Zorc_counter = 0;
			int Dark_Necrofear_counter = 0;
			int Possessed_Dark_Soul_counter = 0;
			int Necroface_counter = 0;
			int Sangan_counter = 0;
			int Mirror_Force_counter = 0;
			int Gernia_counter = 0;
			int Shrink_counter = 0;
			int Zoma_The_Spirit_counter = 0;
			int Zoma_The_Spirit_2copy_counter = 0;
			int Sakuretsu_Armor_counter = 0;
			int Heavy_Storm_counter = 0;
			int Malice_Doll_Of_Demise_counter = 0;
			}//end kernal for loop
		}//end sub for loop
	}//end main for loop

}// end main





