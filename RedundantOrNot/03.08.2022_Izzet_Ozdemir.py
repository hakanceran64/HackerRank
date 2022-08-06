import numpy as np
import os

arr = np.array([], dtype="int")

try:
    count = int(input("Listeye kaç adet sayı eklemek istiyorsunuz?: "))
except ValueError:
    print("Lütfen tam sayı giriniz!")
    exit(0)

for i in range(0, count):

    try:
        sayi = int(input(f"Lütfen {i+1}. sayıyı giriniz: "))

        cont = sayi in arr

        if cont == bool(0):
            arr = np.append(arr, sayi)
            print("Sayınız listeye eklendi!")
        else:
            print("Girdiğiniz sayı listede mevcut.")

    except ValueError:
        print("Lütfen tam sayı giriniz!")
        exit(0)
