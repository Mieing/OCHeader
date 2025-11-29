@class NSDictionary, MMKV, NSString;

@interface BDHMXAppSettingsManager : NSObject

@property (copy) NSDictionary *settingDict;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) long long lastCheck;
@property (nonatomic) BOOL synchronizing;
@property (nonatomic) long long settingTime;
@property (copy, nonatomic) NSString *customDomin;

+ (id)shareInstance;

- (void)_initCacheData;
- (id)_getCacheDictionary:(id)a0;
- (long long)_getCacheInt:(id)a0;
- (void)addNotifyObserver;
- (void)_startReuqestAppSetting;
- (void)handleResponse:(id)a0 jsonObj:(id)a1 error:(id)a2;
- (void)willEnterForeground;
- (void)syncSettings;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isNewUser;

@end
