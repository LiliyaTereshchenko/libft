#include "libft.h"

void ft_lstadd(t_list **alst, t_list *new)
{
    new->next = *alst;
    *alist = new;
}
