@class NSRecursiveLock, NSMutableDictionary, NSDictionary, NSString, NSMutableArray;

@interface PIACloudSettingsService : NSObject <PIACloudSettingsService>

@property (copy, nonatomic) NSDictionary *settings;
@property (nonatomic) double lastFetchSuccessfullyTime;
@property (retain, nonatomic) NSRecursiveLock *locker;
@property (retain, nonatomic) NSRecursiveLock *observerLocker;
@property (retain, nonatomic) NSRecursiveLock *defaultLocker;
@property (retain, nonatomic) NSMutableDictionary *defaultSettings;
@property (retain, nonatomic) NSMutableArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)fetchCloudSettings:(id)a0;
- (void)addDefaultSettings:(id)a0;
- (id)getOriginSettings;
- (id)arrayValueForKey:(id)a0;
- (void)registerSettingHandler:(id)a0;
- (id)host_objectValueForKey:(id)a0;
- (BOOL)host_boolValueForKey:(id)a0 defaultValue:(long long)a1;
- (long long)host_integerValueForKey:(id)a0 defaultValue:(long long)a1;
- (float)host_floatValueForKey:(id)a0 defaultValue:(long long)a1;
- (id)host_stringValueForKey:(id)a0;
- (id)host_arrayValueForKey:(id)a0;
- (id)host_dictionaryValueForKey:(id)a0;
- (void)setupDefaultSettings;
- (id)p_defaultObjectForKey:(id)a0;
- (float)floatValueForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectValueForKey:(id)a0;
- (long long)integerValueForKey:(id)a0;
- (id)stringValueForKey:(id)a0;
- (BOOL)boolValueForKey:(id)a0;
- (id)dictionaryValueForKey:(id)a0;

@end
