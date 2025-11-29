@class NSString, NSDictionary;

@interface AWEAwemeSettings : AWEBaseSettings <AWESettingsComboRequestProtocol, AWEAppSettingUpdateProtocol> {
    NSDictionary *_settings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isSettingsUpdated;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } settingsLock;
@property (nonatomic) BOOL lastUpdateByIncrement;
@property (copy, nonatomic) NSDictionary *keyVidsMap;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } keyVidsMapLock;
@property (copy, nonatomic) id /* block */ appSettingsNetworkImpl;
@property (nonatomic) BOOL shouldPrintLogWhenUpdate;
@property (nonatomic) BOOL disableABKeyVids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)fetchSettings;
- (void)printLog:(id)a0;
- (id)getVidsForKey:(id)a0;
- (void)overrideSettings:(id)a0 needCleanCache:(BOOL)a1 silent:(BOOL)a2;
- (BOOL)enableLaunchCache;
- (void)updateAllKeyVidsMap:(id)a0;
- (void)removeSettingsDataWithKeys:(id)a0;
- (void)overrideSettings:(id)a0 needCleanCache:(BOOL)a1;
- (void)incrementalUpdateData:(id)a0 unchangedKeyList:(id)a1;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setSettings:(id)a0;
- (id)settings;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
