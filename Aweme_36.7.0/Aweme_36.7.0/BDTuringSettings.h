@class NSString, NSMutableDictionary, BDTuringConfig, NSObject;
@protocol OS_dispatch_queue;

@interface BDTuringSettings : BDTuringService

@property (nonatomic) long long startRequestTime;
@property (retain, nonatomic) NSMutableDictionary *settings;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) long long period;
@property (nonatomic) long long lastSuccessTime;
@property (nonatomic) long long retryInterval;
@property (nonatomic) long long retryCount;
@property (nonatomic) BOOL preCreate;
@property (nonatomic) BOOL isUpdatingSettings;
@property (retain, nonatomic) BDTuringConfig *config;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *iv;
@property (copy, nonatomic) NSString *lastRegion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) id /* block */ completion;

+ (id)settingsForAppID:(id)a0;
+ (id)settingsForConfig:(id)a0;
+ (void)registerDefaultSettingBlock:(id /* block */)a0 forKey:(id)a1;
+ (void)addCustomToSettings:(id)a0;
+ (id)customSettings;
+ (void)registerCustomSettingBlock:(id /* block */)a0 forKey:(id)a1;
+ (void)unregisterCustomSettingBlockForKey:(id)a0;
+ (void)addDefaultToSettings:(id)a0;
+ (id)appDefaultSettings;
+ (void)unregisterDefaultSettingBlockForKey:(id)a0;
+ (void)registerAppDefaultSettingBlock:(id /* block */)a0 forKey:(id)a1;
+ (void)unregisterAppDefaultSettingBlockForKey:(id)a0;
+ (id)defaultSettings;

- (BOOL)shouldRequest;
- (id)initWithAppID:(id)a0;
- (void)loadLocalSettings;
- (id)requestURLForPlugin:(id)a0 URLType:(id)a1 region:(id)a2;
- (id)settingsForPlugin:(id)a0 key:(id)a1 defaultValue:(id)a2;
- (BOOL)rollBackSwitchForKey:(id)a0;
- (void)checkAndFetchSettingsWithCompletion:(id /* block */)a0;
- (void)addPlugin:(id)a0 key1:(id)a1 region:(id)a2 value:(id)a3;
- (BOOL)safeBoolSettingsForPlugin:(id)a0 key:(id)a1 defaultValue:(BOOL)a2;
- (long long)safeIntegerSettingsForPlugin:(id)a0 key:(id)a1 defaultValue:(long long)a2;
- (double)safeTimeIntervalSettingsForPlugin:(id)a0 key:(id)a1 defaultValue:(double)a2;
- (void)reloadCustomSettings;
- (void)reloadDefaultSettings;
- (void)reportRequestResult:(long long)a0;
- (void)readCommonSettings;
- (id)aes256gcmDecryptedResponse:(id)a0 withKeySeed:(id)a1 andIvSeed:(id)a2;
- (BOOL)handleResponseData:(id)a0 region:(id)a1;
- (void)fetchSettingsWithRetry:(long long)a0 useBackup:(BOOL)a1;
- (void)addPlugin:(id)a0 key1:(id)a1 region:(id)a2 value:(id)a3 forceUpdate:(BOOL)a4;
- (id)keyFromSeed:(id)a0;
- (id)ivFromSeed:(id)a0;
- (id)safeStringSettingsForPlugin:(id)a0 key:(id)a1 defaultValue:(id)a2;
- (void)cleanSettings;
- (void).cxx_destruct;
- (id)serviceName;
- (void)dealloc;
- (BOOL)serviceAvailable;
- (void)handleCompletion;

@end
