@interface ASSSettingModel : NSObject

+ (void)clearSetting;
+ (BOOL)getVkeySwitchInTokenMode;
+ (void)setVkeySwitchInTokenMode:(BOOL)a0;
+ (BOOL)getVkeySwitchInDataMode;
+ (void)setVkeySwitchInDataMode:(BOOL)a0;
+ (BOOL)getGidSwitch;
+ (void)setGidSwitch:(BOOL)a0;
+ (BOOL)getLogUploadSwitch;
+ (void)setLogUploadSwitch:(BOOL)a0;
+ (void)initializeSettings;
+ (void)saveSetting;

@end
