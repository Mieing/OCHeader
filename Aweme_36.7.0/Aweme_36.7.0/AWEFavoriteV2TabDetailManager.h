@interface AWEFavoriteV2TabDetailManager : NSObject

+ (id)sharedInstance;

- (id)storageKey;
- (id)filterTabItemArray:(id)a0;
- (id)itemRedDotAccessibilityText:(unsigned long long)a0;
- (id)othersStorageKeyWithUserID:(id)a0;
- (id)buildTabData:(id)a0;
- (BOOL)shouldAddToTabItemArray:(unsigned long long)a0;
- (BOOL)hasECommerce;
- (BOOL)hasTabCacheWithUser:(id)a0;
- (void)requestFavoriteTabDetailWithParams:(id)a0 userModel:(id)a1 needCacheAfterRequest:(BOOL)a2 completion:(id /* block */)a3;

@end
