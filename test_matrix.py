from quickatetools.clipboard_matrix import generate_diagonal_matrix
import pyperclip

# 测试生成3x3的对角矩阵，默认使用'M'
matrix = generate_diagonal_matrix(3)
print('生成的3x3对角矩阵:')
print(matrix)

# 复制到剪贴板
pyperclip.copy(matrix)
print('已复制到剪贴板')

# 测试生成4x4的对角矩阵，使用'X'
matrix = generate_diagonal_matrix(4, 'X')
print('生成的4x4对角矩阵:')
print(matrix)