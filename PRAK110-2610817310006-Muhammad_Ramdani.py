alas = 5
tinggi = 12

sisi_A = tinggi
sisi_C = alas
sisi_B = (alas**2 + tinggi**2) ** 0.5

keliling = sisi_A + sisi_B + sisi_C
luas = 0.5 * alas * tinggi

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print()
print("Jawab :")
print(f"Sisi A = {sisi_A} cm")
print(f"Sisi B = {sisi_B:.0f} cm")
print(f"Sisi C = {sisi_C} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")