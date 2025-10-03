wget https://github.com/Tadomika-Ari/lib-Epi/archive/refs/heads/main.zip
unzip 'main.zip'
rm main.zip
cd "lib-Epi-main"
cd "dossier lib"
cp -r lib "../../"
cp -r include "../.."
cd ..
cd ..
rm -rf "lib-Epi-main"
