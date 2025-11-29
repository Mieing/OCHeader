@class VePlayerSettingModel;

@interface VePlayerSettingManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _settingsCacheLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _settingsDataLock;
}

@property (nonatomic) BOOL isRequesting;
@property (nonatomic) double lastRequestTime;
@property (retain, nonatomic) VePlayerSettingModel *settingsModel;
@property (nonatomic) unsigned long long currentServiceType;

+ (id)sharedInstance;

- (void)updateSettingModel:(id)a0;
- (void)updateSettingCache:(id)a0;
- (void)receiveAppWillEnterForegroundNotification:(id)a0;
- (id)getDictionary:(id)a0 defaultValue:(id)a1;
- (double)getFloat:(id)a0 defaultValue:(double)a1;
- (void)loadSettingCache;
- (id)getSettingValueWithKey:(id)a0;
- (void)synchronizeSettingsWithServiceType:(unsigned long long)a0 force:(BOOL)a1;
- (BOOL)getBOOL:(id)a0 defaultValue:(BOOL)a1;
- (long long)getInt:(id)a0 defaultValue:(long long)a1;
- (id)getStringArray:(id)a0 defaultValue:(id)a1;
- (id)getBOOLArray:(id)a0 defaultValue:(id)a1;
- (id)getIntArray:(id)a0 defaultValue:(id)a1;
- (id)getFloatArray:(id)a0 defaultValue:(id)a1;
- (id)getArrayArray:(id)a0 defaultValue:(id)a1;
- (id)getDictionaryArray:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)getString:(id)a0 defaultValue:(id)a1;

@end
