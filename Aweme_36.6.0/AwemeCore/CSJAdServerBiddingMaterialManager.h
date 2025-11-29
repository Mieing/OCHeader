@interface CSJAdServerBiddingMaterialManager : NSObject

+ (id)getBiddingPreFetchMaterialWithKey:(id)a0 slot:(id)a1 type:(long long)a2;
+ (void)preLoadMaterialsWith:(id)a0 slot:(id)a1;
+ (id)getBiddingPreCacheInfoWithSlot:(id)a0 error:(id *)a1;
+ (void)biddingPreFetchMaterialWithSlot:(id)a0 requestID:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
+ (id)biddingPersistenceWithSlot:(id)a0 type:(long long)a1;
+ (void)removeMaterialWithMaterialMeta:(id)a0 adSlot:(id)a1;
+ (BOOL)invalidDecrypyAdm:(id)a0;
+ (id)getBiddingPreCacheMaterialWithSlot:(id)a0 error:(id *)a1;
+ (id)getBiddingPreFetchMaterialWithAdmCreatives:(id)a0 slot:(id)a1;
+ (void)biddingGetMaterialWithSlot:(id)a0 adm:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
+ (void)biddingPreCacheMaterialWithSlot:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
+ (id)manager;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copy;
- (id)mutableCopy;

@end
