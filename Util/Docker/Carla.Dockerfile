FROM carla-prerequisites:latest

ARG GIT_BRANCH

USER ue4

RUN cd /home/ue4 && \
  if [ -z ${GIT_BRANCH+x} ]; then git clone --depth 1 https://github.com/FrancescoPinto/carla.git; \
  else git clone --depth 1 --branch $GIT_BRANCH https://github.com/FrancescoPinto/carla.git; fi && \
  cd /home/ue4/carla && \
  ./Update.sh 

RUN cd /home/ue4/carla && \
  make CarlaUE4Editor && \
  make PythonAPI && \
  make build.utils 

RUN cd /home/ue4/carla && \
  make package

#rm -r /home/ue4/carla/Dist

#Customized to add pyprob

#RUN pip3 install --upgrade pip
#RUN pip3 install torch==1.2.0 torchvision==0.4.0 --progress-bar off

#RUN pip3 install hiyapyco jupyter gnureadline scipy scikit-learn scikit-image

#RUN mkdir /home/ue4/blender-probprog

#COPY /home/francesco/git/blender-probprog/dependencies/_gdbm.cpython-37m-x86_64-linux-gnu.so /usr/local/blender/2.79/python/lib/python3.7/lib-dynload/_gdbm.cpython-37m-x86_64-linux-gnu.so

#RUN cd /home/ue4 && git clone https://github.com/pyprob/pyprob.git && cd pyprob && git checkout cc3e444 && pip3 install .


WORKDIR /home/ue4/carla
