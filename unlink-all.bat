@echo off
echo unlinking P:\scripts from dayz
rmdir "C:\Program Files (x86)\Steam\steamapps\common\DayZ\scripts" /S /Q

echo unlinking dayz\addons from workbench
rmdir "C:\Program Files (x86)\Steam\steamapps\common\DayZ Tools\Bin\Workbench\addons" /S /Q

echo unlinking source code
rmdir "P:\DeepNorth_MainMenu" /S /Q
rmdir "C:\Program Files (x86)\Steam\steamapps\common\DayZ\DeepNorth_MainMenu" /S /Q

echo unlinking packed pbos
rmdir "P:\@DeepNorth_MainMenu" /S /Q

pause