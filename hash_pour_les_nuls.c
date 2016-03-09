int		hash_pour_les_nuls(char *str)
{
	int		ret;

	ret = 0;
	while (*str)
		ret += *(str++);
	return (ret);
}
