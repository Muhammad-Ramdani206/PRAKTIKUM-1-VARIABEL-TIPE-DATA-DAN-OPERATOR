A = 400000
B = 350000
discount_A = 0.13
discount_B = 0.21
total_A = A * (1 - discount_A)
total_B = B * (1 - discount_B)

print(f"Harga sepatu A adalah {A}")
print(f"Harga sepatu B adalah {B}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {total_A:.0f}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {total_B:.0f}")