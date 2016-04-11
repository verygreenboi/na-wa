#include<stdio.h>

main()
{
	char ch;
    int n;
	
	
	
	printf("\nEnter a lower cased alphabet (a-z) :");
    scanf("%c", &ch);
	    
	if(ch < 'a' || ch > 'z')
	
	printf("\nCharacter is not a lower cased Alphabet");
    
	else
    switch(ch)	
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
			printf("\nCharacter is a Vowel");
			break;
		case 'z' :
			printf("\nLast Alphabet (z) Entered");
			break;
		default :
			printf("\nCharacter is a consonant");
			break;

        
	}

 

	
	
	
	
	
	
	
	
	
	
	
}
