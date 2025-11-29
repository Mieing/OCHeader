@class NSString, NSRecursiveLock;

@interface PIACacheService : NSObject <PIACacheService>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double lastTrimTime;
@property (nonatomic) long long minTrimTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (id)findCacheWithURL:(id)a0 ignoreExtra:(BOOL)a1 error:(id *)a2;
- (BOOL)saveCacheWithModel:(id)a0 error:(id *)a1;
- (BOOL)removeCacheWithURL:(id)a0 error:(id *)a1;
- (BOOL)removeExtraCacheWithURL:(id)a0 error:(id *)a1;
- (BOOL)removeExtraCacheWithURL:(id)a0 forFunction:(id)a1 error:(id *)a2;
- (void)injectCacheBridgeWithContext:(id)a0 instance:(id)a1;
- (void)initDataBase;
- (id)p_findCacheWithURLKey:(id)a0 error:(id *)a1;
- (BOOL)p_removeCacheWithURLKey:(id)a0 error:(id *)a1;
- (void)asyncTrimExpiresCache;
- (id)p_addPIAKeyWithURL:(id)a0;
- (id)p_findCacheWithURLKeyNoTransaction:(id)a0 error:(id *)a1;
- (BOOL)p_removeCacheWithURLKeyNoTransaction:(id)a0 error:(id *)a1;
- (id)findCacheWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
