@interface AWEFavoriteTabCacheManager : NSObject

+ (void)storeCollectsTotalStatus:(long long)a0 userID:(id)a1;
+ (id)storageKeyWithUserID:(id)a0;
+ (long long)collectsTotalStatusWithUserID:(id)a0;
+ (BOOL)hasTabCacheWithUserModel:(id)a0;
+ (id)getCachedTabDataWithUserModel:(id)a0;
+ (void)cacheTabDataWithModels:(id)a0 userModel:(id)a1;
+ (id)othersStorageKeyWithUserID:(id)a0;
+ (id)tabItemModel:(id)a0;
+ (id)tabItemInfo:(id)a0;
+ (void)removeCachedTabDataWithUserModel:(id)a0;
+ (BOOL)isCurrentUser:(id)a0;

@end
