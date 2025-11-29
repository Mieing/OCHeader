@class NSLock, NSMutableDictionary, NSString;

@interface BDPWebViewPrefetchDelegateImpl : NSObject <BDPWebViewPrefetchDelegate>

@property (retain, nonatomic) NSMutableDictionary *statusDic;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;
+ (id)getPrefetchIdentifier:(id)a0 uniqueID:(id)a1;

- (id)hitPrefetch:(id)a0 uniqueID:(id)a1;
- (void)cleanAllPrefetchStatus;
- (void)cleanPrefetchStatus:(id)a0;
- (void)prefetchWithRequest:(id)a0 uniqueID:(id)a1;
- (id)getPrefetchStat:(id)a0;
- (void)updatePrefetchStatWithURL:(id)a0 statusCode:(unsigned long long)a1 usedCache:(BOOL)a2 uniqueID:(id)a3;
- (id)getPrefetchResultWithURL:(id)a0;
- (void)updatePrefetchStatWithURL:(id)a0 uniqueID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
