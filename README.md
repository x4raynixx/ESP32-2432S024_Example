Step 1: Go to Library Manager in Arduino IDE -> Install "CST816D" | Author: "Maxime Andre"
Step 2: Go to Library Manager in Arduino IDE -> Install "TFT_eSPI" | Author: "Bodmer"
Step 3: From the `CST816D -> src` Folder, copy or move `cst816d.cpp` To ->
OS {
  Windows {
     Goto: `%USERPROFILE%\Documents\Arduino`
  }
  Linux {
     Goto: `~/Documents/Arduino/`
  }
} -> `.../Arduino/libraries/cst816d/src/cst816d.cpp` <- Replace the File with the in the Repo

Step 4: Open Arduino Project, and upload the code to **ESP32-2432S024**
