@class MMKV;

@interface BDUGDeviceUnionCacheManager : NSObject

@property (retain, nonatomic) MMKV *cache;

+ (id)sharedInstance;

- (id)getObjectOfClass:(Class)a0 forKey:(id)a1;
- (BOOL)setString:(id)a0 forKey:(id)a1 withExpiredTimestampMS:(double)a2;
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
- (id)stringForKey:(id)a0;
- (BOOL)setDictionary:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0 defaultValue:(id)a1;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (BOOL)setInt64:(long long)a0 forKey:(id)a1;
- (long long)int64ForKey:(id)a0;

@end
