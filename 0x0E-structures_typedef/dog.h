#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - the dog structur
  * @name: The name of the dog
  * @age: The age of the dog
  * @owner: The owner of the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new typedef as a new name for dog structur
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
