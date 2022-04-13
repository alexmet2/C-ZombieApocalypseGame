#include <iostream>

using namespace std;

int EndOrRestart(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start);
void a206(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Eighth choise-  Knife and Frontdoor, Knife the zombies, cut the hand, tourniquet it and frontdoor and car and ignore ending#56*/
	int y = 0;
	system("color 6");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "Because of your arm loss, and no supplies, they say that they are going to keep you at a simple-protected position." << endl;
	cout << "1 arm and simple proected by the military ending#56" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a205(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Eighth choise-  Knife and Frontdoor, Knife the zombies, cut the hand, tourniquet it and frontdoor and car and stop ending#55*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "As soon as you stop, he points a gun at you and tells you:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have any and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "1 arm and shot ending# 55" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a204(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Seventh choice- Frontdoor with the baseball bat, snek past the zombies and frontdoor pharmacy and car and ignore ending#92*/
	int y = 0;
	system("color 6");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "Because you provide them with a knife, the have at a simple-protected position." << endl;
	cout << "Almost semi-protected by the milytary 5 ending#92" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a203(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Seventh choice- Frontdoor with the baseball bat, snek past the zombies and frontdoor pharmacy and car and stop ending#91*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "As soon as you stop, he points a gun at you and tells you:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have any and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "the knife and shot 5 ending# 91" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a202(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Seventh choise- Knife and Frontdoor, sneak past the zombies, pharmacy frontdoor and car and ignore ending#61*/
	int y = 0;
	system("color 6");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "Because you provide them with a knife, the have at a simple-protected position." << endl;
	cout << "Almost semi-protected by the milytary 1 ending#62" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a201(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Seventh choise- Knife and Frontdoor, sneak past the zombies, pharmacy frontdoor and car and stop ending#61*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "As soon as you stop, he points a gun at you and tells you:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have any and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "the knife and shot 1 ending# 61" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a200(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Seventh choise- Knife and Frontdoor, Knife the zombies, cut the hand, tourniquet it and frontdoor and sewers ending#57*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the sewers." << endl;
	cout << "Unfortunately there were many zombies, they grabbed you and killed you." << endl;
	cout << "Better luck next time" << endl;
	cout << "1 hand and sewers ending#57" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a199(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Seventh choise- Knife and Frontdoor, Knife the zombies, cut the hand, tourniquet it and frontdoor and car*/
	system("color 7");
	cout << "You chose to drive the car." << endl;
	cout << "Luckily the car works and you slowly start to drive." << endl;
	cout << "You exit the neighborhood, you get on the highway, and you see in a distance a man holding a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x7;
	switch (x7) {
	case 1: {
		a205(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a206(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a199(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a198(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Seventh choise- Frontdoor with the gun, sneak past the zombies, pharmacy frontdoor and car and stop ending#28*/
	int y = 0;
	system("color a");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "But because you have a gun with bullets and some painkillers, they say that they will put you on the best protected position by the military." << endl;
	cout << "Cogratulations on surving!" << endl;
	cout << "Full-protected by the military with bullets and painkillers 1 ending#.28" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a197(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Seventh choise- Frontdoor with the gun, sneak past the zombies, pharmacy frontdoor and car and stop ending#27*/
	int y = 0;
	system("color 6");
	cout << "You chose to stop and help him." << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'. Fortunately you have some painkillers with you." << endl;
	cout << "He spares your life but he also steals the car. And now you are alone on the road." << endl;
	cout << "Better luck next time" << endl;
	cout << "Abandoned on the road with the gun and painkillers 1 ending#27" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a196(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise-  Basement with the baseball bat, throw debri and car and ignore ending#120*/
	int y = 0;
	system("color a");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "But because you have a baseball bat and some painkillers, they say that they will put you on the best protected position by the military." << endl;
	cout << "Cogratulations on surving!" << endl;
	cout << "Full-protected by the military with the baseball bat and supplies 2 ending#.120" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a195(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the baseball bat, throw debri and car and stop ending#119*/
	int y = 0;
	system("color 6");
	cout << "You chose to stop and help him." << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'. Fortunately you have some supplies with you." << endl;
	cout << "He spares your life but he also steals the car. And now you are alone on the road." << endl;
	cout << "Better luck next time" << endl;
	cout << "Abandoned on the road with the baseball bat and supplies 3 ending#119" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a194(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the baseball bat, throw debri and pharmacy and ignore ending#118*/
	int y = 0;
	system("color a");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "But because you have a baseball bat and some painkillers, they say that they will put you on the best protected position by the military." << endl;
	cout << "Cogratulations on surving!" << endl;
	cout << "Full-protected by the military with the baseball bat and painkillers 2 ending#.118" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a193(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the baseball bat, throw debri and pharmacy and stop ending#117*/
	int y = 0;
	system("color 6");
	cout << "You chose to stop and help him." << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'. Fortunately you have some painkillers with you." << endl;
	cout << "He spares your life but he also steals the car. And now you are alone on the road." << endl;
	cout << "Better luck next time" << endl;
	cout << "Abandoned on the road with the baseball bat and painkillers 2 ending#117" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a192(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the baseball bat, hit the zombie and car and ignore ending#192*/
	int y = 0;
	system("color a");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "But because you only have a baseball bat, they say that they will put you on a semi-protected position by the military." << endl;
	cout << "Cogratulations on surving!" << endl;
	cout << "Almost fully-protected by the military with the baseball bat 1 ending#116." << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a191(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the baseball bat, hit the zombie and car and stop ending#191*/
	int y= 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'. Unfortunately, you don't have supplies with you and shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Shot in the head with the baseball bat 3 ending#115" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a190(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the baseball bat, hit the zombie and pharmacy and ignore ending#114*/
	int y = 0;
	system("color a");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "But because you have a baseball bat and some painkillers, they say that they will put you on the best protected position by the military." << endl;
	cout << "Cogratulations on surving!" << endl;
	cout << "Full-protected by the military with the baseball bat and painkillers 1 ending#114" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a189(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the baseball bat, hit the zombie and pharmacy and stop ending#113*/
	int y = 0;
	system("color 6");
	cout << "You chose to stop and help him." << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'. Fortunately you have some painkillers with you." << endl;
	cout << "He spares your life but he also steals the car. And now you are alone on the road." << endl;
	cout << "Better luck next time" << endl;
	cout << "Abandoned on the road with the baseball bat and painkillers 1 ending#113" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a182(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the baseball bat, the police station and search for an exit and by foot ending#112*/
	int y = 0;
	system("color 6");
	cout << "You chose to leave by foot and survive on your own." << endl;
	cout << "No car but 1 baseball bat 2 ending#112" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a181(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the baseball bat, the police station and search for an exit and hospital ending#111*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospital." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time." << endl;
	cout << "Hospital with baseball bat 5 ending#111" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a180(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the baseball bat, the police station and search for an exit and big house ending#110*/
	int y = 0;
	system("color a");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. You talk to them and you decide to unite without much trust in eachother." << endl;
	cout << "United but not trusted with baseball bat 3 ending# 110" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a179(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise-  Backdoor with the baseball bat, the police station and hiT from close and walk ending#109*/
	int y = 0;
	system("color 6");
	cout << "You chose to leave by foot and survive on your own." << endl;
	cout << "No car but 1 baseball bat 1 ending#109" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a178(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise-  Backdoor with the baseball bat, the police station and hiT from close and hospital ending#108*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospital." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Hospital with baseball bat 4 ending#108" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a177(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the baseball bat, the police station and hiT from close and big house ending#107*/
	int y = 0;
	system("color a");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. You talk to them and you decide to unite without much trust in eachother." << endl;
	cout << "United but not trusted with baseball bat 2  ending# 107" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a176(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the baseball bat, small house and leave and keep driving ending#106*/
	int y = 0;
	system("color a");
	cout << "You chose to keep driving." << endl;
	cout << "You left the area completely and went out on your own." << endl;
	cout << "Alone with a car and a baseball bat 3 ending#106" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a175(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the baseball bat, small house and leave and hospital ending#105*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospital." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time." << endl;
	cout << "Hospital with baseball bat 3 ending#105" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a174(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the baseball bat, small house and leave and big house ending#104*/
	int y = 0;
	system("color a");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. You talk to them and you decide to unite without much trust in eachother." << endl;
	cout << "United but not trusted with baseball bat 1  ending# 104" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a173(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the baseball bat, small house and suppliez with the note and keep driving ending#103*/
	int y = 0;
	system("color a");
	cout << "You chose to keep driving." << endl;
	cout << "You left the area completely and went out on your own." << endl;
	cout << "Alone with a car and a baseball bat 2 ending#103" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a172(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the baseball bat, small house and suppliez with the note and hospital ending#102*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospital." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time." << endl;
	cout << "Hospital with the basebal bat 2 ending#102" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a171(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the baseball bat, small house and suppliez with the note and big house ending#101*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. After a conversation you understand that the supplies with the note was him." << endl;
	cout << "They didn't trust you enough and killed you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Family with the baseball bat ending#101" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a170(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise-  Backdoor with the baseball bat, small house and basement and keep driving ending#100*/
	int y = 0;
	system("color a");
	cout << "You chose to keep driving." << endl;
	cout << "You left the area completely and went out on your own." << endl;
	cout << "Alone with a car and a baseball bat 1 ending#100" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a169(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise-  Backdoor with the baseball bat, small house and basement and hospital ending#99*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospital." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Hospital with the baseball bat 1 ending#99" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a168(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise-  Backdoor with the baseball bat, small house and basement and big house ending#98*/
	int y = 0;
	system("color a");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. After a bit of talking you quickly understand that the note and and3 cans was his." << endl;
	cout << "You decide to give them to him and his family. You join forces and survive together." << endl;
	cout << "Best ending!" << endl;
	cout << "United and trusted with the baseball bat ending#98" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a167(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Frontdoor with the baseball bat, run away and car and ignore ending#97*/
	int y = 0;
	system("color 6");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "Because you provide them with a baseball bat, they will have you at a simple-protected position." << endl;
	cout << "Almost semi-protected by the milytary with baseball bat 2 ending#97" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a166(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Frontdoor with the baseball bat, run away and car and stop ending#96*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "As soon as you stop, he points a gun at you and tells you:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have any and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "baseball bat and shot 2 ending# 96" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a165(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Frontdoor with the baseball bat, snek past the zombies and car and ignore ending#95*/
	int y = 0;
	system("color 6");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "Because you provide them with a baseball bat, they will have you at a simple-protected position." << endl;
	cout << "Almost semi-protected by the milytary with baseball bat 1 ending#95" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a164(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Frontdoor with the baseball bat, snek past the zombies and car and stop ending#94*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "As soon as you stop, he points a gun at you and tells you:'Get out of the car but first let's check if you have supplies'. Unfortunately you don't have any and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "baseball bat and shot 1 ending# 94" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a163(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Frontdoor with the baseball bat, snek past the zombies and frontdoor pharmacy and sewers ending#93*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the sewers." << endl;
	cout << "Unfortunately there were many zombies, they grabbed you and killed you" << endl;
	cout << "Better luck next time" << endl;
	cout << "Knife and sewers 5 ending#93" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a162(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Frontdoor with the baseball bat, snek past the zombies and frontdoor pharmacy and car*/
	system("color 7");
	cout << "You chose to go to the car." << endl;
	cout << "You drive off the neighborhood and you reach the highway. On the distance you see a man holding a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him or you can ignore him." << endl;
	cout << "(1) Stop and help" << endl << "(2) Ignore him" << endl;
	cin >> x6;
	switch (x6) {
	case 1: {
		a203(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a204(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a162(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a161(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the knife, throw debri and car and ignore ending#90*/
	int y = 0;
	system("color 6");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "Because you provide them with a knife, they have put you at a simple-protected position." << endl;
	cout << "Almost semi-protected by the milytary 4 ending#90" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a160(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the knife, throw debri and car and stop ending#89*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "As soon as you stop, he points a gun at you and tells you:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have any and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "the knife and shot 4 ending# 89" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a159(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the knife, throw debri and pharmacy and ignore ending#88*/
	int y = 0;
	system("color a");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "Because you provide them with a knife, and some pain killers ,they will have you at a semi-protected position." << endl;
	cout << "semi-protected by the milytary with knife and painkillers 2 ending#88" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a158(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the knife, throw debri and pharmacy and stop ending#87*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "As soon as you stop, he points a gun at you and tells you:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Fortunately you have some painkillers and he spares you. He steals your painkillers and you car." << endl;
	cout << "Better luck next time" << endl;
	cout << "alone, stolen with a knife 2 ending# 87" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a157(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the knife, knife the zombie, car and ignore ending#86*/
	int y = 0;
	system("color 4");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "Because you provide them with a knife, the have at a simple-protected position." << endl;
	cout << "Almost semi-protected by the milytary 3 ending#86" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a156(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the knife, knife the zombie, car stop ending#85*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "As soon as you stop, he points a gun at you and tells you:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have any and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "The knife and shot 3 ending# 85" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a155(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the knife, knife the zombie and pharmacy and ignore ending#84*/
	int y = 0;
	system("color a");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "Because you provide them with a knife, and some pain killers ,they will have you at a semi-protected position." << endl;
	cout << "semi-protected by the milytary with knife and painkillers 1 ending#84" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a154(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Basement with the knife, knife the zombie and pharmacy and stop ending#83*/
	int y = 0;
	system("color a");
	cout << "You chose to stop and help him." << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Fortunately you have some painkillers with you." << endl;
	cout << "He spares your life but he also steals the car. And now you are alone on the road." << endl;
	cout << "Better luck next time." << endl;
	cout << "Abandoned on the road with the gun and painkillers 1 ending#83" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a153(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the knife, police station and search for another exit and walk ending#82*/
	int y = 0;
	system("color 6");
	cout << "You chose to walk." << endl;
	cout << "Walking alone with a knife 2 ending#82" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a152(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the knife, police station and search for another exit and hospital ending#81*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospital." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time." << endl;
	cout << "Hospital with a knife 3 ending#81" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a151(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the knife, police station and search for another exit and big house ending#80*/
	int y = 0;
	system("color a");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. You talk to them and you decide to unite without much trust in eachother." << endl;
	cout << "United but not trusted 4 ending# 80" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a150(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the knife, police station and knife it up close and walk ending#79*/
	int y = 0;
	system("color 6");
	cout << "You chose to walk." << endl;
	cout << "Walking alone with a knife 1 ending#79" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a149(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the knife, police station and knife it up close and hospital ending#78 */
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospital." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Hospital with a knife 2 ending#78" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a148(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the knife, police station and knife it up close and big house ending#77*/
	int y = 0;
	system("color a");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. You talk to them and you decide to unite without much trust in eachother." << endl;
	cout << "United but not trusted 3 ending# 77" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a147(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with a knife small house and leave and keep driving ending#76*/
	int y = 0;
	system("color a");
	cout << "You chose to keep driving." << endl;
	cout << "You left the area completely and went out on your own." << endl;
	cout << "Alone with a car and a knife ending#76" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a146(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with a knife small house and leave and hospital ending#75*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospital." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Hospital with a knife 1 ending#75" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a145(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with a knife small house and leave and big house ending#74*/
	int y = 0;
	system("color a");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. You talk to them and you decide to unite without much trust in eachother." << endl;
	cout << "United but not trusted 2 ending# 74" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a144(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with a knife small house and take the supplies and keep driving ending#73*/
	int y = 0;
	system("color a");
	cout << "You chose to keep driving." << endl;
	cout << "You left the area completely and went out on your own." << endl;
	cout << "Alone with a knife and a car 1 ending#73" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a143(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with a knife small house and take the supplies and hospital ending#72*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospital." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Hospital with knife 1 ending#72" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a142(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with a knife small house and take the supplies and big house ending#71*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. After a conversation you understand that the supplies with the note was him." << endl;
	cout << "They didn't trust you enough and killed you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Family with the knife 1 ending#71" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a141(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with a knife small house, basement and keep driving ending#70*/
	int y = 0;
	system("color 6");
	cout << "You chose to keep driving" << endl;
	cout << "Knife and car ending#70" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a140(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with a knife small house, basement and hopital ending#69*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospial." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Hospital with knife 1 ending#69" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a139(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with a knife small house, basement and big house ending#68*/
	int y = 0;
	system("color a");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. You talk to them and you decide to unite without much trust in eachother." << endl;
	cout << "United but not trusted 4 ending# 68" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a138(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Knife and Frontdoor, ran away car and ignore ending#67*/
	int y = 0;
	system("color 6");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "Because you provide them with a knife, the have at a simple-protected position." << endl;
	cout << "Almost semi-protected by the milytary 3 ending#67" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a137(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Knife and Frontdoor, ran away car and stop ending#66*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "As soon as you stop, he points a gun at you and tells you:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have any and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "the knife and shot 3 ending# 66" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a136(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Knife and Frontdoor, sneak past the zombies, car and ignore ending#65*/
	int y = 0;
	system("color 6");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there." << endl;
	cout << "You arrive there and they say to you that they will protect you and they have supplies. Because you provide them with a knife, the have at a simple - protected position." << endl;
	cout << "Almost semi-protected by the milytary 2 ending#65" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a135(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Knife and Frontdoor, sneak past the zombies, car and stop ending#64*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "As soon as you stop, he points a gun at you and tells you:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have any and he shoots you." << endl;
	cout << "Better luck next time." << endl;
	cout << "The knife and shot ending#64" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a134(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Knife and Frontdoor, sneak past the zombies, pharmacy frontdoor and sewers ending#63*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the sewers" << endl;
	cout << "Unfortunately there were many zombies, they grabbed you and killed you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Knife and sewers ending#63" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a133(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Knife and Frontdoor, sneak past the zombies, pharmacy frontdoor and car*/
	system("color 7");
	cout << "You chose to go to the car." << endl;
	cout << "You drive off the neighborhood and you reach the highway." << endl;
	cout << "On the distance you see a man holding a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x6;
	switch (x6) {
	case 1: {
		a201(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a202(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a133(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a132(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Knife and Frontdoor, Knife the zombies, cut the handand tourniquet it and ignore it ending60#*/
	int y = 0;
	system("color 4");
	cout << "You chose to ignore it" << endl;
	cout << "After a while you start losing more and more blood and pass out eventually." << endl;
	cout << "Better luck next time" << endl;
	cout << "Passed out on the road ending#60" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a131(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Knife and Frontdoor, Knife the zombies, cut the hand and tourniquet it, backdoor ending#58*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the backdoor." << endl;
	cout << "Unfortunately there were many zombies and you couldn't fight back and died." << endl;
	cout << "Better luck next time." << endl;
	cout << "1 hand and the pharmacy backdoor ending#58" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a130(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise-  Knife and Frontdoor, Knife the zombies, cut the hand, tourniquet it and frontdoor*/
	system("color 7");
	cout << "You chose to go to the frontdoor." << endl;
	cout << "Luckily you find some painkillers, you use them immedietly and you feel a little better now." << endl;
	cout << "You can choose now to go to the car or the sewers." << endl;
	cout << "What do you choose? " << endl;
	cout << "(1) Go to the car" << endl << "(2) Go to the sewers" << endl;
	cin >> x6;
	switch (x6) {
	case 1: {
		a199(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a200(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a130(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a129(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Basement with the gun, throw debri, go to the car and stop and help ending#54*/
	int y = 0;
	system("color a");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies" << endl;
	cout << "But because you only have a gun with bullets they say that they will put you on a semi-protected position by the military." << endl;
	cout << "Cogratulations on surving!" << endl;
	cout << "Almost fully-protected by the military with no bullets 2 ending#.54" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a128(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Basement with the gun, throw debri, go to the car and stop and help ending#53*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately, you don't have supplies with you and shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Shot in the head with the gun 4 ending#53" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a127(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Basement with the gun, throw debri, go to the pharmacy and ignore ending#52*/
	int y = 0;
	system("color a");
	cout << "You chose to ignore him." << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there. You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "But because you have a gun with bullets and some painkillers, they say that they will put you on the best protected position by the military." << endl;
	cout << "Cogratulations on surving!" << endl;
	cout << "Fully-protected by the military with bullets and painkillers 2 ending#.52" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a126(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Basement with the gun, throw debri, go to the pharmacy and stop and help ending#51*/
	int y = 0;
	system("color 6");
	cout << "You chose to stop and help him." << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Fortunately you have some painkillers with you." << endl;
	cout << "He spares your life but he also steals the car. And now you are alone on the road." << endl;
	cout << "Better luck next time." << endl;
	cout << "Abandoned on the road with the gun and painkillers 2 ending#51" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a125(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Basement with the gun, shoot the zombie, throw the supplies from the roof and go to the next house outside ending#50*/
	int y = 0;
	system("color 4");
	cout << "You chose to the next house by going outside" << endl;
	cout << "Unfortunately the zombies see you, they rush you and they kill you" << endl;
	cout << "Eaten on the road ending#50" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a124(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Basement with the gun, shoot the zombie, throw the supplies from the roof and go to the next house jumping ending#49*/ 
	int y = 0;
	system("color 6");
	cout << "You chose to go to the next house by jumping." << endl;
	cout << "You successfully make it and you stay there and hide." << endl;
	cout << "Hidden with supplies ending#49" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a123(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start){
	/*Sixth choice- Basement with the gun, shoot the zombie, throw the supplies from the roof and stay in the roof ending#48*/ 
	int y = 0;
	system("color 4");
	cout << "You chose to stay in the roof." << endl;
	cout << "Unfortunately with no water and no food, you die in 2 weeks." << endl;
	cout << "Dead and hungry at the roof ending#48" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a122(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, police station, search for another exit and levae by foot ending#47*/
	int y = 0;
	system("color 6");
	cout << "You chose to leave by foot and survive on your own." << endl;
	cout << "No car but 2 bullets ending#47" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a121(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, police station, search for another exit and hospital ending#46*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospial." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time." << endl;
	cout << "Hospital with 2 bullets 4 ending#46" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a120(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, police station, search for another exit and big house ending#45*/
	int y = 0;
	system("color a");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. You talk to them and you decide to unite without much trust in eachother." << endl;
	cout << "United but not trusted 3 ending# 45" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a119(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, police station, shoot the zombie and hospital ending#44*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospial." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Hospital with no bullets ending#44" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a118(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice-  Backdoor with the gun, police station, shoot the zombie and big house ending#43*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. You talk to them and you decide to unite without much trust in eachother." << endl;
	cout << "United but not trusted 2 ending# 43" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a117(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, small house, just leave and keep driving ending#42*/
	int y = 0;
	system("color a");
	cout << "You chose to keep driving." << endl;
	cout << "You left the area completely and went out on your own." << endl;
	cout << "Alone with a car and 2 bullets 3 ending#42" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a116(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, small house, just leave and hospital ending#41*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospial." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time." << endl;
	cout << "Hospital with 2 bullets 3 ending#41" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a115(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, small house, just leave and big house ending#40*/
	int y = 0;
	system("color a");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside." << endl;
	cout << "You talk to them and you decide to unite without much trust in eachother." << endl;
	cout << "United but not trusted 1 ending# 40" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a114(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the gun, small house, take the supplies and keep driving ending#39*/
	int y = 0;
	system("color a");
	cout << "You chose to keep driving." << endl;
	cout << "You left the area completely and went out on your own." << endl;
	cout << "Alone with a car and 2 bullets 2 ending#39" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a113(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choise- Backdoor with the gun, small house, take the supplies and hospital ending#38*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospial." << endl;
	cout << "After going in to search, some zombies surprize you and kill you." << endl;
	cout << "Better luck next time." << endl;
	cout << "Hospital with 2 bullets 2 ending#38" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a112(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, small house, take the supplies and big house ending#37*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside. After a conversation you understand that the supplies with the note was him." << endl;
	cout << "They didn't trust you enough and killed you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Family with 2 bullets ending#37" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a111(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, small house and basement and keep driving ending#36*/
	int y = 0;
	system("color a");
	cout << "You chose to keep driving." << endl;
	cout << "You left the area completely and went out on your own." << endl;
	cout << "Alone with a car and 2 bullets 1 ending#36" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a110(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, small house and basement and hospital ending#35*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the hospial."<< endl;
	cout << "After going in to search, some zombies surprize youand kill you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Hospital with 2 bullets 1 ending#35" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a109(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Backdoor with the gun, small house and basement and big house ending#34*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the big house." << endl;
	cout << "You see a family inside." << endl;
	cout << "After a bit of talking you quickly understand that the note and the 3 cans was his." << endl;
	cout << "You decide to give them to him and his family." << endl;
	cout << "You join forces and survive together." << endl;
	cout << "Best ending!" << endl;
	cout << "United and trusted ending#34" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a108(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Frontfoor with the gun, running away, car, ignore him ending#33*/
	int y = 0;
	system("color 4");
	cout << "You chose to ignore him" << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there." << endl;
	cout << "You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "But because you only have a gun without bullets they say that they will put you on a semi-protected position by the military." << endl;
	cout << "Cogratulations on surving!" << endl;
	cout << "Almost fully-protected by the military with 2 bullets 1 ending#.33" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a107(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Frontfoor with the gun, running away, car, stop and help ending#32*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have supplies with you and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Shot in the head with hte gun 3 ending#32" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a106(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Frontdoor with the gun, sneak past the zombies, go to the car and ignore him ending#31*/
	int y = 0;
	system("color a");
	cout << "You chose to ignore him" << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there." << endl;
	cout << "You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "But because you only have a gun without bullets they say that they will put you on a semi-protected position by the military." << endl;
	cout << "Cogratulations on surving!" << endl;
	cout << "Semi-protected by the military with no bullets 2 ending#31" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a105(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Frontdoor with the gun, sneak past the zombies, go to the car and stop and help him ending#30*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him." << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have supplies with you and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Shot in the head with the gun 2 ending#30" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
} 
void a104(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Frontdoor with the gun, sneak past the zombies, pharmacy frontdoor and sewers ending#29*/
	int y = 0;
	system("color 4");
	cout << "You tried going into the sewers" << endl;
	cout << "Unfortunately you don't notice that there are too many zombies and they kill you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Full gun with painkillers ending#29" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a103(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Frontdoor with the gun, sneak past the zombies, pharmacy frontdoor and car*/
	system("color 7");
	cout << "You chose to go to the car." << endl;
	cout << "Luckily the car works and you escape the neighborhood and reach the highway with success." << endl;
	cout << "On the road you notice a man having a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him, or you can choose to ignore him." << endl;
	cout << "What do you choose?" << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x6;
	switch(x6) {
	case 1: {
		a197(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a198(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a103(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a102(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Frontdoor with the gun, shoot the zombies, try driving the car and ignore him ending#26*/
	int y = 0;
	system("color a");
	cout << "You chose to ingnore him" << endl;
	cout << "After a week of driving, you notice a military facillity and you decide to go there." << endl;
	cout << "You arrive there and they say to you that they will protect you and they have supplies." << endl;
	cout << "But because you only have a gun without bullets they say that they will put you on a semi-protected position by the military." << endl;
	cout << "Congratulations on surving!!" << endl;
	cout << "Semi-protected by the military with no bullets 1 ending#.26" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a101(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Sixth choice- Frontdoor with the gun, shoot the zombies, try driving the car and stop and help him ending#25*/
	int y = 0;
	system("color 4");
	cout << "You chose to stop and help him" << endl;
	cout << "He points a gun at you and says:'Get out of the car but first let's check if you have supplies'." << endl;
	cout << "Unfortunately you don't have supplies with you and he shoots you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Shot in the head with the gun 1 ending#25" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a100(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise-  Basement with the baseball bat, throw debri and sewers ending#126*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the sewers." << endl;
	cout << "Unfortunately, there were too many zombies and you couldn't escape." << endl;
	cout << "They caught you and thay ate you" << endl;
	cout << "Better luck next time" << endl;
	cout << "Baseball with debri in the sewers ending#126" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a99 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the baseball bat, throw debri and car*/
	system("color 7");
	cout << "You chose to go to the car" << endl;
	cout << "Luckily the car works and you successfully avoid any zombie interaction in the neighborhood and you reach the highway." << endl;
	cout << "On the highway, you see a man holding a sign saying 'Help'." << endl;
	cout << "You can choose to stop and and help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a195(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a196(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a99(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a98 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the baseball bat, throw debri and pharmacy*/
	system("color 7");
	cout << "You chose to go to the pharmacy." << endl;
	cout << "You go inside, you find some painkillers and leave. You get out and go to the car." << endl;
	cout << "Luckily the car works and you get out from the neighborhood. You reach the highway." << endl;
	cout << "On the road you see in a distance a man with a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a193(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a194(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a98(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a97 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choice- Basement with the baseball bat, hit the zombie and sewers*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the sewers." << endl;
	cout << "Unfotunately there were too many zombies and you couldn't escape. They caught you and they ate you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Baseball bat in the sewers ending#125" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a96 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choice- Basement with the baseball bat, hit the zombie and car*/
	system("color 7");
	cout << "You chose to go to the car." << endl;
	cout << "Luckily the car works and you successfully avoid any zombie interaction in the neighborhood and you reach the highway." << endl;
	cout << "On the highway, you see a man holding a sign saying 'Help'." << endl;
	cout << "You can choose to stop and and help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a191(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a192(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a96(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a95 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choice- Basement with the baseball bat, hit the zombie and pharmacy*/
	system("color 7");
	cout << "You chose to go to the pharmacy." << endl;
	cout << "You go inside, you find some painkillers and leave. You get out and go to the car." << endl;
	cout << "Luckily the car works and you get out from the neighborhood. You reach the highway." << endl;
	cout << "On the road you see in a distance a man with a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ingore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a189(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a190(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a95(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a94 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the baseball bat, the police station and search for an exit*/
	system("color 7");
	cout << "You chose to search for an exit" << endl;
	cout << "Luckily you find an opened window and you quickly go outside. You see at a distance that there is a car and you quickly rush towards it." << endl;
	cout << "ou start it and you quickly leave the area. After a while, you notice that the gas tank for your car is emptyand you stop." << endl;
	cout << "You get out of the car and see a big house and a hospital." << endl;
	cout << "You can choose to go to the big house, you can go to the hospital or you can leave the area by foot." << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the pharmacy" << endl << "(3) Leave the area by foot" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a180(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a181(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a182(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a94(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a93 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the baseball bat, the police station and hiT from close*/
	system("color 7");
	cout << "You tried hitiing it up close with the baseball bat." << endl;
	cout << "You successfully kill it but the baseball bat and it doesn't break. When you go outside, you notice a carand you go rushing there." << endl;
	cout << "Luckily the car works and you drive off the neighborhood. After a while you notice that the gas tank of your car is already depleted" << endl;
	cout << "You get out of the car and you notice a hospital and big house." << endl;
	cout << "You can go to the big house, you can go to the hospital, or you can leave the area by walking." << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the pharmacy" << endl << " (3) Leave the area by walking" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a177(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a178(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a179(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a93(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a92 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the baseball bat, the police station and throw*/
	int y = 0;
	system("color 4");
	cout << "You chose to throw the baseball bat at the zombie's head" << endl;
	cout << "Unfortunately you miss and the zombies caught up with you" << endl;
	cout << "They throw you to the ground and eat you" << endl;
	cout << "Better luck next time" << endl;
	cout << "Baseball bat throw ending#124" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a91 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise-  Backdoor with the baseball bat, small house and leave*/
	system("color 7");
	cout << "You chose to leave without taking anything." << endl;
	cout << "You see in the distance that there is a car and no zombies. You tried the car and luckily it still had little gas in it." << endl;
	cout << "You drive for a while until you finally find another neighborhood. You see a big house and a hospital." << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Keep driving" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a174(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a175(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a176(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a91(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a90 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the baseball bat, small house and suppliez with the note*/
	system("color 7");
	cout << "You chose to take the supplies with the note and leave" << endl;
	cout << "You see in the distance that there is a car and no zombies. You tried the car and luckily it still had little gas in it." << endl;
	cout << "You drive for a while until you finally find another neighborhood. You see a big house and a hospital." << endl;
	cout << "You can choose to go to the big house, you can go to the hospital or you can keep driving" << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Keep driving" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a171(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a172(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a173(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a90(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a89 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the baseball bat, small house and basement*/
	system("color 7");
	cout << "You chose to go to the basement" << endl;
	cout << "There are still no zombies present. You find the 3 cans of soup and you decide to leave." << endl;
	cout << "You see in the distance that there is a car and no zombies. You tried the car and luckily it still had little gas in it." << endl;
	cout << "You drive for a while until you finally find another neighborhood. You see a big house and a hospital." << endl;
	cout << "You can choose to go to the big house, you can go to the hospital, or you can keep driving" << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Keep driving" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a168(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a169(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a170(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a89(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a88 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the baseball bat, run away and run away*/
	int y = 0;
	system("color 4");
	cout << "You tried running" << endl;
	cout << "Unfortunately after a while, there were too many zombies and you couldn't outrun them." << endl;
	cout << "You tried fighting but you failed. They caught you and they ate you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Running with a baseball bat ending#123" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a87 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choice- Frontdoor with the baseball bat, run away and sewers*/
	int y = 0;
	system("color 4");
	cout << "You tried escaping into the sewers" << endl;
	cout << "Unfortunately the sewers had zombies everywhere too. You could not escape and they ate you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Sewer with the baseball bat ending#122" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a86 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the baseball bat, run away and car*/
	system("color 7");
	cout << "You rushed straight away for the car" << endl;
	cout << "Luckily it works and you leave the neighborhood. You reach the highway." << endl;
	cout << "On the road you see from a distance a man holding a sign saying 'Help'." << endl;
	cout << "You can stop to help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a166(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a167(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a86(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a85 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise-  Frontdoor with the baseball bat, snek past the zombies and car*/
	system("color 7");
	cout << "You went directly to the car" << endl;
	cout << "Luckily the car works and you successfully avoid any zombie interaction in the neighborhood and you reach the highway." << endl;
	cout << "On the highway, you see a man holding a sign saying 'Help'." << endl;
	cout << "You can choose to stop and and help him, or you can ignore him" << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a164(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a165(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a85(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a84 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the baseball bat, snek past the zombies and backdoor pharmacy ending#121*/
	int y = 0;
	system("color 4");
	cout << "You went through the pharmacy's backdoor" << endl; 
	cout << "When you went through the backdoor, some zombies surprize you at the door. They throw you to the ground and eat you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Backdoor pharmacy with the baseball bat ending#121";
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a83 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the baseball bat, snek past the zombies and frontdoor pharmacy*/
	system("color 7");
	cout << "You went through the pharmacy's frontdoor." << endl;
	cout << "Luckily you can't see any zombies present." << endl;
	cout << "After searching for supplies, you finally find some painkillers. You get outside." << endl;
	cout << "Are you going to try the car or will you go for the sewers?" << endl;
	cout << "(1) Try the car" << endl << "(2) Go to the sewers" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a162(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a163(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a83(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a82 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the knife, throw debri and sewers*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the sewers." << endl;
	cout << "Unfotunately there were too many zombies and you couldn't escape." << endl;
	cout << "They caught you and they ate you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Knife and debri in the sewers ending#24" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a81 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the knife, throw debri and car*/
	system("color 7");
	cout << "You chose to go to the car" << endl;
	cout << "Luckily the car works and you successfully avoid any zombie interaction in the neighborhood and you reach the highway." << endl;
	cout << "On the highway, you see a man holding a sign saying 'Help me'." << endl;
	cout << "You can choose to stop and and help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a160(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a161(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a81(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a80 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the knife, throw debri and pharmacy*/
	system("color 7");
	cout << "You chose to go to the pharmacy" << endl;
	cout << "You go inside, you find some painkillers and leave. You get out and go to the car." << endl;
	cout << "Luckily the car works and you get out from the neighborhood. You reach the highway." << endl;
	cout << "On the road you see in a distance a man with a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a158(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a159(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a80(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a79 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the knife, knife the zombie and sewers ending#23*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the sewers." << endl;
	cout << "Unfotunately there were too many zombies and you couldn't escape. They caught you and they ate you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Broken knife and debri in the sewers ending#23" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a78 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the knife, knife the zombie and car*/
	system("color 7");
	cout << "You chose to go to the car" << endl;
	cout << "Luckily the car works and you successfully avoid any zombie interaction in the neighborhood and you reach the highway." << endl;
	cout << "On the highway, you see a man holding a sign saying 'Help'." << endl;
	cout << "You can choose to stop and and help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a156(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a157(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a78(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a77 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the knife, knife the zombie and pharmacy*/
	system("color 7");
	cout << "You chose to go to the pharmacy" << endl;
	cout << "You go inside, you find some painkillers and leave. You get out and go to the car." << endl;
	cout << "Luckily the car works and you get out from the neighborhood. You reach the highway." << endl;
	cout << "On the road you see in a distance a man with a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a154(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a155(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a77(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a76 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the knife, police station and search for another exit*/
	system("color 7");
	cout << "You chose to search for an exit." << endl;
	cout << "Luckily you find an opened window and you quickly go outside. You see at a distance that there is a car and you quickly rush towards it. You start it and you quickly leave the area." << endl;
	cout << "After a while, you notice that the gas tank for your car is empty and you stop. You get out of the car and see a big house and a hospital." << endl;
	cout << "You can choose to go to the big house, you can go to the hospital or you can leave the area by foot." << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Leave the area by foot" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a151(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a152(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a153(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a76(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a75 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the knife, police station and knife it up close*/
	system("color 7");
	cout << "You tried knifing it up close." << endl;
	cout << "You successfully kill it but you didn't have the time to take your knife back, so you leave without it." << endl;
	cout << "When you go outside, you notice a car and you go rushing there." << endl;
	cout << "Luckily the car works and you drive off the neighborhood. After a while you notice that the gas tank of your car is already depleted." << endl;
	cout << "You get out of the car and you notice a hospital and big house." << endl;
	cout << "You can go to the big house, you can go to the hospital, or you can leave the area by walking." << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Leave the area by walking" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a148(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a149(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a150(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a75(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a74 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the knife, police station and throw the knife ending#74*/
	int y = 0;
	system("color 4");
	cout << "You chose to throw the knife" << endl;
	cout << "Unfortutely you miss and the zombies caught up with you. The throw you to the ground and eat you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Knife throw ending#22" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a73 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with a knife small house and leave*/
	system("color 7");
	cout << "You chose to leave without taking anything." << endl;
	cout << "You see in the distance that there is a car and no zombies. You tried the car and luckily it still had little gas in it." << endl;
	cout << "You drive for a while until you finally find another neighborhood. You see a big house and a hospital." << endl;
	cout << "You can choose to go to the big house, you can go to the hospital, or you can keep driving" << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Keep driving" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a145(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a146(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a147(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a73(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a72 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with a knife small house and take the supplies*/
	system("color 7");
	cout << "You chose to take the supplies with the note and leave" << endl;
	cout << "You see in the distance that there is a car and no zombies. You tried the car and luckily it still had little gas in it." << endl;
	cout << "You drive for a while until you finally find another neighborhood. You see a big house and a hospital." << endl;
	cout << "You can choose to go to the big house, or you can go to the hospital, or you can keep driving" << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Keep driving" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a142(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a143(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a144(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a72(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a71 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with a knife small house and basement*/
	system("color 7");
	cout << "You chose to go to the basement" << endl;
	cout << "There are still no zombies present. You find the 3 cans of soup and you decide to leave." << endl;
	cout << "You see in the distance that there is a car and no zombies. You tried the car and luckily it still had little gas in it." << endl;
	cout << "You drive for a while until you finally find another neighborhood. You see a big house and a hospital." << endl;
	cout << "You can choose to go to the big house, you can go to the hospital or you can keep driving" << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Keep driving" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a139(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a140(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a141(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a71(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a70 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Knife and Frontdoor, ran away and running away ending#21*/
	int y = 0;
	system("color 4");
	cout << "You tried running" << endl;
	cout << "Unfortunately after a while, there were too many zombies and you couldn't outrun them." << endl;
	cout << "You tried fighting but you failed. They caught you and they ate you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Running with a knife fighting ending#21" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a69 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Knife and Frontdoor, ran away and sewers ending#20*/
	int y = 0;
	system("color 4");
	cout << "You tried escaping by going into the sewers." << endl;
	cout << "Unfortunately the sewers had zombies everywhere too. You could not escape and they ate you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Sewerwith a knife ending#20" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a68 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start){
	/*Fifth choise-Knife and Frontdoor, ran away and car*/
	system("color 7");
	cout << "You rushed straight away for the car." << endl;
	cout << "Luckily it works and you leave the neighborhood. You reach the highway." << endl;
	cout << "On the road you see from a distance a man holding a sign saying 'Help'." << endl;
	cout << "You can stop and help him, or you can ignore him" << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a137(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a138(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a68(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a67 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise-Knife and Frontdoor, sneak past the zombies and car*/
	system("color 7");
	cout << "You went directly to the car" << endl;
	cout << "Luckily the car works and you successfully avoid any zombie interaction in the neighborhood and you reach the highway." << endl;
	cout << "On the highway, you see a man holding a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him, or you can ignore him" << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a135(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a136(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a67(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a66 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise-Knife and Frontdoor, sneak past the zombies and pharmacy backdoor ending#19*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the backdoor" << endl;
	cout << "When you went through the backdoor, some zombies surprize you at the door. They throw you to the ground and eat you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Backdoor pharmacy with the knife ending#19" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a65 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise-Knife and Frontdoor, sneak past the zombies and pharmacy frontdoor*/
	system("color 7");
	cout << "You went through the pharmacy's frontdoor." << endl;
	cout << "Luckily you can't see any zombies present. After searching for supplies, you finally find some painkillers. You get outside." << endl;
	cout << "Are you going to try the car or will you go for the sewers ? " << endl;
	cout << "(1) Try the car" << endl << "(2) Go to the sewers" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a133(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a134(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a65(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a64 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise-  Knife and Frontdoor, Knife the zombies, ignore it ending#18*/
	int y = 0;
	system("color 4");
	cout << "You chose to ignore it" << endl;
	cout << "After a while you start experiencing hallucinations and you start walking slower." << endl;
	cout << "After that you pass out and you become a zombie" << endl;
	cout << "Better luck next" << endl;
	cout << "One of us ending#18" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a63 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Knife and Frontdoor, Knife the zombies, go to the pharmacy, cut, aourniquet and painkillels ending#17*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the pharmacy to cut it, tourniquet your hand, and search for some painkillers." << endl;
	cout << "Unfortunately while walking, you start experiencing hallucinations and you start walking slower." << endl;
	cout << "After that you pass out and you become a zombie." << endl;
	cout << "Better luck next time" << endl;
	cout << "Half, but one of us ending#17" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a62 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise - Knife and Frontdoor, Knife the zombies, cut the handand tourniquet it */
	system("color 7");
	cout << "You chose to cut your hand and tourniquet it." << endl;
	cout << "After that, you can decide if you want to go to the pharmacy from the front door to search for painkillers, you can choose to go to the" << endl << "pharmacy from the backdoor door to search for painkillers, you can ignore it and go to the car." << endl;
	cout << "(1) Go to the pharmacy from the frontdoor" << endl << "(2) Go to the pharmacy from the backdoor" << endl << "(3) Just ignore it" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a130(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a131(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a132(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a62(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a61 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the gun, throw debri and go to the sewers*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the sewers." << endl;
	cout << "Unfotunately there were too many zombies and you couldn't escape." << endl;
	cout << "They caught you and they ate you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Gun and debri in the sewers ending#16" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a60 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the gun, throw debri and go to the car*/
	system("color 7");
	cout << "You chose to go to the car" << endl;
	cout << "Luckily the car works and you successfully avoid any zombie interaction in the neighborhood and you reach the highway." << endl;
	cout << "On the highway, you see a man holding a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him or you can ignore him" << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a128(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a129(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a60(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a59 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the gun, throw debri and go to the pharmacy*/
	system("color 7");
	cout << "You chose to go to the pharmacy." << endl;
	cout << "You go inside, you find some painkillers and leave. You get out and go to the car." << endl;
	cout << "Luckily the car works and you get out from the neighborhood." << endl;
	cout << "You reach the highway. On the road you see in a distance a man with a sign saying 'Help'." << endl;
	cout << "You can choose to stop and help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a126(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a127(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a59(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a58 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the gun, shoot the zombie and throw the supplies from the roof*/ 
	system("color 7");
	cout << "You chose to go to the roof" << endl;
	cout << "You reach the roof and throw at a distance the water bottle and the canned food on each house's side." << endl;
	cout << "You successfully distract the zombies away from you and you escape death....for now. " << endl;
	cout << "After a while, when you notice that the zombies have calmed down, you see that the house besides you has supplies." << endl;
	cout << "You can choose to stay in the roof, you can choose to go to the next house by jumping from " << endl << "the roof, or you can go outside to go to the next house." << endl;
	cout << "What do you choose?" << endl;
	cout << "(1) Stay in the roof" << endl << "(2) Go to the next house by jumping from the roof" << endl << "(3) Go outside to go to the next house" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a123(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a124(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a125(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a58(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a57 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the gun, shoot the zombie and stay in the main floor ending#15*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the main floor and stay there." << endl;
	cout << "The zombies notice you and rush towards you. They trap you and you can't escape" << endl;
	cout << "With no bullets they caught you and ate you." << endl;
	cout << "Better luck next time" << endl;
	cout << "Main room ending#15" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a56 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Basement with the gun, shoot the zombie and stay in the basement ending#14*/
	int y = 0;
	system("color 6");
	cout << "You chose to stay inside the basement." << endl;
	cout << "You quickly shut the basement's door and you hide. After some minutes you hear glass break inside the house." << endl;
	cout << "You realise that the zombies came inside your house." << endl;
	cout << "You don't make any noise, the zombies don't come in, but now you are stuck there forever." << endl;
	cout << "Better luck next time" << endl;
	cout << "Alone and trapped in the basement ending#14" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a55 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the gun, police station and search for another exit*/
	system("color 7");
	cout << "You chose to search for an exit." << endl;
	cout << "Luckily you find an opened window and you quickly go outside." << endl;
	cout << "You see at a distance that there is a car and you quickly rush towards it. You start it and you quickly leave the area." << endl;
	cout << "After a while, you notice that the gas tank for your car is empty and you stop." << endl;
	cout << "You get out of the car and see a big house and a hospital." << endl;
	cout << "You can choose to go to the big house, you can go to the hospital or you can leave the area by foot." << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Leave the area by foot" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a120(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a121(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a122(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a55(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a54 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the gun, police station and hit the zombie with the grip ending#13*/
	int y = 0;
	system("color 4");
	cout << "You chose to hit it with the grip of your gun from close" << endl;
	cout << "Unfortunately it is not enough to kill it. The zombie bites you and kills you" << endl;
	cout << "Better luck next time" << endl;
	cout << "Police station with the gun ending #13" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a53 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the gun, police station and shoot the zombie*/
	system("color 7");
	cout << "You tried shooting it, you hit it in the head and you killed it." << endl;
	cout << "You exit through the door and you rush towards the car, you start it and it begins. You quickly leave the area." << endl;
	cout << "After a while there is no gas and the car stops. You get out of the car and you see a big house and a hospital." << endl;
	cout << "Where do you want to go now?" << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a118(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a119(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a53(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a52 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the gun, small house and just leave*/
	system("color 7");
	cout << "You chose to leave without taking anything." << endl;
	cout << "You see in the distance that there is a car and no zombies." << endl;
	cout << "You tried the car and luckily it still had little gas in it. You drive for a while until you finally find another neighborhood." << endl;
	cout << "You see a big house and a hospital" << endl;
	cout << "You can choose to go to the big house, you can go to the hospital or you can keep driving" << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Keep driving" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a115(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a116(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a117(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a52(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a51 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the gun, small house and take the supplies*/
	system("color 7");
	cout << "You chose to take the supplies with the note and leave." << endl;
	cout << "You see in the distance that there is a car and no zombies. You tried the car and luckily it still had little gas in it." << endl;
	cout << "You drive for a while until you finally find another neighborhood. You see a big house and a hospital." << endl;
	cout << "You can choose to go to the big house, you can go to the hospital, or you can keep driving." << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Keep driving" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a112(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a113(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a114(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a51(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a50 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Backdoor with the gun, small house and basement*/
	system("color 7");
	cout << "You chose to go to the basement" << endl;
	cout << "There are still no zombies present" << endl;
	cout << "You find 3 cans of soup and you decide to leave." << endl;
	cout << "You see in the distance that there is a car and no zombies. You tried the car and luckily it still had little gas in it." << endl;
	cout << "You drive for a while until you finally find another neighborhood. You see a big house and a hospital." << endl;
	cout << "You can choose to go to the big house, you can go to the hospital ore you can keep driving" << endl;
	cout << "(1) Go to the big house" << endl << "(2) Go to the hospital" << endl << "(3) Keep driving" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a109(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a110(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a111(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default:
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a50(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
}
void a49 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the gun, run away and keep running*/
	int y = 0;
	system("color 4");
	cout << "You tried running" << endl;
	cout << "Unfortunately after a while, there were too many zombies and you couldn't outrun them." << endl;
	cout << "They caught you and ate you" << endl;
	cout << "Better luck next time" << endl;
	cout << "Running with a gun fighting ending#12" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a48 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the gun, run away and sewer*/
	int y = 0;
	system("color 4");
	cout << "You tried escaping by going into the sewers." << endl;
	cout << "Unfortunately the sewers had zombies everywhere too. You could not escaoe and they ate you" << endl;
	cout << "Better luck next time" << endl;
	cout << "Sewer with a loaded gun ending#11" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a47 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontfoor with the gun, running away and car*/
	system("color 7");
	cout << "You rushed straight away for the car" << endl;
	cout << "Luckily the car works and you escape the neighborhood and you reach the highway with successs." << endl;
	cout << "On the road tou notice a man having a sign saying 'Help'" << endl;
	cout << "You can choose to stop and help him, or you can choose to ignore him." << endl;
	cout << "What do you choose?" << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a107(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a108(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a47(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a46 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the gun, sneak past the zombies and go to the car*/
	system("color 7");
	cout << "You went directly to teh car" << endl;
	cout << "Luckily the car works and you successfully avoid any zombie interaction in the neighborhood." << endl;
	cout << "You reach the highway" << endl;
	cout << "On the highway, you see a man holding a sign saying  'Help me'" << endl;
	cout << "You can choose to stop and help him, or you can ignore him." << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a105(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a106(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a46(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a45 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the gun, sneak past the zombies, Backdoor pharmacy*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the pharmacy's backdoor";
	cout << "When you went trough the backdoor, some zombies surpreze you at the door" << endl;
	cout << "They throw you to the ground and eat you" << endl;
	cout << "Better luck next time" << endl;
	cout << "Backdoor pharmacy with the gun ending#10" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a44 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the gun, sneak past the zombies and pharmacy frontdoor*/
	system("color 7");
	cout << "You went through the pharmacy's frontdoor." << endl;
	cout << "Luckily you can't see any zombies present." << endl;
	cout << "After searching for supplies, you finally find some painkillers." << endl;
	cout << "You get outside" << endl;
	cout << "Are you going to try the car, or will you go to the sewers" << endl;
	cout << "(1) Try the car" << endl << "(2) Go to the sewers" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a103(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a104(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a44(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a43 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the gun, Shoot the zombies and try running away*/
	int y = 0;
	system("color 4");
	cout << "You tried running" << endl;
	cout << "Unfortunately after a while, there were too many zombies and you couldn't outrun them." << endl;
	cout << "They caught you and ate you" << endl;
	cout << "Better luck next time" << endl;
	cout << "Running with the gun ending#9" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a42 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the gun, Shoot the zombies and go to the sewers ending#8*/
	int y = 0;
	system("color 4");
	cout << "You tried escaping by going into the sewers." << endl;
	cout << "Unfortunately the sewers had zombies everywhere too. You could not escaoe and they ate you" << endl;
	cout << "Better luck next time" << endl;
	cout << "Sewer with the gun ending#8" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a41 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fifth choise- Frontdoor with the gun, shoot the zombies and try driving the car*/
	system("color 7");
	cout << "You tried driving the car" << endl;
	cout << "Luckily the car works and you escape the neighborhood and you reach the highway with successs." << endl;
	cout << "On the road tou notice a man having a sign saying 'Help'" << endl;
	cout << "You can choose to stop and help him, or you can choose to ignore him." << endl;
	cout << "What do you choose?" << endl;
	cout << "(1) Stop and help him" << endl << "(2) Ignore him" << endl;
	cin >> x5;
	switch (x5) {
	case 1: {
		a101(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a102(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a41(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a40 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise- Basement with the baseball bat and ignore the zombie ending#7*/
	int y = 0;
	system("color 4");
	cout << "You chose to ignore it" << endl;
	cout << "You find water and canned food." << endl;
	cout << "While leaving, the zombie wakes up, grabs your leg and fou fall." << endl;
	cout << "After that, the zombie grabs you and eats you." << endl;
	cout << "Better luck next time." << endl;
	cout << "Basement with the baseball bat ending#7" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a39 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise- Basement with the baseball bat and throw debri*/
	system("color 7");
	cout << "You chose to throw debri on the zombie and you crush it's head" << endl;
	cout << "You find water and canned food" << endl;
	cout << "After that you went outside from the frontdoor" << endl;
	cout << "You come across 2 zombies and you sneak past them successfully without them noticing you." << endl;
	cout << "Then you notice that there is a pharmacy, a car and a sewer." << endl;
	cout << "Where do you go now?" << endl;
	cout << "(1) The pharmacy" << endl << "(2) The car" << endl << "(3) The sewer" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a98(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a99(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a100(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a39(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a38 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise- Basement with the baseball bat and hit the zombie*/
	system("color 7");
	cout << "You chose to hit it with the baseball bat" << endl;
	cout << "It was actually alive and you successfully killed it but the baseball bat broke." << endl;
	cout << "You find water and canned food" << endl;
	cout << "After that you went outside from the frontdoor." << endl;
	cout << "You come across 2 zombies and you sneak past them successfully without them noticing you." << endl;
	cout << "Then you notice that there is a pharmacy, a car and a sewer." << endl;
	cout << "Where do you go now?" << endl;
	cout << "(1) Pharmacy" << endl << "(2) The car" << endl << "(3) The sewer" << endl;
	cin >> x4;
	switch (x4){
	case 1: {
		a95(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a96(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a97(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a38(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a37 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise- Backdoor with the baseball bat and th police station*/
	system("color 7");
	cout << "You chose to go to the police station" << endl;
	cout << "You go inside to find supplies and you find 4 for a revolver gun" << endl;
	cout << "You take them but without a gun, they are no use for you, for now" << endl;
	cout << "After a full search for supplies, many zombies with policeman-costumes surprize you and you tried escaping." << endl;
	cout << "On the exit door, there's a zombie blocking it" << endl;
	cout << "You can choose to throw the baseball bat at its head from a distance, you can try hitting it from close, or you can search for another exit or a window." << endl;
	cout << "(1) Throw the baseball bat at the zombies head" << endl << "(2) Try hitting the zombie from close" << endl << "(3) Search for another exit or window" << endl;
	cin >> x4;
	switch (x4){

	case 1: {
		a92(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a93(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a94(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a37(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a36 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise- Backdoor with the baseball bat and Supermarket ending#6*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the supermarket" << endl;
	cout << "You go inside but 3 zombies surprize you out of nowhere. You tried ecaping by hitting them with the baseball bat but it broke." << endl;
	cout << "The zombies successfully caught you and ate you." << endl;
	cout << "You are dead" << endl;
	cout << "Better luck next time" << endl;
	cout << "Broken and dead ending#6" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a35 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise- Backdoor with the baseball bat and small house*/
	system("color 7");
	cout << "You chose to go to the small house" << endl;
	cout << "Luckily there are no zombies present and there are many supplies with a note on " << endl << "them saying : 'Don't take them.These supplies are for my family.If you want to get supplies, there are 3 cans of food in the basement.'" << endl;
	cout << "You can choose to go to the basement, you can take the supplies with the note, or just leave." << endl;
	cout << "(1) Go to the basement" << endl << "(2) Take thesupplies with the note" << endl << "(3) Just leave" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a89(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a90(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a91(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a35(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a34 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise- Frontdoor with the baseball bat and running away*/
	system("color 7");
	cout << "You tried running away" << endl;
	cout << "You successfully avoid the zombies but the zombies of the whole neighborhood heard you and now every zombie is chasing you." << endl;
	cout << "You see while the zombies are chasing you that in front of you there is a car and an open sewer." << endl;
	cout << "In order to survive, you can try driving the car, you can try going inside the sewers, or you can keep running." << endl;
	cout << "(1) Drive the car" << endl << "(2) Go inside the sewers" << endl << "(3) Keep running" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a86(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a87(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a88(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a34(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a33 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise- Frontdoor with the baseball bat and sneak past the zombies*/
	system("color 7");
	cout << "You tried sneaking past them" << endl;
	cout << "They didn't notice you and you successfully sneaked past them." << endl;
	cout << "In front of you you can see that there is a pharmacy and a car." << endl;
	cout << "You can choose to go to the pharmacy for supplies by going through the frontdoor, you can choose to go inside through the" << endl << "backdoor, or you can choose to go to the car." << endl;
	cout << "(1) Go through the frontdoor" << endl << "(2) Go through the backdoor" << endl << "(3) Go to the car" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a83(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a84(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a85(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a33(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a32 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Frontdoor with the baseball bat and hit the zombies ending#5*/
	int y = 0;
	system("color 4");
	cout << "You tried hitting them with the baseball bat" << endl;
	cout << "Unfortunately you only got 1 zombie. The other one bit you on the hand, you killed it but " << endl << "now you are infected" << endl;
	cout << "But because you can't cut it, you can't stop the zombie virus." << endl;
	cout << "You are slowly having hallucinations and dizziness." << endl;
	cout << "After a while, you pass away and you become a zombie." << endl;
	cout << "Zombie with a baseball bat ending" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a31 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Basement with the knife and ignore the zombie ending#4*/
	int y = 0;
	system("color 4");
	cout << "You ignored it" << endl;
	cout << "You find water and canned food" << endl;
	cout << "While leaving, the zombie wakes up, grabs your leg and you fall" << endl;
	cout << "After that the zombie grabs you and eats you" << endl;
	cout << "You are dead. Better luck next time" << endl;
	cout << "Basement with the knife ending#4" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a30 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Basement with knife and throw debri*/
	system("color 7");
	cout << "You chose to throw debri on the zombie and you crush it's head." << endl;
	cout << "You find water and canned food" << endl;
	cout << "After that you outside from the frontdoor" << endl;
	cout << "You come across 2 zombies and you sneak past them successfully without them noticing you." << endl;
	cout << "Then you notice that there is a pharmacy, a car and a sewer." << endl;
	cout << "Where are you going now?" << endl;
	cout << "(1) Pharmacy" << endl << "(2) The car" << endl << "(3) The sewer" << endl;
	cin >> x4;
		switch (x4) {
		case 1: {
			a80(x1, x2, x3, x4, x5, x6, x7,Start);
			break;
		}
		case 2: {
			a81(x1, x2, x3, x4, x5, x6, x7,Start);
			break;
		}
		case 3: {
			a82(x1, x2, x3, x4, x5, x6, x7,Start);
			break;
		}
		default: {
			system("color c");
			cout << "You pressed the wrong key, type again" << endl;
			a30(x1, x2, x3, x4, x5, x6, x7,Start);
			break;
		}
		}
}
void a29 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise- Basement with the knife and Knife the zombie*/
	system("color 7");
	cout << "You chose to knife it" << endl;
	cout << "It was actually alive. You successfully killed it but the knife broke" << endl;
	cout << "You find water and canned food" << endl;
	cout << "After that you went outside from the frontdoor" << endl;
	cout << "You come across 2 zombies and you sneak past them successfully without them noticing you." << endl;
	cout << "Then you notice that there es a pharmacy, a car and a sewer" << endl;
	cout << "Where are you going now?" << endl;
	cout << "(1) Pharmacy" << endl << "(2) The car" << endl << "(3) The sewer" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a77(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a78(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a79(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a29(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a28 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Backdoor with the knife and Police station*/
	system("color 7");
	cout << "You chose to go to the police station" << endl;
	cout << "You go inside to find supplies and you find 4 for a revolver gun." << endl;
	cout << "You take them but without a gun, they are no use for you, for now." << endl;
	cout << "After a full search for supplies, many zombies with policeman-costumes surprize you and you tried escaping." << endl;
	cout << "On the exit door, there is a zombie blocking it." << endl;
	cout << "You can choose to throw the knife at its head from a distance, you can try knifing it from close, or you can search for another exit or a window." << endl;
	cout << "(1) Throw the knife at the zombie's head" << endl << "(2) You can try knifing the zombie from close" << endl << "(3) Search for another exit or a window" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a74(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a75(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a76(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a28(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a27 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Backdoor with the knife and Supermarket ending#3*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the supermarket" << endl;
	cout << "You go inside but 3 zombies surprize you out of nowhere and eat you." << endl;
	cout << "You are dead.Better luck next time" << endl;
	cout << "Supermarket ending#3" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a26 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Backdoor with the knife and Small House*/
	system("color 7");
	cout << "You chose to go out to the small house" << endl;
	cout << "Luckily there are no zombies present and there are many supplies with a note on " << endl << "them saying: 'Don't take them. These supplies are for my family. If you want to get supplies, there are 3 cans of food in the basement.'" << endl;
	cout << "You can xhoose to go to the basement, you can take the supplies with the note, or just leave" << endl;
	cout << "(1) Go to the basement" << endl << "(2) Take the supplies with the note" << endl << "(3) Just leave" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a71(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a72(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a73(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a26(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a25 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Knife and Frontdoor and Ran away*/
	system("color 7");
	cout << "You tried running away" << endl;
	cout << "You successfully avoid the zombies but the zombies of the whole neighborhood heard you and now " << endl << "every zombie is chasing you." << endl;
	cout << "You see while the zombies are chasing you that in front of you there is a car and an open sewer." << endl;
	cout << "In order to survive, you can try driving the car, you can try going inside the sewers, or you can keep running." << endl;
	cout << "(1) Try driving the car" << endl << "(2) Go inside the sewers" << endl << "(3) Keep running" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a68(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a69(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a70(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a25(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a24 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Knife and Frontdoor and Sneak past the zombies*/
	system("color 7");
	cout << "You tried sneaking past them" << endl;
	cout << "They didn't notice you and you successfully sneaked past them." << endl;
	cout << "In front of you you can see that there is a pharmacy." << endl;
	cout << "You can choose to go to the pharmacy for supplies by going through the frontdoor, you can choose to go inside through the "<< endl <<"backdoor, or you can go for the car." << endl;
	cout << "(1) Frontdoor" << endl << "(2) Backdoor" << endl << "(3) Go to the car" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a65(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a66(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a67(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a24(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a23 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Knife and Frontdoor and Knife the zombies*/
	system("color 7");
	cout << "You tried knifing them" << endl;
	cout << "Unfortunately you only got 1 zombie." << endl;
	cout << "The other one bit you on the hand, you killed it, but now you are infected" << endl;
	cout << "Luckily there is a pharmacy in front of you and a car" << endl;
	cout << "You can choose to cut your hand and tourniquet it, you can go to the pharmacy to cut it, tourniquet it " << endl << "and search for painkillers, or you can just go to the car" << endl;
	cout << "(1) Cut you hand and tourniquet it" << endl << "(2) Go to the pharmacy to cut your hand, tourniquet it and search for painkillers" << endl << "(3) Just go to the car" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a62(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a63(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a64(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a23(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a22 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Basement with gun and ignore the zombie ending#2*/
	int y = 0;
	system("color 4");
	cout << "You ignored it" << endl;
	cout << "You find water and canned food" << endl;
	cout << "While leaving, the zombie wakes up, grabs your leg and fou fall." << endl;
	cout << "After that the zombie grabs you and eats you." << endl;
	cout << "You are dead. Better luck next time" << endl;
	cout << "Basement with the gun ending#2" << endl;
	y = EndOrRestart(x1, x2, x3, x4, x5, x6, x7, Start);
}
void a21 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Basement with gun throw debri on the zombies head*/
	system("color 7");
	cout << "You chose to throw debri on the zombie and you crush it's head." << endl;
	cout << "You find water and canned food." << endl;
	cout << "After that you went outside from the frontdoor" << endl;
	cout << "You come across 2 zombies and you sneak past them successfully without them noticing you." << endl;
	cout << "Then you notice that there is a pharmacy, a car and a sewer." << endl;
	cout << "Where do you go?" << endl;
	cout << "(1) Go to the pharmacy" << endl << "(2) Go to the car" << endl << "(3) Go inside the sewer" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a59(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a60(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a61(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a21(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a20 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Basement with gun and shoot the zombie*/
	system("color 7");
	cout << "You chose to shoot it" << endl;
	cout << "It was actually alive but you successfully killed it but now you have no ammo" << endl;
	cout << "You find water andcannd food" << endl;
	cout << "After that, you notice that the zombies outside are slowly coming towards the house you are in." << endl;
	cout << "You can choose to stay in the basement, you can get on the main floor and wait and you can get to the roof and throw away the "<< endl << "water and the canned food in a chance to distract the zombies." << endl;
	cout << "(1) Stay in the basement" << endl << "(2) Get to the main floor" << endl << "(3) Get on the roof, and throw thw food away in a chance to distract the zombies" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a56(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a57(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a58(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a20(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a19 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Backdoor with the gun and police station*/
	system("color 7");
	cout << "You chose to go to the police station" << endl;
	cout << "You go inside to find supplies and you find 4 bullets for a revolver gun." << endl;
	cout << "You take them but without a gun, they are no use for you, for now." << endl;
	cout << "After a full search for supplies, many zombies with policeman-costumes surprize you and you tried escaping." << endl;
	cout << "On the exit door, there is a zombie blocking it." << endl;
	cout << "You can choose to shoot at its head from a distance, you can try hitting it from close with the grip of the gun, or you can search for another exit or a window." << endl;
	cout << "(1) Shoot at its head" << endl << "(2) Hit it from close" << endl << "(3) Search for another exit or a window" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a53(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a54(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a55(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a19(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a18 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Backdoor with the gun and supermarket ending#1*/
	int y = 0;
	system("color 4");
	cout << "You chose to go to the supermarket" << endl;
	cout << "You go inside but 3 zombies surprize you out of nowhere and eat you." << endl;
	cout << "You are dead. Better luck next time" << endl;
	cout << "Supermarket with the gun ending#1" << endl;
	y= EndOrRestart (x1,x2,x3,x4,x5, x6, x7, Start);
}
void a17 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Backdoor with the gun and small house*/
	system("color 7");
	cout << "You chose to go to the small house" << endl;
	cout << "Luckily there are no zombies present and there are many supplies with a note on them saying:" << endl;
	cout << "Don't take them. These supplies are for my family. If you want to get supplies, there are 3 cans of soup in the basement" << endl;
	cout << "You can choose to go to the basement, you can take the supplies with the note, or just leave." << endl;
	cout << "(1) Go to the basement" << endl << "(2) Take the supplies with the note" << endl << "(3) Just leave" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a50(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a51(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a52(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a17(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a16 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choice-Frontdoor with the gun and run away*/
	system("color 7");
	cout << "You tried running away" << endl;
	cout << "You successfully avoid the zombies but the zombies of the whole neighborhood heard you and now every zombie is chasing you." << endl;
	cout << "While the zombies are chasing you, you see that in front of you there is a car and an open sewer." << endl;
	cout << "In order to survive, you can try driving the car, you can try going inside the sewers, or you can keep running." << endl;
	cout << "(1) Try the car" << endl << "(2) Go in the sewers" << endl << "(3) Keep running" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a47(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a48(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a49(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a16(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a15 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Frontdoor with the gun and sneak past the zombies*/
	system("color 7");
	cout << "You tried sneaking past them." << endl;
	cout << "They didn't notice you and you successfully sneaked past them." << endl;
	cout << "In front of you you can see that there is a pharmacy and a car." << endl;
	cout << "You can choose to go to the pharmacy for supplies by going through the frontdoor, you can choose to go inside through the backdoor, or you can go for the car." << endl;
	cout << "(1) Frontdoor" << endl << "(2) Backdoor" << endl << "(3) Go for the car" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a44(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a45(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a46(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a15(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a14 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Fourth choise-Shoot the zombies at the frontdoor*/
	system("color 7");
	cout << "You tried shooting them." << endl;
	cout << "You successfuly shoot them in the head and kill them, but now every zombie in the neighborhood heard you and you tried running and searching for an escape." << endl;
	cout << "While running you notice that there is a car and a sewer." << endl;
	cout << "You can choose to attempt to drive the car, you can go to the sewers, or you can just keep running." << endl;
	cout << "(1) Drive the car" << endl << "(2) Go to the sewers" << endl << "(3) Keep running" << endl;
	cin >> x4;
	switch (x4) {
	case 1: {
		a41(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a42(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a43(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a14(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a13 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Third choise-Basement with the baseball bat*/
	system("color 7");
	cout << "You checked the basement." << endl;
	cout << "There is a zombie on the ground that seems dead." << endl;
	cout << "You can hit it with the baseball bat to make sure, you can throw debri on the zombie's head, or you can ignore it." << endl;
	cout << "What do you choose?" << endl;
	cout << "(1) Hit it with the baseball bat" << endl << "(2) Throw debri on the zombie's head" << endl << "(3) Ignore it" << endl;
	cin >> x3;
	switch (x3) {
	case 1: {
		a38(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a39(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a40(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a13(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a12 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Third choise-Backdoor with the baseball bat*/
	system("color 7");
	cout << "You went through the backdoor." << endl;
	cout << "In front of you there are 3 buildings." << endl;
	cout << "A small house,a supermarket nad a police station." << endl;
	cout << "Which building do you choose?" << endl;
	cout << "(1) Small house" << endl << "(2) Supermarket" << endl << "(3) Police station" << endl;
	cin >> x3;
	switch (x3) {
	case 1: {
		a35(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a36(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a37(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a12(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a11 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Third choise-Frontdoor with the baseball bat*/
	system("color 7");
	cout << "You went through the frontdoor" << endl;
	cout << "You see in a distance 2 zombies." << endl;
	cout << "You can hit them with the baseball bat, you can sneak past them, or you can try running away from them." << endl;
	cout << "(1) Hit them with the baseball bat" << endl << "(2) Sneak past them" << endl << "(3) Run away from them" << endl;
	cin >> x3;
	switch (x3) {
	case 1: {
		a32(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a33(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a34(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a11(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a10 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Third choise-Basement with the knife*/
	system("color 7");
	cout << "You checked the basement." << endl;
	cout << "There is a zombie on the ground that seems dead." << endl;
	cout << "You can knife it to make sure, you can throw debri on the zombie's head, or you can ignore it." << endl;
	cout << "What do you choose?" << endl;
	cout << "(1) Knife it" << endl << "(2) Throw debri on the zombies head" << endl << "(3) Ignore it" << endl;
	cin >> x3;
	switch (x3) {
	case 1: {
		a29(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a30(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a31(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a10(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a9  (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Third choise-Backdoor with the knife*/
	system("color 7");
	cout << "You went through the backdoor" << endl;
	cout << "In front of you there are 3 building" << endl;
	cout << "A small house, a supermarket, and a police staion" << endl;
	cout << "Which building do you choose?" << endl;
	cout << "(1) Small house" << endl << "(2) Supermarket" << endl << "(3) Police station" << endl;
	cin >> x3;
	switch (x3) {
	case 1: {
		a26(x1, x2, x3, x4, x5, x6, x7, Start);
		break;
	}
	case 2: {
		a27(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a28(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a9(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a8  (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Third choise-Frontdoor with the knife*/
	system("color 7");
	cout << "You went through the frontdoor." << endl;
	cout << "You see in a distance 2 zombies." << endl;
	cout << "You can knife them, you can sneak past them, or you can try running from them" << endl;
	cout << "(1) Knife them" << endl << "(2) Sneak past them" << endl << "(3) Try running away from them" << endl;
	cin >> x3;
	switch (x3) {
	case 1: {
		a23(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a24(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a25(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a8(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a7  (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Third choise-Basement with the gun*/
	system("color 7");
	cout << "You checked the basement" << endl;
	cout << "There is a zombie on the ground that seems dead" << endl;
	cout << "You can shoot it to make sure, you can throw debri on the zombie's head, or you can ignore it" << endl;
	cout << "What do you choose?" << endl;
	cout << "(1) Shoot it" << endl << "(2) Throw debri on the zombie's head" << endl << "(3) Ignore it" << endl;
	cin >> x3;
	switch (x3) {
	case 1: {
		a20(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a21(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a22(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a7(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a6  (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Third choise-Backdoor with the gun*/
	system("color 7");
	cout << "You went through the backdoor" << endl;
	cout << "In front of you there are 3 building" << endl;
	cout << "A small, a supermarket and a police station" << endl;
	cout << "Which building do you choose?" << endl;
	cout << "(1) Small house" << endl << "(2) Supermarket" << endl << "(3) Police station" << endl;
	cin >> x3;
	switch (x3) {
	case 1: {
		a17(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a18(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a19(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a6(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a5  (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Third choise-Frontdoor with the gun*/
	system("color 7");
	cout << "You went through the frontdoor." << endl;
	cout << "You see in a distance 2 zombies." << endl;
	cout << "You can shoot them, you can sneak past them, or you can try running away from them" << endl;
	cout << "(1) Shoot them" << endl << "(2) Sneak past them" << endl << "(3) Try running away" << endl;
	cin >> x3;
	switch (x3) {
	case 1: {
		a14(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a15(x1, x2, x3, x4, x5, x6, x7, Start);
		break;
	}
	case 3: {
		a16(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a5(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a4  (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Second choise with the baseball bat*/
	system("color 7");
	cout << "You grabbed the baseball bat" << endl;
	cout << "You want to get out to search for more supplies" << endl;
	cout << "You can go out from the frontdoor, the backdoor, or you can go to the basement to check if there are more supplies there" << endl;
	cout << "Which of these do you choose?" << endl;
	cout << "Which of these do you choose" << endl;
	cout << "(1) Frontdoor" << endl << "(2) Backdoor" << endl << "(3) Check the basement" << endl;
	cin >> x2;
	switch (x2) {
	case 1: {
		a11(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a12(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a13(x1, x2, x3, x4, x5, x6, x7, Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a4(x1, x2, x3, x4, x5, x6, x7, Start);
		break;
	}
	}
}
void a3  (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Second choise with the knife*/
	system("color 7");
	cout << "You grabbed the knife" << endl;
	cout << "You want to get out to search for more supplies" << endl;
	cout << "You can go out from the frontdoor, the backdoor, or you can go to the basement to check if there are more supplies there" << endl;
	cout << "Which of these do you choose?" << endl;
	cout << "Which of these do you choose" << endl;
	cout << "(1) Frontdoor" << endl << "(2) Backdoor" << endl << "(3) Check the basement" << endl;
	cin >> x2;
	switch (x2) {
	case 1: {
		a8(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a9(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a10(x1, x2, x3, x4, x5, x6, x7, Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a3(x1, x2, x3, x4, x5, x6, x7, Start);
		break;
	}
	}
}
void a2  (int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {
	/*Second choise with the gun*/
	system("color 7");
	cout << "You grabbed the gun" << endl;
	cout << "You want to get out to search for more supplies" << endl;
	cout << "You can go out from the frontdoor, the backdoor, or you can go to the basement to check if there are more supplies there." << endl;
	cout << "Which of these do you choose" << endl;
	cout << "(1) Frontdoor" << endl << "(2) Backdoor" << endl << "(3) Check the basement" << endl;
	cin >> x2;
	switch (x2) {
	case 1: {
		a5(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a6(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a7(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a2(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void a1  (int x1,int x2,int x3,int x4, int x5, int x6, int x7, string Start) {
	/*1st choice-weapon choice*/
	system("color 7");
	cout << "You wake up inside a house during a zombie apocalypse" << endl;
	cout << "You search inside the floor you are in for supplies" << endl;
	cout << "You find a gun(revolver) with 2 bullets, a knife and a basball bat" << endl;
	cout << "Which of these do you chose?" << endl;
	cout << "(1) Gun" << endl << "(2) Knife" << endl << "(3) Baseball bat" << endl;
	cin >> x1;
	switch (x1) {
	case 1: {
		a2(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 2: {
		a3(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	case 3: {
		a4(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	default: {
		system("color c");
		cout << "You pressed the wrong key, type again" << endl;
		a1(x1, x2, x3, x4, x5, x6, x7,Start);
		break;
	}
	}
}
void askagain(int x1,int x2,int x3,int x4,int x5,int x6,int x7, string Start) {
	/*This is the void in which the start command should be rewritten*/
	system("color c");
	cout << "You probably typed wrong" << endl;
	cout << "Type start to begin playing the game" << endl;
	cin >> Start;
	if (Start == "start") {
		a1(x1, x2, x3, x4, x5, x6, x7, Start);
	}
	else {
		askagain(x1, x2, x3, x4, x5, x6, x7, Start);
	}
}
int main()
{
	/*The player has to type start to begin the game*/
	/*If he doesn't type it correctly or types anything else, he will have to write it again*/
	system("color 7");
	string Start;
	int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0;
	int y;
	cout << "Welcome to my Game" << endl;
	cout << "If you want to start type start" << endl;
	cin >> Start;
	if (Start == "start") {
		a1(x1,x2,x3,x4,x5,x6,x7,Start);
	}
	else {
		askagain(x1, x2 , x3 , x4 , x5 , x6 , x7,Start);
	}
	return 0;
}
/*Voids with endings= a18, a22, a27, a31, a32, a36, a40, a42, a43, a45, a48, a49, a54, a56, a57, a61, a63, a64, a66, a69, a70, a74, a79, a82, a84, a87, a88, a92, a97, a100, a101, a102, a104, a105, a106, 
a107, a108, a109, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a131, a132, a134, a135, a136, a137, a138, a139, a140, a141, a142, 
a143, a144, a145, a146, a147, a148, a149, a150, a151, a152, a153, a154, a155, a156, a157, a158, a159, a160, a161, a163, a164, a165, a166, a167, a168, a169, a170 , a171, a172, a173, a174, a175, a176, a177, 
a178, a179, a180, a181, a182, a189, a190, a191, a192, a193, a194, a195, a196 ,a197, a198, a200 , a201, a202, a203, a204, a205, a206  */

/*Here is the final int that we are going to put for the player to choose whether he wants to restart or exit the game*/
int EndOrRestart(int x1, int x2, int x3, int x4, int x5, int x6, int x7, string Start) {

	int a = 0;
	cout << "Do you want to play again?" << endl;
	cout << "Type yes to restart" << endl;
	cout << "Type no to exit the game" << endl;
	cin >> Start;
	if (Start == "yes") {
		cout << "Here we go again" << endl;
		a1(x1, x2, x3, x4, x5, x6, x7, Start);
	}
	else{
		system("color 7");
		cout << "Thanks for playing!" << endl;
		cout << "Made by Alexandros Metushi" << endl;
	}
	return a;
}

/*For bad endings system("color 4");
  For good endings system("color a");
  For mediocre endings system("color 6");
  */

/*
For defaults system("color c");
For every void system("color 7");
*/