@class NSDictionary, NSMutableDictionary;
@protocol HTSKVStore;

@interface AWELivePreDanmakuSettingConfiguration : IESEZDanmakuSettingConfiguration

@property (retain, nonatomic) NSMutableDictionary *currentSettings;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (retain, nonatomic) NSDictionary *defaultSettings;
@property (nonatomic) BOOL clearSettingByDefaultSettingCheck;
@property (nonatomic) BOOL didChangeSettingByManual;

+ (double)basicSpeed;
+ (id)configuration;
+ (id)sharedInstance;

- (void)updateCurrentSettings;
- (void)loadFromLocal;
- (BOOL)shouldSaveToLocal;
- (void)saveSettingValue:(id)a0 withSettingKey:(id)a1;
- (id)originDefaultSettings;
- (void)checkSettingIsDefaultIfNeeded;
- (void)clearLocal;
- (void)clearSettingValueWithSettingKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetToDefault;

@end
