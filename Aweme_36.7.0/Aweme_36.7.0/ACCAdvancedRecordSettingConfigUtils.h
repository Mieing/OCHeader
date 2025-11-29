@interface ACCAdvancedRecordSettingConfigUtils : NSObject

+ (id)typeToKey:(unsigned long long)a0;
+ (void)saveSettingIntegerValue:(unsigned long long)a0 withType:(unsigned long long)a1;
+ (void)saveSettingBoolValue:(unsigned long long)a0 withType:(unsigned long long)a1;
+ (BOOL)isSwitchType:(unsigned long long)a0;
+ (BOOL)isLocalChanged:(unsigned long long)a0;

@end
