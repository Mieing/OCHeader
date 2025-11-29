@class NSString;

@interface AWEStudioPreloadCaptionServiceImpl : NSObject <AWEStudioPreloadCaptionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadWithMusicID:(id)a0 captionResourceUrl:(id)a1;
- (void)requestWithMusicID:(id)a0 captionResourceUrl:(id)a1 musicPlayUrl:(id)a2 musicLocalAssetUrl:(id)a3 completion:(id /* block */)a4;

@end
