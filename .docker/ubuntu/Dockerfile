# image de base
FROM ubuntu:latest

#  creation du dossier des sources qui sera mappé avec le dossier ./src courant
RUN mkdir -p /home/cgeindreau/ft_ls


RUN apt-get update 


#  installation   (apt-get install -y == yes to all)
RUN apt-get install -y openssh-server
RUN mkdir /var/run/sshd
RUN echo 'root:rootpassword' | chpasswd
RUN sed -i 's/PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config

# SSH login fix. Otherwise user is kicked off after login
RUN sed 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' -i /etc/pam.d/sshd

ENV NOTVISIBLE "in users profile"
RUN echo "export VISIBLE=now" >> /etc/profile

EXPOSE 22
CMD ["/usr/sbin/sshd", "-D"]

# VIM
RUN apt-get install -y vim 

# GCC => COMPILATEUR C
RUN apt-get install -y build-essential
RUN apt-get install -y manpages-dev


CMD tail -f /dev/null