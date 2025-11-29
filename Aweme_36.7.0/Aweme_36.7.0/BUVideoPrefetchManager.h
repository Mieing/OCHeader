@class NSLock, NSMutableDictionary, NSString;

@interface BUVideoPrefetchManager : NSObject <BUPlayerSettingsProtocol>

@property (retain, nonatomic) NSMutableDictionary *loaderDic;
@property (retain, nonatomic) NSLock *loaderLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoCachePath;
+ (id)sharedInstance;

- (id)loaderForURL:(id)a0;
- (void)prefetchWithVideoUrl:(id)a0 storgeName:(id)a1 prefetchSize:(unsigned long long)a2 prefetchStartBlock:(id /* block */)a3 prefetchFinshBlock:(id /* block */)a4 prefetchCancelBlock:(id /* block */)a5;
- (void)cancelPrefetch:(id)a0;
- (BOOL)prefetchUrlInQueue:(id)a0;
- (long long)queryPrefetchSizeWithVideoUrl:(id)a0;
- (void)csj_prefetchWithNativeAd:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
