#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: name to create a new struct
 * @age: age to create a new struct
 * @owner: owner to create a new struct
 *
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *n_dog;

	n_dog =  malloc(sizeof(struct dog));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}