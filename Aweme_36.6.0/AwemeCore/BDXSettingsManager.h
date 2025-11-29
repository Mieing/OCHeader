@class NSString, MMKV, NSDictionary;

@interface BDXSettingsManager : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) long long lastCheck;
@property (nonatomic) double startupTime;
@property (nonatomic) long long settingsTime;
@property (copy, nonatomic) NSString *ctxInfo;
@property (retain, nonatomic) NSDictionary *customParam;
@property (readonly) NSDictionary *settingDict;
@property (retain, nonatomic) NSString *customDomin;

+ (id)shareInstance;

- (id)settingDomain;
- (id)_getCacheDictionary:(id)a0;
- (void)addNotifyObserver;
- (void)settingsDidStartUp;
- (void)setupSettingDict;
- (void)initSettingsWithParam:(id)a0;
- (void)setupByteSync;
- (int)bytesyncBusinessID;
- (void)handleByteSyncData:(id)a0 data:(id)a1;
- (void)syncSettings:(BOOL)a0 completion:(id /* block */)a1;
- (long long)fetchSettingTime;
- (void)handleResponse:(id)a0 jsonObj:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)saveSettingTime:(long long)a0;
- (void)saveSettingDict:(id)a0 storageKey:(id)a1;
- (void)updateWithKeyPath:(id)a0 object:(id)a1;
- (void)asyncFetchSettingDictionaryWithCompletion:(id /* block */)a0;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isNewUser;

@end
