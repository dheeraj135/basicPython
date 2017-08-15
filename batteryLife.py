from ctypes import *
import time
import os
import winsound

class PowerClass(Structure):
    _fields_ = [('ACLineStatus', c_byte),
            ('BatteryFlag', c_byte),
            ('BatteryLifePercent', c_byte),
            ('Reserved1',c_byte),
            ('BatteryLifeTime',c_ulong),
            ('BatteryFullLifeTime',c_ulong)]    
while(1):
    powerclass = PowerClass()
    result = windll.kernel32.GetSystemPowerStatus(byref(powerclass))
    os.system("cls");
    print("BATTERY LIFE:",powerclass.BatteryLifePercent)
    print("running!!!");
    if(powerclass.BatteryLifePercent<=40 and powerclass.ACLineStatus==0):
        while(powerclass.ACLineStatus==0):
            result = windll.kernel32.GetSystemPowerStatus(byref(powerclass));
            winsound.Beep(5000,2000);
            print("PLUG");
            time.sleep(10);
    elif(powerclass.BatteryLifePercent>=80 and powerclass.ACLineStatus):
        while(powerclass.ACLineStatus):
            result = windll.kernel32.GetSystemPowerStatus(byref(powerclass));
            winsound.Beep(300,2000);
            print("REMOVE");
            time.sleep(10);
    time.sleep(120)
