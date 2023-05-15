# algoritmaanalizivetasarimidersikisasinav2-1.kisim

KOD NE İŞE YARAR VE NASIL ÇALIŞIR?

Bu kod, aşağıdaki işlemleri gerçekleştiren bir C programıdır:

1.	generate fonksiyonu, verilen boyutta rastgele tamsayılardan oluşan bir dizi oluşturur.

2.	function1 fonksiyonu, verilen bir diziyi artan sıraya göre sıralar (bubble sort kullanarak).

3.	function2 fonksiyonu, sıralanmış dizideki ardışık elemanların toplamının pozitif olduğu alt dizileri bulur ve en büyük pozitif toplamı döndürür. Ayrıca, en büyük pozitif toplamı sağlayan alt dizilerin sayısını da döndürür.

4.	function3 fonksiyonu, verilen bir ağırlıklı yönlendirilmemiş grafik matrisi (g) için Floyd-Warshall algoritması kullanarak, tüm düğüm çiftleri arasındaki en kısa yolların ağırlığını hesaplar ve sonuçları d matrisine yazar.

5.	print1, print2 ve print3 fonksiyonları, dizi ve matrisleri ekrana yazdırmak için kullanılır.

main fonksiyonu, bu işlemleri şu şekilde gerçekleştirir:

1.	Boyutu A_SIZE olan bir dizi (a) oluşturur ve generate fonksiyonu ile rastgele tamsayılarla doldurur.

2.	Diziyi function1 ile sıralar ve ekrana yazdırır.

3.	function2 ile dizideki en büyük pozitif toplamı ve bu toplamı sağlayan alt dizilerin sayısını hesaplar ve ekrana yazdırır.

4.	Bir grafik matrisi (g) tanımlar ve en kısa yol ağırlıklarını hesaplamak için function3 fonksiyonunu kullanır. Sonuçlar d matrisinde saklanır ve ekrana yazdırılır.

5.	print3 fonksiyonunu kullanarak, en kısa yol ağırlığı t'den (fonksiyon 2'den dönen değer) küçük olan tüm düğüm çiftlerini ekrana yazdırır.

6.	Programın çalışma süresini hesaplar ve ekrana yazdırır.


KODUN ZAMAN KARMAŞIKLIĞI

1.	generate fonksiyonu: O(n) (Bir döngü içeriyor ve boyut size olan bir diziyi dolduruyor)

2.	function1 fonksiyonu: O(n^2) (İç içe iki döngü içeriyor ve dizi elemanlarını sıralamak için kullanılıyor)

3.	function2 fonksiyonu: O(n) (Bir döngü içeriyor ve dizi üzerinde işlem yapıyor)

4.	function3 fonksiyonu: O(n^3) (Floyd-Warshall algoritması kullanılıyor ve iç içe üç döngü içeriyor)

5.	print1 fonksiyonu: O(n) (Bir döngü içeriyor ve dizi elemanlarını yazdırıyor)

6.	print2 ve print3 fonksiyonları: O(n^2) (İç içe iki döngü içeriyor ve matris elemanlarını yazdırıyor)

Şimdi, bu karmaşıklıkları toplam karmaşıklık olarak hesaplayalım:

O(n) (generate) + O(n^2) (function1) + O(n) (function2) + O(n^3) (function3) + O(n) (print1) + O(n^2) (print2 ve print3) = O(n) + O(n^2) + O(n) + O(n^3) + O(n) + O(n^2)

En büyük terimleri dikkate alarak, toplam karmaşıklık O(n^3) olacaktır.


KODU NASIL GELİŞTİREBİLİRİZ?

1.	Kod yapısının düzenlenmesi

2.	Kod performansının arttırılması

3.	Kodun okunabilirliğinin arttırılması

4.	Kodun hatalarının önlenmesi

GELİŞTİRDİĞİMİZ KODUN ZAMAN KARMAŞIKLIĞI

1.	rastgeleDiziOlustur fonksiyonu:

Bu fonksiyonda tek bir döngü kullanılmıştır ve her döngü adımında sadece bir matematiksel işlem yapılmaktadır. Bu nedenle fonksiyonun zaman karmaşıklığı O(n) olacaktır.

2.	bubbleSort fonksiyonu:

Bu fonksiyonda iki adet iç içe döngü kullanılmıştır. Dıştaki döngü n kez çalışacak, içteki döngü ise her bir döngü adımında n-1 kez çalışacaktır. İçteki döngü adımı sayısı her seferinde bir azalmaktadır. Bu nedenle bu fonksiyonun zaman karmaşıklığı O(n^2) olacaktır.

3.	enBuyukAltDiziToplami fonksiyonu:

Bu fonksiyonda tek bir döngü kullanılmıştır ve her döngü adımında sadece birkaç matematiksel işlem yapılmaktadır. Dolayısıyla bu fonksiyonun zaman karmaşıklığı O(n) olacaktır.

4.	kisaYolMatrisiHesapla fonksiyonu:

Bu fonksiyonda 3 adet iç içe döngü kullanılmıştır. İçteki döngüler her biri boyut sayısı kadar (yani G_BOYUTU). Bu nedenle bu fonksiyonun zaman karmaşıklığı O(n^3) olacaktır.

Toplamda, kodun zaman karmaşıklığı en yüksek olan fonksiyon kisaYolMatrisiHesapla fonksiyonudur ve bu fonksiyonun zaman karmaşıklığı O(n^3) dir. Dolayısıyla, programın zaman karmaşıklığı da O(n^3) olacaktır.


KODLARIN ZAMAN KARMAŞIKLIĞI VE ÇALIŞMA SÜRELERİNİN KARŞILAŞTIRILMASI

Bu iki kodun zaman karmaşıklıkları farklı olduğu için doğrudan karşılaştırılamazlar. Her bir fonksiyonun zaman karmaşıklığı ayrı ayrı hesaplanmalı ve karşılaştırılmalıdır.

Kodlardaki fonksiyonlar ve onların zaman karmaşıklıkları:

Kod 1:

•	generate: O(n)

•	function1: O(n^2)

•	function2: O(n)

•	function3: O(n^3)

Kod 2:

•	rastgeleDiziOlustur: O(n)

•	bubbleSort: O(n^2)

•	enBuyukAltDiziToplami: O(n)

•	kisaYolMatrisiHesapla: O(n^3)

Görüldüğü gibi, bazı fonksiyonlar aynı karmaşıklıkta olsa da, diğerleri farklıdır. Ancak, her iki kodun da en kötü zaman karmaşıklığı O(n^3)'tür.

Ayrıca, her iki kodun çalışma süreleri de ölçülmüş ve kod 1'in 0,001 saniyeden daha hızlı, kod 2'nin ise 0,002 saniyeden daha hızlı olduğu görülmüştür. Bu nedenle, kod 1'in daha hızlı olduğu söylenebilir.


