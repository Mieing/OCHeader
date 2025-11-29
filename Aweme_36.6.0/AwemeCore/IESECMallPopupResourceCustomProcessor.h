@class NSString;

@interface IESECMallPopupResourceCustomProcessor : NSObject <IESECMallPopupResourcePreloadService, IESForestFetcherProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;

+ (unsigned long long)preloadThreshold;
+ (id)canRetryStatusCode;
+ (long long)forestFetcherID;
+ (void)preloadResource:(id)a0 channel:(id)a1 retryTimes:(unsigned long long)a2;
+ (void)monitorResourceHitCache:(BOOL)a0 channel:(id)a1 url:(id)a2 isPreload:(BOOL)a3 duration:(long long)a4;
+ (id)lastPreloadCountRecordCacheKey:(id)a0;
+ (unsigned long long)preloadExpireTimes;
+ (void)privatePreloadResource:(id)a0 channel:(id)a1 retryTimes:(unsigned long long)a2;
+ (id)storage;

- (void)fetchResourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)cancelFetch;

@end
