# Adar
Ce répertoire contient tout ce qu'il vous faut pour utiliser l'application Adar. 

Cette application sert à faire de l'Acquisition de Données avec ARduino, d'où son nom!

Il est possible de collecter deux valeurs numériques à la fois à partie de la carte Arduino. Par exemple, on peut envoyer la valeur de temps et la valeur de distance mesurée à l'aide d'un capteur ultrasons. Cela peut permettre de faire des laboratoires de cinématique. On pourrait aussi envoyer la valeur de tension électrique lue et la valeur de courant à partir de capteurs appropriés. 

Le graphique se trace presque en temps réel. De plus, on peut facilement exporter les données dans un classeur comme Excel et de faire le traitement des données comme souhaité. 

Note : Les données qui seront copiées utilisent le point comme séparateur pour les nombres décimaux. Il faut remplacer tous les "." par des "," dans Excel à l'aide de l'outil "Remplacer".

La carte Arduino et l'application communiquent par le port série. Il est donc important que la carte ne soit plus connectée avec l'application (mBlock ou Arduino IDE) qui a servi pour la programmer. 

## Installation
Pour l'installer, il suffit de télécharger le fichier "Adar-win.zip" si vous travaillez sous Windows et "Adar-MacOS.zip" pour la version MacOS. Une fois le fichier 
téléchargé, il suffit de décompresser le fichier et le tour est joué! Il n'y a pas d'installation en soi. Télécharger les fichiers est suffisant.

## Utilisation
Pour démarrer l'application, ouvrir le dossier décompressé. Il suffit ensuite de cliquer sur le fichier de l'application appelé "Adar" et dont l'icône est en forme de robot. L'application va démarrer. Pour le reste, il suffit de suivre le document "Utilisation d'Adar.pdf" que l'on retrouve ici. 


## Programmation de la carte Arduino
La carte Arduino peut être programmée à l'aide de mBlock (Scratch) ou encore avec Arduino IDE. Le code est fourni dans les deux cas. Il faut le modifier en fonction des besoins. 

Le principe est que la première valeur est envoyée par le port série, suivi de deux espaces blancs "  " et ensuite de la deuxième valeur et de la fin de ligne. 
La vitesse de communication du port série doit être de 9600 bd. 

Il est possible de modifier simplement les valeurs qui sont envoyées par la carte dans les programmes qui sont fournis.

Il est aussi possible de modifier le temps d'attente entre l'envoi de deux séries de données par la carte Arduino en fonction des besoins. Un temps plus court entraîne plus de données et un temps plus long moins de données.
