#ifndef _DANCER_H
#define _DANCER_H

typedef struct dancer {
	char *name;   /* dunamika desmeumeni sumboloseira */
	char gender;
	struct dancer *next;  /* deiktis pros epomeno kombo */
	struct dancer *prev;  /* deiktis pros proigoumeno kombo */
} dancer_t;

/* sunartisi pou pairnei ws parametro ti dieuthunsi tis kefalis
   tis listas xoreutwn kai ektupwnei ta periexomena tis listas.
*/
void print(dancer_t *head);

/* sunartisi pou kataskeuazei mia lista xoreutwn me size kombous
   kai epistrefei ti dieuthunsi tis kefalis tis. 
*/ 
dancer_t *init(int size);

#endif

