# ACIOLauncher

A launcher that takes input from an ACIO reader attached via serial to a cabinet.

This will initialize either slotted or wavepass reader hardware, plugged into any standard COM port on actual BEMANI hardware. Once initialized, it will present a menu of games to launch, based on a configured ini file. If a game is not selected, it will boot the first option after 60 seconds.

The project provided is a Visual Studio 2008 project that produces a statically-compiled executable which is ready to run on embedded XP. This is suitable for execution on the operating system that comes with various BEMANI games.

The ini file format is simple. For each game, there should be a section which is the game name. For each section, there should be a "launch" key which points to the full path of the executable or batch file to execute when selecting this option. An example is below:

```
[Lincle]
launch=D:\LincleData\contents\gamestart.bat

[Resort Anthem]
launch=D:\RAData\contents\gamestart.bat

[Sirius]
launch=D:\Sirius\contents\gamestart.bat
```

To correctly execute the built code, run the executable with one parameter specifying the location of the INI file. Optionally, you can add the `--debug` attribute for additional debugging. An example invocation is as follows:

```
ACIOLauncher.exe games.ini
```

This fork also includes support for touchscreen games without traditional keypads. Simply pass the `--touch` attribute, and instead of initializing the ACIO, a GUI will pop up, with all game configs appearing as buttons. No changes to the ini file are required, simply press the button of the game you would like to run.

```
ACIOLauncher.exe games.ini --touch
```

The GUI spawns on monitor 0 by default. You can optionally include the monitor number for games where the touchscreen is not the main monitor (such as on Lightning or Valkyre cabs)

```
ACIOLauncher.exe games.ini --touch 1
```