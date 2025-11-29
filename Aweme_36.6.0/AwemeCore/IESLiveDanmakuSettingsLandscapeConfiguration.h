@class NSMutableDictionary;

@interface IESLiveDanmakuSettingsLandscapeConfiguration : IESEZDanmakuSettingConfiguration

@property (retain, nonatomic) NSMutableDictionary *currentSettings;
@property (nonatomic) double customScale;

+ (id)configuration;
+ (id)sharedInstance;

- (void)updateCurrentSettings;
- (void)loadFromLocal;
- (BOOL)shouldSaveToLocal;
- (void)saveSettingValue:(id)a0 withSettingKey:(id)a1;
- (id)configValueWithSettingKey:(id)a0;
- (void).cxx_destruct;
- (void)resetToDefault;
- (id)defaultSettings;

@end
