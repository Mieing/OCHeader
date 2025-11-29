@class MMKV;

@interface BDECPigeonKVStore : NSObject

@property (retain, nonatomic) MMKV *store;

- (void)enumerateKeys:(id /* block */)a0;
- (id)objectOfClass:(Class)a0 forKey:(id)a1;
- (int)int32ForKey:(id)a0;
- (long long)int64ForKey:(id)a0 defaultValue:(long long)a1;
- (id)initWithName:(id)a0 relativePath:(id)a1;
- (int)int32ForKey:(id)a0 defaultValue:(int)a1;
- (id)dateForKey:(id)a0 defaultValue:(id)a1;
- (id)dataForKey:(id)a0 defaultValue:(id)a1;
- (unsigned long long)getDataCacheSize;
- (id)dataForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (void)setDate:(id)a0 forKey:(id)a1;
- (void)setInt32:(int)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0 defaultValue:(BOOL)a1;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0 defaultValue:(double)a1;
- (BOOL)boolForKey:(id)a0;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (float)floatForKey:(id)a0 defaultValue:(float)a1;
- (id)initWithName:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)dateForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)stringForKey:(id)a0 defaultValue:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setClass:(Class)a0 forClassName:(id)a1;
- (void)setInt64:(long long)a0 forKey:(id)a1;
- (long long)int64ForKey:(id)a0;

@end
