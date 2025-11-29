@class NSString, NSMutableDictionary, AWEDataLayerFastMap, AWEDataLayerLRUList, AWEDataLayerValueDatabase;

@interface AWEDataLayerValueMetadataStorage : NSObject {
    NSString *_domain;
    AWEDataLayerFastMap *_sharedMemoryCache;
    NSMutableDictionary *_userMemoryCacheMap;
    AWEDataLayerLRUList *_sharedLruCache;
    NSMutableDictionary *_userLruCacheMap;
    AWEDataLayerValueDatabase *_sharedDatabaseMap;
    NSMutableDictionary *_userDatabaseMap;
}

+ (id)storageWithDomain:(id)a0;

- (void)updateMaxAge:(unsigned long long)a0 forKey:(id)a1 userId:(id)a2;
- (id)memoryCacheWithUserId:(id)a0;
- (id)lruCacheWithUserId:(id)a0;
- (id)databaseWithUserId:(id)a0;
- (id)metadataWithKey:(id)a0 userId:(id)a1 cacheOptions:(unsigned long long)a2;
- (void)setMetadata:(id)a0 forKey:(id)a1 userId:(id)a2 cacheOptions:(unsigned long long)a3;
- (void)updateLastReadWithMetadata:(id)a0 forKey:(id)a1 userId:(id)a2;
- (void)removeMetadataForKey:(id)a0 userId:(id)a1;
- (void)removeAllMetadatasWithUserId:(id)a0;
- (void).cxx_destruct;
- (void)clearMemoryCache;

@end
