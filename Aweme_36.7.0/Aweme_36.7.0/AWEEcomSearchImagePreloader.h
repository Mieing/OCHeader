@class NSString;

@interface AWEEcomSearchImagePreloader : HTSService <AWEEcomSearchImagePreloaderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)prefetchDynamicPatchImageWithArray:(id)a0 maxCount:(long long)a1 hasPreloadedImageUrls:(id)a2 sceneTag:(id)a3 completion:(id /* block */)a4;
- (void)ecomPreloadWithURLArray:(id)a0 sceneTag:(id)a1 completion:(id /* block */)a2;
- (void)trackImagePreloadingHitRateWithArray:(id)a0 firstScreenImageUrls:(id)a1 sceneTag:(id)a2 extra:(id)a3;

@end
