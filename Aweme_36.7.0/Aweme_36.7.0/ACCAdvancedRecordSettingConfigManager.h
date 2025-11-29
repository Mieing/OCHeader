@class NSDictionary;

@interface ACCAdvancedRecordSettingConfigManager : NSObject

@property (retain, nonatomic) NSDictionary *configMap;

- (BOOL)getBoolSettingsOf:(unsigned long long)a0 defaultValue:(BOOL)a1;
- (unsigned long long)getIndexSettingsOf:(unsigned long long)a0;
- (BOOL)getBoolSettingsOf:(unsigned long long)a0;
- (BOOL)getPostSaveSwitch:(unsigned long long)a0;
- (unsigned long long)getRealIndex:(unsigned long long)a0 withType:(unsigned long long)a1;
- (id)parserServerConfig;
- (void).cxx_destruct;

@end
