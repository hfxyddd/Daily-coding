def scalar_multiply(matrix: list[list[int|float]], scalar: int|float) -> list[list[int|float]]:

	result = [[element * scalar for element in row] for row in matrix]
	return result