# Python-C

<p><b>Note!:</b> This is <b>NOT a PROPER example of a HTTP client</b> with sockets in C.
Its main purpose is to teach how to build Python modules using the Python C API!</p>

<b>I used ```Python 3.8.10``` and ```gcc 9.4.0```</b>

<b>See the code of the 'HTTP client' in ```src/``` directory and
[myhttp.c](/myhttp.c) for Python C extention code.</b>

### The 1st step:

<b>Install ```<Python.h>``` to enable the inclusion of the header in your code:</b>
```sh
sudo apt-get install python3-dev
```

### The 2nd step:

Configure localhost:
1. Open ```/etc/hosts``` with any editor and paste this code:
```
127.0.0.1   localhost localhost.localdomain localhost4 localhost4.localdomain4
```

### The 3rd step:

<b>Install ```MyHttp``` package</b>
1. Install the package globally:
```sh
sudo python3 setup.py install
```
Check installation with:
```sh
pip3 freeze
```
You should see this in result your installed modules:
```sh
...
MyHttp==1.0.0
...
```
2. Or install it locally:
```sh
sudo python3 setup.py build
```

<i>Codes below will create a ```.so``` file in ```build/``` folder.</i>

### 4th step:

<b>Test your code:</b>

<i><b>Note:</b> Before testing with localhost, run ```server.py``` (default port is: 8080):</i>

```sh
python3 server.py
```

Run ```test.py``` as:

```sh
python3 test.py --full-print
```

When the ```--full-print``` flag is provided, the ```test.py``` will print full responses.

</br>

<i>Use ```--no-external``` or ```--no-internal``` to exclude external or local requests, respectively.</i>
