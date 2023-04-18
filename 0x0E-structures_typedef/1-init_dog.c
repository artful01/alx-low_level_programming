#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize dog structure
 * @d: dog structure
 * @name: the name
 * @age: age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
