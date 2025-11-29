@interface ASSSettingModelZZZX : NSObject

+ (void)clearSetting;
+ (id)getTimeInterval;
+ (id)getDegradeTime;
+ (void)setDegradeTime:(id)a0;
+ (id)getAgentSwitch;
+ (void)setAgentSwitch:(id)a0;
+ (id)getWebrtcSwitch;
+ (void)setWebrtcSwitch:(id)a0;
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
+ (void)setTimeInterval:(id)a0;

@end
