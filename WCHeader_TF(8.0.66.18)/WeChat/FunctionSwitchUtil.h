@interface FunctionSwitchUtil : NSObject

+ (unsigned int)convertType:(unsigned int)a0;
+ (BOOL)addSwitchOplog:(unsigned int)a0 SwitchValue:(unsigned int)a1 sync:(BOOL)a2;
+ (void)setPluginSwitch:(unsigned int)a0 statusBit:(unsigned int)a1 setOpen:(BOOL)a2 sync:(BOOL)a3;
+ (void)setStatusSwitch:(unsigned int)a0 statusBit:(unsigned int)a1 setOpen:(BOOL)a2 sync:(BOOL)a3;
+ (void)setExtStatusSwitch:(unsigned int)a0 statusBit:(unsigned long long)a1 setOpen:(BOOL)a2 sync:(BOOL)a3;
+ (void)setFinderLiveExtSwitch:(unsigned int)a0 statusBit:(unsigned long long)a1 setOpen:(BOOL)a2 sync:(BOOL)a3;
+ (void)setFinderSettingSwitch:(unsigned long long)a0 open:(BOOL)a1 sync:(BOOL)a2;
+ (void)setExtStatusSwitchInvertedAtServer:(unsigned int)a0 statusBit:(unsigned long long)a1 setClose:(BOOL)a2 sync:(BOOL)a3;
+ (BOOL)addModPushSwitchOplog:(unsigned int)a0 SwitchValue:(unsigned int)a1 sync:(BOOL)a2;
+ (void)setModPushExtStatusSwitch:(unsigned int)a0 statusBit:(unsigned long long)a1 setOpen:(BOOL)a2 sync:(BOOL)a3;
+ (void)setStatusExt2Switch:(unsigned int)a0 statusBit:(unsigned long long)a1 setOpen:(BOOL)a2 sync:(BOOL)a3;
+ (void)setStatusExt2Switch:(unsigned int)a0 statusBit:(unsigned long long)a1 setOpen:(BOOL)a2 sync:(BOOL)a3 insertDB:(BOOL)a4;

@end
