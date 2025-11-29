@class NSString, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEBaseSettings : NSObject <AWEAppSettingGetterProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    NSMutableDictionary *_stableSettings;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (copy) NSDictionary *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1 stable:(BOOL)a2;
- (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1;
- (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)stringForKeyPath:(id)a0 defaultValue:(id)a1;
- (long long)intValueForKeyPath:(id)a0 defaultValue:(long long)a1;
- (id)stringForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1;
- (long long)intValueForKeyPath:(id)a0 defaultValue:(long long)a1 stable:(BOOL)a2;
- (id)objectForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (double)doubleValueForKeyPath:(id)a0 defaultValue:(double)a1 stable:(BOOL)a2;
- (id)objectForKeyPath:(id)a0 defaultValue:(id)a1;
- (double)doubleValueForKeyPath:(id)a0 defaultValue:(double)a1;
- (id)findValueInDict:(id)a0 path:(id)a1 needLock:(BOOL)a2;
- (BOOL)isSettingsValid:(id)a0;
- (void)clearStableCacheWithKeys:(id)a0;
- (BOOL)enableLaunchCache;
- (void)setStableSettingsWithObject:(id)a0 forKeyPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
