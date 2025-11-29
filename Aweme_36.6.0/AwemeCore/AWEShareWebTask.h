@interface AWEShareWebTask : AWEShareCommonTask

+ (id)taskWithWebModel:(id)a0;
+ (id)commonShareTypes;
+ (BOOL)showGenarateImageChannelWithContext:(id)a0;
+ (id)updateShareChannels:(id)a0 webMetadata:(id)a1 context:(id)a2;
+ (id)commonShareTypesAddExtraChannels:(id)a0;
+ (id)allShareTypeOfSandBoxImage;
+ (id)allShareChannelsOfWeb:(id)a0 context:(id)a1;
+ (id)allShareTypesOfWeb;
+ (id)allShareChannelsOfWebView:(id)a0 context:(id)a1 task:(id)a2;
+ (id)allShareTypesOfWebView;
+ (id)allShareTypesOfWebImage;
+ (id)removeType:(id)a0 InChannels:(id)a1;
+ (BOOL)canShowForwardToStoryWithContext:(id)a0;
+ (void)configChannelWithContext:(id)a0;
+ (void)configTokenWithContext:(id)a0;
+ (id)contextWithWebModel:(id)a0;
+ (id)statsShareWebStage;
+ (id)prepareShareWebModelStage;
+ (id)webRequestAlbumAccessStage;
+ (id)webGetLocalImageStage;

- (void)prepareWithChannel:(id)a0 inView:(id)a1;
- (BOOL)doesPlatformSupportsImageSharing:(long long)a0;

@end
