echo linking P:\scripts to dayz
mklink /J  "C:\Program Files (x86)\Steam\steamapps\common\DayZ\scripts\" "P:\scripts\"

echo linking dayz\addons to workbench -- this link is needed if you use CF
mklink /J "C:\Program Files (x86)\Steam\steamapps\common\DayZ Tools\Bin\Workbench\addons" "C:\Program Files (x86)\Steam\steamapps\common\DayZ\addons"

echo linking source code
mklink /J "P:\DeepNorth_MainMenu\" "C:\Users\Shadow\Documents\_Workspace_\Source\DeepNorth_MainMenu\" 
mklink /J "C:\Program Files (x86)\Steam\steamapps\common\DayZ\DeepNorth_MainMenu\" "C:\Users\Shadow\Documents\_Workspace_\Source\DeepNorth_MainMenu\" 

echo linking packed pbos
mklink /J "P:\@DeepNorth_MainMenu" "C:\Users\Shadow\Documents\_Workspace_\Packed\@DeepNorth_MainMenu" 


