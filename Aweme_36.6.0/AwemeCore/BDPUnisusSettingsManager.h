@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface BDPUnisusSettingsManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _gRWLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _completionLock;
    NSDictionary *_settings;
    long long _settingsVersion;
    NSDictionary *_defaultSettings;
    NSMutableDictionary *_mockSettings;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isReported;
    BOOL _readBackup;
}

@property (retain, nonatomic) NSMutableArray *completionArray;

+ (void)injectJSONObjectWithStringFunction:(void /* function */ *)a0;
+ (id)sharedManager;

- (id)getSettings;
- (void)observeUpdateForConfigName:(id)a0 withHandler:(id /* block */)a1;
- (void)addUpdateListener:(id /* block */)a0;
- (id)s_dictionaryValueForKey:(id)a0;
- (long long)s_integerValueForKey:(id)a0;
- (BOOL)s_boolValueForKey:(id)a0;
- (id)s_arrayValueForKey:(id)a0;
- (void)onReceivePushMessage:(id)a0 createAt:(double)a1 payload:(id)a2;
- (id)s_stringValueForKey:(id)a0;
- (float)s_floatValueForKey:(id)a0;
- (id)s_objectValueForKey:(id)a0;
- (void)updateSettingsImmediately:(id /* block */)a0;
- (long long)getSettingsTime;
- (void)updateSettingsAuto:(BOOL)a0 completion:(id /* block */)a1;
- (void)setupDefaultSettings:(id)a0;
- (void)updateSettingsIfNeed:(id /* block */)a0;
- (void)injectCommonParams:(id)a0;
- (void)injectCommonHeaders:(id)a0;
- (void)mockSettings:(id)a0;
- (void)clearMockSettings;
- (void)setupSettingsInstance;
- (void)trackSettingsFirstGetKey:(id)a0 result:(BOOL)a1 duration:(double)a2 settingsTime:(long long)a3;
- (void).cxx_destruct;
- (id)init;
- (void)setupListener;

@end
