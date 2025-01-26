> [!CAUTION]
> The whole esp32-EXTD project is one big experiment. There are no guarantees that everything will work - no guarantees!

![Bruce Main Menu](./media/pictures/bruce_banner.jpg)

# :shark: Bruce esp32-EXTD
Bruce esp32-EXTD is a fork of Bruce firmware aimed at “Plug and Play” operation of ESP32-S3, ST7735 display and additional modules.

## :building_construction: How to install


Alternatively, you can download the latest binary from releases or actions and flash locally using esptool.py
```sh
esptool.py --port /dev/ttyACM0 write_flash 0x00000 bruce-esp32extd.bin
```

## Task list
- [ ] ST7735 Compatibility
- [ ] Button compatibility

## :keyboard: Bruce Discord Server ()

Contact us in our [Discord Server](https://discord.gg/WJ9XF9czVT)!

## :bookmark_tabs: Bruce Wiki

[Wiki](https://github.com/pr3y/Bruce/wiki).
[FAQ](https://github.com/pr3y/Bruce/wiki/FAQ)

## :clap: Acknowledgements

+ [@bmorcelli](https://github.com/bmorcelli) for new core and a bunch of new features, also porting to many devices!
+ [@IncursioHack](https://github.com/IncursioHack) for adding RF and RFID modules features.
+ [@Luidiblu](https://github.com/Luidiblu) for logo and UI design assistance.
+ [@eadmaster](https://github.com/eadmaster) for adding a lot of features.
+ [@rennancockles](https://github.com/rennancockles) for a lot of RFID code, refactoring and others features.
+ [@7h30th3r0n3](https://github.com/7h30th3r0n3) refactoring and a lot of help with WiFi attacks.
+ [Smoochiee]() for Bruce PCB design.
+ [TH3_KR4K3N]() for Stick cplus extender PCB design.
+ Everyone who contributed in some way to the project, thanks :heart:

## :construction: Disclaimer

Bruce is a tool for cyber offensive and red team operations, distributed under the terms of the Affero General Public License (AGPL). It is intended for legal and authorized security testing purposes only. Use of this software for any malicious or unauthorized activities is strictly prohibited. By downloading, installing, or using Bruce, you agree to comply with all applicable laws and regulations. This software is provided free of charge, and we do not accept payments for copies or modifications. The developers of Bruce assume no liability for any misuse of the software. Use at your own risk.