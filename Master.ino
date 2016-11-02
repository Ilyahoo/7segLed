/*		Ilyahoo Proshel
		2016
		7Seg Displayer		*/
		
/* 		  A
		 ___
	  F |	| B			0 for ON
		|_G_|			1 for OFF
	  E |	| C
		|___|
		  D     */
		  

			// D1 D2 D3 D4	
int Dig[4] = {13,12,11,10};
			 //A B C D E F G	
int Leds[7] = {2,3,4,5,6,7,8};

byte Seg[10] = {0b0000001,	//0
				0b1001111,	//1
				0b0010010,	//2
				0b0000110,	//3
				0b1001100,	//4
				0b0100100,	//5
				0b0100000,	//6
				0b0001111,	//7
				0b0000000,	//8
				0b0000100	//9
				};
void setup(){
	for (int i = 0; i < 7; i++){
		pinMode(Leds[i], OUTPUT);
		if (i < 4)
			pinMode(Dig[i],OUTPUT);
	}
	
}

void loop(){
	
	for (int D1 = 0; D1 < 10; D1++){
		for (int D2 = 0; D2 < 10; D2++){
			for (int D3 = 0; D3 < 10; D3++){
				for (int D4 = 0; D4 < 10; D4++){
					unsigned long Daba = millis();
					for (unsigned long Zid = Daba; Zid - Daba < 1000; Daba = millis()){
						ebbi1(D1);
						delay(4);
						ebbi2(D2);
						delay(4);
						ebbi3(D3);
						delay(4);
						ebbi4(D4);
						delay(4);
					}
				
				}	
			}
		}	
	}
}

void ebbi1(int num){
	for(int i = 0; i < 4; i++){
		if (i == 1-1){
			digitalWrite(Dig[i],HIGH);
			continue;}
		digitalWrite(Dig[i],LOW);
		}
	uck(num);	
	}
void ebbi2(int num){
	for(int i = 0; i < 4; i++){
		if (i == 2-1){
			digitalWrite(Dig[i],HIGH);
			continue;}
		digitalWrite(Dig[i],LOW);
		}
	uck(num);	
	}
void ebbi3(int num){
	for(int i = 0; i < 4; i++){
		if (i == 3-1){
			digitalWrite(Dig[i],HIGH);
			continue;}
		digitalWrite(Dig[i],LOW);
		}
	Fuck(num);	
	}
void ebbi4(int num){
	for(int i = 0; i < 4; i++){
		if (i == 4-1){
			digitalWrite(Dig[i],HIGH);
			continue;}
		digitalWrite(Dig[i],LOW);
		}
	uck(num);	
	}
void uck(int n){
	byte TheSeg = Seg[n];
	for (int i = 0; i < 7; i++){
		int bit = bitRead(TheSeg,i);
		digitalWrite(Leds[i],bit);	
	}
}
