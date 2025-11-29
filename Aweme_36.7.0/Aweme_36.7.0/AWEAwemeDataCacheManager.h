@class NSString, HMDThreadSafeDictionary;

@interface AWEAwemeDataCacheManager : NSObject <AWEAwemeDataCacheManagerProtocol>

@property (retain, nonatomic) HMDThreadSafeDictionary *dataCacheDictonary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)splashWillAppear;
- (void)splashDidAppear;
- (void)splashDidDisappear:(id)a0;
- (void)splashDidClick;
- (void)splashDidSkip;
- (void)livePlayerLoadFirstFrame:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)clearDataCache;

@end
