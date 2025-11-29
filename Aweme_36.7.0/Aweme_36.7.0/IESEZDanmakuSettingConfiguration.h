@class NSMutableDictionary;

@interface IESEZDanmakuSettingConfiguration : NSObject

@property (retain, nonatomic) NSMutableDictionary *loadedSettings;

+ (id)configUniqKey;
+ (id)configuration;

- (void)loadFromLocal;
- (BOOL)shouldSaveToLocal;
- (void)saveSettingValue:(id)a0 withSettingKey:(id)a1;
- (id)configDicsWithSettingKey:(id)a0 settingValue:(id)a1;
- (id)configValueKey:(id)a0 settingKey:(id)a1 settingValue:(id)a2;
- (void)load;
- (void).cxx_destruct;
- (void)resetToDefault;
- (id)defaultSettings;

@end
