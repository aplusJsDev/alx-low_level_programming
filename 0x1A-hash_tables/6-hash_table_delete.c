#include "hash_tables.h"

/**
 * hash_table_delete - deletes giving hash table
 * @ht: giving hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	int i;

	for (i = 0; i < (int)ht->size; i++)
	{
		if (ht->array[i])
			free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
/**
 * free_list - frees list
 * @array: list
 *
 * Return: nothing
 */
void free_list(hash_node_t *array)
{
	hash_node_t *head = array;

	while (array)
	{
		head = array;
		free(array->key);
		free(array->value);
		free(head);
		array = array->next;
	}
}
