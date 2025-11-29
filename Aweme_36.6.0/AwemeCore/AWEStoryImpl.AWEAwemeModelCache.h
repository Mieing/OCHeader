@interface AWEStoryImpl.AWEAwemeModelCache : NSObject <AWEAwemeModelCacheProtocol> {
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ sceneInOC;
    void /* unknown type, empty encoding */ cacheConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_awemeModelCache;
}

- (id)cacheScene;
- (id)initWithCacheScene:(id)a0 capacity:(long long)a1;
- (long long)cacheSizeForCurrentUser;
- (long long)cacheSizeForUserID:(id)a0;
- (BOOL)readyForCurrentUser;
- (BOOL)readyForUserID:(id)a0;
- (void)loadDiskCacheForCurrentUserWithCompletion:(id /* block */)a0;
- (void)loadDiskCacheForUserID:(id)a0 completion:(id /* block */)a1;
- (void)writeDiskCacheForCurrentUser;
- (void)writeDiskCacheForUserID:(id)a0;
- (void)removeDiskCacheForCurrentUser;
- (void)removeDiskCacheForUserID:(id)a0;
- (id)cachedItemIDsForCurrentUser;
- (id)cachedItemIDsForUserID:(id)a0;
- (id)retrieveSingleItemForCurrentUserWithID:(id)a0;
- (id)retrieveSingleItemWithID:(id)a0 forUserID:(id)a1;
- (id)retrieveAllItemsForCurrentUser;
- (id)retrieveAllItemsForUserID:(id)a0;
- (void)updateSingleItemForCurrentUserWithAweme:(id)a0;
- (void)updateSingleItemForCurrentUserWithAweme:(id)a0 syncDiskCache:(BOOL)a1;
- (void)updateSingleItemWithAweme:(id)a0 forUserID:(id)a1;
- (void)updateSingleItemWithAweme:(id)a0 forUserID:(id)a1 syncDiskCache:(BOOL)a2;
- (void)updateItemsForCurrentUserWithAwemeList:(id)a0;
- (void)updateItemsForCurrentUserWithAwemeList:(id)a0 syncDiskCache:(BOOL)a1;
- (void)updateItemsWithAwemeList:(id)a0 forUserID:(id)a1;
- (void)updateItemsWithAwemeList:(id)a0 forUserID:(id)a1 syncDiskCache:(BOOL)a2;
- (void)removeSingleItemForCurrentUserWithItemID:(id)a0;
- (void)removeSingleItemForCurrentUserWithItemID:(id)a0 syncDiskCache:(BOOL)a1;
- (void)removeSingleItemWithItemID:(id)a0 forUserID:(id)a1;
- (void)removeSingleItemWithItemID:(id)a0 forUserID:(id)a1 syncDiskCache:(BOOL)a2;
- (void)removeItemsForCurrentUserWithIDList:(id)a0;
- (void)removeItemsForCurrentUserWithIDList:(id)a0 syncDiskCache:(BOOL)a1;
- (void)removeItemsWithIDList:(id)a0 forUserID:(id)a1;
- (void)removeItemsWithIDList:(id)a0 forUserID:(id)a1 syncDiskCache:(BOOL)a2;
- (void)clearCacheForCurrentUser;
- (void)clearCacheForCurrentUserWithSyncDisk:(BOOL)a0;
- (void)clearCacheForUserID:(id)a0;
- (void)clearCacheForUserID:(id)a0 syncDiskCache:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (long long)cacheCapacity;

@end
