wget https://github.com/Tadomika-Ari/lib-Epitech/archive/refs/heads/main.zip
unzip 'main.zip'
rm main.zip
cd "lib-Epitech-main"
cd "dossier_lib"
cp -r lib "../../"
cp -r include "../.."
cd ..
cd ..
rm -rf "lib-Epitech-main"
