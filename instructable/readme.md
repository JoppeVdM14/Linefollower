


##  Instructable: Het Nabouwen van een Line Follower Robot

# Stap 1: Onderdelen verzamelen

Bestel alle componenten volgens de Bill of Materials (BOM).
Microcontroller: ATMega 328P
Sensoren: QTR-8A
H-brug: DRV8833
Motoren: Kritonik Geared DC
Bluetooth-module: HC-05 (recup)
Batterij: Lipo 2S (recup)
Batterijoplader: Lipo 2S batterijoplader (recup)
Kabels: Dupont kabels (recup)
Wielen: 2 stuks (recup)
Chassis: 3D-geprint volgens technische tekening
Knop: Drukknop
Volgwiel: 1 stuk
Breadboard: klein formaat

# Stap 2: Chassis printen

Download het 3D-model van het chassis.
Print het chassis met een 3D-printer volgens de technische tekening.

# Stap 3: Componenten monteren op het chassis

Monteer de motoren aan de daarvoor voorziene houders.
Bevestig de wielen aan de motorassen.
Monteer het volgwiel aan de voorkant van het chassis.
Bevestig de batterij op de batterijhouder.
Installeer de sensormodule (QTR-8A) aan de voorkant van het chassis.

# Stap 4: Elektrische verbindingen maken

Gebruik de technische tekening als leidraad voor de bedrading.
Verbind de microcontroller met:
De sensoren.
De H-brug (DRV8833).
De Bluetooth-module (HC-05).
Verbind de motoren met de uitgangen van de H-brug.
Sluit de batterij aan op de voeding van de H-brug en microcontroller.
Bevestig de drukknop op het chassis en verbind deze met een pin van de microcontroller.
Zorg dat alle verbindingen stevig vastzitten met Dupont kabels.

# Stap 5: Code compileren en uploaden

Download de firmware voor de robot.
Open de code in de Arduino IDE.
Selecteer de juiste boardinstellingen:
Board: Arduino Nano (of compatibel).
Processor: ATMega 328P.
Poort: Correcte COM-poort.
Verbind de microcontroller via USB met de computer.
Compileer de code en upload deze naar de microcontroller.

# Stap 6: Kalibratie uitvoeren

Plaats de robot op een zwart oppervlak.
Stuur het commando calibrate black via de Serial Bluetooth Terminal-app.
Plaats de robot op een wit oppervlak.
Stuur het commando calibrate white.

# Stap 7: Test en fine-tune

Schakel de robot in met de batterijschakelaar.
Test het rijden op een lijnvolgend parcours.
Pas parameters aan (via de app of directe commando's) indien nodig voor optimale prestaties.

# Stap 8: De robot is nu klaar voor gebruik!
