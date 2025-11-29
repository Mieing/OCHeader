@class NSHashTable;

@interface AWEWebImageLoadMonitor : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSHashTable *loadMetricsObservers;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (nonatomic) unsigned long long undecodeImageCacheSize;

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (void)trackImageShowWithImage:(id)a0 bizTag:(id)a1 params:(id)a2;
+ (void)setTrackCallback:(id /* block */)a0;
+ (id)getBizTagWithURL:(id)a0;
+ (BOOL)enableImageCacheDomainAllowList;
+ (id)bizTag:(id)a0;
+ (BOOL)enableImageLoadMonitor;
+ (BOOL)isEnabledForImageLoadMonitoring;
+ (void)trackImageLoad:(long long)a0 URL:(id)a1 URLs:(id)a2 index:(long long)a3 from:(long long)a4 error:(id)a5 timeInterval:(double)a6 requestID:(id)a7 bizTag:(id)a8 retryInfos:(id)a9 fromAWE:(BOOL)a10;
+ (BOOL)isEnabledForAnimatedImageFramesMonitoring;
+ (void)_trackAnimatedImageFramesError:(id)a0 URL:(id)a1 videoID:(id)a2 is6Frames:(BOOL)a3;
+ (BOOL)enableTrackImageShow;
+ (void)trackImageLoadIfNeeded:(id)a0 from:(long long)a1;
+ (id /* block */)bd_imageRequestCompletionWithCompletion:(id /* block */)a0;
+ (void)trackImageLoadWithRequest:(id)a0 from:(long long)a1;
+ (void)trackAnimatedImageFramesError:(id)a0 URL:(id)a1 videoID:(id)a2 isTrackScene:(BOOL)a3 is6Frames:(BOOL)a4;
+ (id)trackingQueue;
+ (id)sharedMonitor;

- (void)distributeImageMonitorWithLogType:(id)a0 attributes:(id)a1 extra0:(id)a2 extra1:(id)a3;
- (void)distributeLoadMetricsWithRequest:(id)a0;
- (void)addLoadMetricsObserver:(id)a0;
- (void)removeLoadMetricsObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addImageMonitorObserver:(id)a0;
- (void)removeImageMonitorObserver:(id)a0;

@end
