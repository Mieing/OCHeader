@class NSString;

@interface IESLocalLifeBcmVirtualCacheBizService : HTSService <IESLocalLifeBcmVirtualCacheBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setPreloadBcmVirtualCacheWithFinalBtm:(id)a0 bcmMap:(id)a1;
- (void)setPrefetchBcmVirtualCacheWithFinalBtm:(id)a0 bcmMap:(id)a1 cacheKey:(id)a2;
- (id)getPreloadBcmVirtualCacheForUUID:(id)a0;
- (id)getPrefetchBcmVirtualCacheForUUID:(id)a0;
- (void)removePreloadBcmVirtualCacheForUUID:(id)a0;
- (void)removePrefetchBcmVirtualCacheForUUID:(id)a0;

@end
