@interface CKResourceCacheManagerInternal : NSObject

+ (id)sharedInstance;

- (void)cleanAllCache;
- (void)cleanAllCacheByLRUWithThresholdCache;
- (void)p_removeEffectFolderIfNeedWithFilePath:(id)a0 cacheInfo:(id)a1;
- (BOOL)p_checkLastCKCacheCleanTimeExpired;
- (void)p_updateLastCKCacheCleanTime;
- (void)cleanCacheWithExpireSeconds:(unsigned long long)a0 cacheType:(long long)a1 extraParameters:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)getTotalCacheSize;
- (id)init;
- (void)dealloc;

@end
