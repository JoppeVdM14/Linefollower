# Gebruiksaanwijzing

### opladen / vervangen batterijen
We maken gebruik van Lipo2S batterijen, deze kunnen we makkelijk opladen met het gepaste materiaal. 
### Werking van het programma + uitleg mogelijke commando's 
Voor de draadloze communicatie met de auto is een Bluetooth-module aanwezig. Let op: deze module is niet compatibel met Apple-apparaten, dus zorg ervoor dat je een Android-toestel gebruikt. Daarnaast heb je de app "Serial Bluetooth Terminal" nodig om commando's naar de auto te sturen. Om verbinding te maken, open je de Bluetooth-instellingen van je Android-apparaat, maak je verbinding met de Bluetooth-module van de auto, en selecteer je deze module vervolgens in de app. Zodra dit is gedaan, is de draadloze communicatie gereed voor gebruik.

De auto kan via de app verschillende commando's ontvangen. Met het commando debug [on/off] kun je de ingestelde parameters bekijken of verbergen. Het commando run start de auto en laat hem rijden, terwijl stop de auto tot stilstand brengt. Met set cycle [µs] stel je de tijd in voor een cyclus, waarbij deze ongeveer tweemaal de "calculation time" moet zijn. Het commando set power [0..255] bepaalt het motorvermogen; wees hier voorzichtig mee, want bij maximale waarde kan de auto wheelies maken. Met set diff [0..1] kun je het snelheidsverschil tussen rechte stukken en bochten aanpassen, waarbij een hogere waarde ervoor zorgt dat de auto minder vertraagt in bochten. Het commando set kp [0..] bepaalt hoe agressief de auto instuurt; een te hoge waarde kan leiden tot schokkende bewegingen. Met set ki [0..] stuur je meer bij naarmate de bocht langer duurt, en set kd [0..] corrigeert stuurfouten door een te hoge kp-waarde.

Voor een correcte werking moet je de auto kalibreren voordat hij begint te rijden. Dit doe je op hetzelfde type oppervlak waarop de auto zal rijden. Plaats de auto eerst op een zwart oppervlak en gebruik het commando calibrate black om de sensor zwart te laten herkennen. Herhaal dit op een wit oppervlak met het commando calibrate white. Kalibreer uitsluitend op de juiste kleuren en vermijd oppervlakken die slechts lijken op zwart of wit.

De auto rijdt stabiel met de volgende instellingen: een cycle time van 3000 µs, een motorvermogen (power) van 72, een snelheidsverschil (diff) van 0.74, en stuurparameters kp van 20, ki van 0 en kd van 0.90. Pas deze waarden alleen aan met zorg, want extreme instellingen kunnen de prestaties van de auto negatief beïnvloeden.

Beschikbare commando’s:

debug [on/off] – Laat ingestelde parameters zien of verbergt deze.
run – Start de auto (begint te rijden).
stop – Stopt de auto.
set cycle [µs] – Stelt de cyclusduur in.
set power [0..255] – Regelt het motorvermogen.
set diff [0..1] – Past het snelheidsverschil tussen rechte stukken en bochten aan.
set kp [0..] – Bepaalt hoe agressief de auto instuurt.
set ki [0..] – Vergroot het bijsturen in langere bochten.
set kd [0..] – Corrigeert stuurfouten door een hoge kp.
calibrate black – Kalibreert zwart.
calibrate white – Kalibreert wit.
