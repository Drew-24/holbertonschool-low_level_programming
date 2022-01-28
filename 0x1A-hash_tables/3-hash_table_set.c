#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element
 * @ht: parameter
 * @key: parameter
 * @value: parameter
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *tmp;
	unsigned long int idx = 0;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = (char *)key;
	node->value = (char *)value;
	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
	}
	else
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			tmp = tmp->next;
		}
		tmp = ht->array[idx];
		node->next = tmp;
		ht->array[idx] = node;
	}
	return (1);
}