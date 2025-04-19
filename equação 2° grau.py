from cmath import sqrt

# Equação do segundo grau
# ax² + bx + c = 0
# delta = b² - 4ac
# x = (-b ± √delta) / 2a
# x1 = (-b + √delta) / 2a
# x2 = (-b - √delta) / 2a
# sqrt(x) raiz quadrada

a = int(input(f'Valor de a: '))
b = int(input(f'Valor de b: '))
c = int(input(f'Valor de c: '))
delta: int = (b ** 2) - (4 * a * c)
x1 = (-b + sqrt(delta)) / (2 * a)
x2 = (-b - sqrt(delta)) / (2 * a)
print(x1, x2)
