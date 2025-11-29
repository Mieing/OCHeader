@class NSMutableDictionary;

@interface AWETeenAwemeDataCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *dataCacheDictonary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)clearDataCache;

@end
