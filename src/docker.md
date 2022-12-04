## Part 1.

* Взять официальный докер образ с nginx и выкачать его при помощи docker pull
![](images/1.1.png)

* Проверить наличие докер образа через docker images
![](images/1.2.png)

* Запустить докер образ через docker run -d [image_id|repository]
![](images/1.3.png)

* Проверить, что образ запустился через docker ps
![](images/1.4.png)

* Посмотреть информацию о контейнере через docker inspect [container_id|container_name]

* По выводу команды определить и поместить в отчёт размер контейнера, список замапленных портов и ip контейнера
![](images/1.5.png)
![](images/1.6.png)
![](images/1.61.png)

* Остановить докер образ через docker stop [container_id|container_name]
![](images/1.7.png)

* Проверить, что образ остановился через docker ps
![](images/1.8.png)

* Запустить докер с замапленными портами 80 и 443 на локальную машину через команду run
![](images/1.9.png)

* Проверить, что в браузере по адресу localhost:80 доступна стартовая страница nginx
![](images/1.10.png)

* Перезапустить докер контейнер через docker restart [container_id|container_name]
![](images/1.11.png)

## Part 2.
* Прочитать конфигурационный файл nginx.conf внутри докер образа через команду exec
![](images/2.0.png)

* Создать на локальной машине файл nginx.conf.   
Настроить в нем по пути /status отдачу страницы статуса сервера nginx
![](images/2.1.png)

* Скопировать созданный файл nginx.conf внутрь докер образа через команду docker cp
![](images/2.2.png)

* Перезапустить nginx внутри докер образа через команду exec
![](images/2.3.png)

* Проверить, что по адресу localhost:80/status отдается страничка со статусом сервера nginx
![](images/2.4.png)

* Экспортировать контейнер в файл container.tar через команду export
![](images/2.5.png)

* Остановить контейнер
![](images/2.6.png)

* Удалить образ через docker rmi [image_id|repository], не удаляя перед этим контейнеры
![](images/2.7.png)

* Удалить остановленный контейнер
![](images/2.8.png)

* Импортировать контейнер обратно через команду import
![](images/2.9.png)

* Запустить импортированный контейнер
![](images/2.10.png)

* Проверить, что по адресу localhost:80/status отдается страничка со статусом сервера nginx
![](images/2.11.png)
![](images/2.12.png)

## Part 3.

* Запускаем nginx контейнер с портом 81.   
* Устанавливаем в него: apt install libfcgi-dev, apt install spawn-fcgi, apt install gcc
* Перекидываем нужные нам файлы в контейнер (nginx.conf обязательно перекинуть в папку nginx)
* Даём права скрипту и запускаем run.sh    
![](images/3.0.png)

## Part 4.
* С помощью команды     
$ docker build -t hello_world:1.0 .     
создаём образ и запускаем его    
$ docker run -p 80:81 -d hello_world:1.0     
![](images/4.0.png)
![](images/4.1.png)

## Part 5.
* Устанавливаем dockle через brew.    
* Запускаем диагностику образа командой:    
$ dockle hello_world:1.0   
![](images/5.0.jpeg)

## Part 6.
$ docker-compose up
![](images/6.0.png)
![](images/6.1.png)
![](images/6.2.png)
