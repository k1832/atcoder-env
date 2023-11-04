# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.195.0/containers/cpp/.devcontainer/base.Dockerfile
# [Choice] Debian / Ubuntu version (use Debian 11/9, Ubuntu 18.04/21.04 on local arm64/Apple Silicon): debian-11, debian-10, debian-9, ubuntu-21.04, ubuntu-20.04, ubuntu-18.04
ARG VARIANT=debian-11
FROM mcr.microsoft.com/vscode/devcontainers/cpp:0-${VARIANT}

# [Optional] Uncomment this section to install additional packages.
# RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
#     && apt-get -y install --no-install-recommends <your-package-list-here>

RUN sudo apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && sudo apt-get -y install --no-install-recommends python3-distutils ccache clangd

# Install Python 3.11
RUN export DEBIAN_FRONTEND=noninteractive \
    && sudo apt-get -y install --no-install-recommends \
        wget build-essential libncursesw5-dev libssl-dev \
        libsqlite3-dev tk-dev libgdbm-dev libc6-dev libbz2-dev \
        libffi-dev zlib1g-dev
RUN sudo wget https://www.python.org/ftp/python/3.11.3/Python-3.11.3.tgz
RUN sudo tar xzf Python-3.11.3.tgz
WORKDIR /Python-3.11.3
RUN ./configure --enable-optimizations
RUN sudo make altinstall
RUN rm -rf Python-3.11.3 Python-3.11.3.tgz

RUN sudo unlink /usr/bin/python3
RUN sudo ln -s /usr/local/bin/python3.11 /usr/bin/python3

# Pip
RUN curl -sSL https://bootstrap.pypa.io/get-pip.py -o get-pip.py && python3 get-pip.py && rm get-pip.py
RUN pip3 install online-judge-tools

# Precompile header file (reference: https://qiita.com/DaikiSuyama/items/e502e09a1090f4a2cee3)
WORKDIR /usr/include/aarch64-linux-gnu/c++/10/bits
RUN sudo mkdir stdc++.h.gch
RUN sudo g++ stdc++.h -std=c++20 -o stdc++.h.gch/stdc++_c++20.h.gch
