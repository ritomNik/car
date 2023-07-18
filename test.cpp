var_1 = 'level'
print('Palindrome') if var_1 == var_1[::-1] else print('Simple word')
# Вывод:
Palindrome

var_1 = 'level'
ispalindrome = var_1 == var_1[::-1]
if ispalindrome:
    print('Palindrome')
else:
    print('Simple word')
# Вывод:
Palindrome
