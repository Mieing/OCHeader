@class NSString;

@interface IESECBuyNowPreRenderAdapter_Douyin : NSObject <IESECBuyNowPreRenderAdapter>

@property (nonatomic) long long displayLinkCountDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preRenderH5ContainerWithSchema:(id)a0 cacheKey:(id)a1 afterFrames:(unsigned long long)a2;
- (void)preRenderH5ContainerWithSchema:(id)a0 cacheKey:(id)a1;
- (void)preRenderH5ContainerAfter3FramesWithSchema:(id)a0 cacheKey:(id)a1;

@end
