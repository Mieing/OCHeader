@class NSString, AWEDataLayerValueMetadataStorage;

@interface AWEDataLayerValueStorage : NSObject <AWEDataLayerKVStorageInterface> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSString *_domain;
    AWEDataLayerValueMetadataStorage *_metadataStorage;
}

@property (class, nonatomic) BOOL useQueueForValueStorage;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setLogCallback:(void /* function */ *)a0;
+ (id)storageWithDomain:(id)a0;
+ (id)sharedStorage;

- (id)objectForKey:(id)a0 config:(id)a1;
- (void)updateMaxAge:(unsigned long long)a0 forKey:(id)a1 userId:(id)a2;
- (void)setDictionary:(id)a0 forKey:(id)a1 config:(id)a2;
- (void)setArray:(id)a0 forKey:(id)a1 config:(id)a2;
- (void)setData:(id)a0 forKey:(id)a1 config:(id)a2;
- (void)setString:(id)a0 forKey:(id)a1 config:(id)a2;
- (void)removeObjectForKey:(id)a0 userId:(id)a1;
- (BOOL)boolForKey:(id)a0 config:(id)a1;
- (id)p_valueForKey:(id)a0 config:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1 config:(id)a2;
- (void)setValue:(id)a0 forKey:(id)a1 valueType:(int)a2 config:(id)a3;
- (long long)integerForKey:(id)a0 config:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1 config:(id)a2;
- (double)doubleForKey:(id)a0 config:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1 config:(id)a2;
- (id)stringForKey:(id)a0 config:(id)a1;
- (id)objectForKey:(id)a0 objectClass:(Class)a1 config:(id)a2;
- (void)setObject:(id)a0 forKey:(id)a1 objectClass:(Class)a2 valueType:(int)a3 config:(id)a4;
- (id)arrayForKey:(id)a0 config:(id)a1;
- (id)dictionaryForKey:(id)a0 config:(id)a1;
- (id)dataForKey:(id)a0 config:(id)a1;
- (void)removeValueForKey:(id)a0 userId:(id)a1;
- (void)removeAllObjectsWithUserId:(id)a0;
- (id)cacheInfoForKey:(id)a0 userId:(id)a1;
- (void)p_setValue:(id)a0 forKey:(id)a1 userId:(id)a2 valueType:(int)a3 config:(id)a4;
- (void)updateMaxAge:(unsigned long long)a0 forKey:(id)a1;
- (id)cacheInfoForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)clearMemoryCache;

@end
