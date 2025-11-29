@class NSDictionary, MMKV;
@protocol BDUGLuckyCacheIntercepterProtocol;

@interface BDUGLuckyCache : NSObject

@property (retain, nonatomic) MMKV *cache;
@property (weak, nonatomic) id<BDUGLuckyCacheIntercepterProtocol> cacheIntercepter;
@property (nonatomic) BOOL shouldFixDictionaryCrash;
@property (nonatomic) BOOL useTryCatch;
@property (retain, nonatomic) NSDictionary *cleanupCacheSettings;
@property (nonatomic) BOOL cleanupCacheEnabled;

+ (void)registerCacheIntercepter:(id)a0;
+ (void)asyncStartup;
+ (void)fixLostAccessTimestamps;
+ (id)sharedInstance;

- (id)getObjectOfClass:(Class)a0 forKey:(id)a1;
- (BOOL)isValidForKey:(id)a0;
- (BOOL)setString:(id)a0 forKey:(id)a1 withExpiredTimestampMS:(double)a2;
- (void)cleanupCacheWithExpireDay:(double)a0 keys:(id)a1 containKeys:(id)a2 completion:(id /* block */)a3;
- (void)trimAsync;
- (BOOL)setLastAccessTimestampForKey:(id)a0;
- (void)removeExpiredValueForKey:(id)a0;
- (BOOL)isNeedAccessTimestampForKey:(id)a0;
- (double)lastAccessTime:(id)a0;
- (id)__allCleanupCacheKeys;
- (id)__allCleanupCacheContainKeys;
- (id)lastAccessKey:(id)a0;
- (id)expiredKey:(id)a0;
- (BOOL)setExpiredTimestamp:(double)a0 forKey:(id)a1;
- (BOOL)setSet:(id)a0 forKey:(id)a1;
- (BOOL)setDouble:(double)a0 forKey:(id)a1;
- (BOOL)containsKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)setString:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (BOOL)boolForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)init;
- (void)removeAllObjects;
- (BOOL)boolForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (BOOL)setDictionary:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0 defaultValue:(id)a1;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (BOOL)setInt64:(long long)a0 forKey:(id)a1;
- (id)setForKey:(id)a0;
- (long long)int64ForKey:(id)a0;

@end
