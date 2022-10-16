
#define LIBFT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_isprint(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int  ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int	ft_strncmp(char *s1, char *s2, size_t n);
int    ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_atoi(const char *str);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char *));

size_t ft_strlen(const char *s);
size_t ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t    ft_strlcat(char *dest, const char *src, size_t size);

char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void *ft_memchr(const void *str, int c, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
int    ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_bzero(void *s, size_t n);

