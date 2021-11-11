## Arduino Wifi Remote Relay Switch
Arduino ile wifi üzerinden röle açma ve kapama devresi. Bu devre ile cep telefonunuzdan, bilgisayarınızdan ışık, sulama sistemi gibi çeşitli sistemlerin açma kapama işlemlerini yapabilirsiniz.

### Gerekenler:
- Arduino uno veya nano
- Enc28j60 ethernet lan modülü
- 5V tekli röle (röle sayısını ihityacınıza göre arttırabilirsiniz)

###  Bağlantı Diyagramı:![wifi_relay_control drawio](https://user-images.githubusercontent.com/68166850/141258653-6f48306c-62af-4372-acf8-a303a9ea54ab.png)

### Test:

Enc28j60'ı ethernet ile bir modeme bağlayın, arduinoyuda bilgisayarınıza bağlayın ve serial port ekranından baud değerini 115200 olarak ayarlayın. Modül internete bağlandıktan sonra serial ekrana ip adresini bastıracaktır.IP adresini aldıktan sonra arduinoyu bilgisayardan çıkarıp harici besleyebilirsiniz. Bu ip adresinide herhangi bir browsera giriyoruz ve on/off butonu ile röle kontrolünü sağlıyoruz.

![i1](https://user-images.githubusercontent.com/68166850/141261155-cc3e428c-b1d7-4856-b4ac-5bad8161bbc1.jpeg)

![1](https://user-images.githubusercontent.com/68166850/141261215-eaafaa03-5aaa-4ca1-825d-fdecc32bc608.jpeg)

![r](https://user-images.githubusercontent.com/68166850/141261774-d478a1f3-b926-4e7f-93d7-5055723706e9.jpeg)
