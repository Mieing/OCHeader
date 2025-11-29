@class NSString, NSMutableArray;

@interface CKResourceDBManagerImpl : NSObject <CKCacheManagerProtocol>

@property (retain, nonatomic) NSMutableArray *ckr_cacheInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)addOrUpdateCache:(id)a0;
- (id)queryCache:(id)a0;
- (BOOL)markCacheUsed:(id)a0;
- (id)queryAllCache;
- (BOOL)deleteCache:(id)a0;
- (id)defaultResourceCaches;
- (void)registerCacheInstance:(id)a0 dbQueue:(id)a1;
- (id)initWithFMDBQueue:(id)a0;
- (void)removeCacheInstance:(id)a0;
- (void).cxx_destruct;

@end
