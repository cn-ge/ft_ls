
<!-- Builder les images -->
$ docker-compose build

<!-- Démarrer les containers -->
$ docker-compose up -d
<!-- ou -->
$ docker container start container_name

<!-- Lister les containers (voir leur état) -->
$ docker ps -a

<!-- Supprimer les containers -->
$ docker container stop container_name
$ docker container rm container_name

<!-- Exécuter le container pour l'ouvrir et accéder à sa console -->
$ docker exec -it containername bash -l    
$ docker exec -it containername sh   
$ docker exec -it containername bin/sh  
$ docker exec -it containername bin/bash  up

(exit) --> pour sortir du container


<!-- Dans le container : -->
<!-- Se placer dans le dossier contenant les sources -->
$ cd /home/cgeindreau/ft_ls

<!-- Compiler le c vers le dossier build -->
$ gcc sources/hello.c -o build/hello

<!-- Executer le programme -->
./main



Source : https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/15417-a-lassaut-des-pointeurs