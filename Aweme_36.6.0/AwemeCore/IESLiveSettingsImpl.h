@class IESLiveSettingsStorageNew, NSString;
@protocol IESLiveABTestService;

@interface IESLiveSettingsImpl : NSObject <IESLiveDISettings, IESLiveSettings> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) BOOL enableDebug;
@property (retain, nonatomic) id<IESLiveABTestService> abTestService;
@property (retain, nonatomic) IESLiveSettingsStorageNew *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)stringForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)numberForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)arrayForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)dictionaryForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)dictionaryForKeyStartingWith:(id)a0;
- (id)valueForKey:(id)a0 defaultValue:(id)a1;
- (id)valueForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)valueForKey:(id)a0 type:(unsigned long long)a1 defaultValue:(id)a2 freeze:(BOOL)a3;
- (void)updateSettingValue:(id)a0 forKey:(id)a1;
- (void)addSubscriber:(id)a0 forKey:(id)a1;
- (void)removeSubscriber:(id)a0 forKey:(id)a1;
- (id)__valueForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)arrayForKey:(id)a0 debugValue:(id)a1 defaultValue:(id)a2;
- (id)dictionaryForKey:(id)a0 debugValue:(id)a1 defaultValue:(id)a2;
- (id)__valueForKey:(id)a0 type:(unsigned long long)a1 defaultValue:(id)a2 freeze:(BOOL)a3;
- (BOOL)isSettingResultValid:(id)a0 type:(unsigned long long)a1;
- (BOOL)isStringEnableToNum:(id)a0;
- (id)arrayForKey:(id)a0 debugValue:(id)a1;
- (id)dictionaryForKey:(id)a0 debugValue:(id)a1;
- (id)numberForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)init;
- (id)numberForKey:(id)a0 defaultValue:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0 defaultValue:(id)a1;
- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0 defaultValue:(id)a1;
- (void)dealloc;
- (id)stringForKey:(id)a0 defaultValue:(id)a1;

@end
