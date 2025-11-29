@class NSCache, NSMutableSet, NSString;

@interface IESForestMemoryCache : NSObject <IESGurdEventDelegate, NSCacheDelegate>

@property (nonatomic) long long cacheLimit;
@property (retain, nonatomic) NSCache *sharedCache;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } keysLock;
@property (retain, nonatomic) NSMutableSet *cacheKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)gurdDidCleanCachePackageForAccessKey:(id)a0 channel:(id)a1;
- (void)handleMemoryWarning:(id)a0;
- (void)cleanCacheForAccessKey:(id)a0 channel:(id)a1;
- (void)updateCacheLimit:(long long)a0;
- (id)responseForKey:(id)a0;
- (BOOL)enableDiscardableResponse;
- (BOOL)canReplaceOldResponse:(id)a0 withNewResponse:(id)a1;
- (void)setResponse:(id)a0 forKey:(id)a1;
- (void)removeResponseForKey:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)dealloc;
- (id)responseForRequest:(id)a0;

@end
