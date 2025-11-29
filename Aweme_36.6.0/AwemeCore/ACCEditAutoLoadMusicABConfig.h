@interface ACCEditAutoLoadMusicABConfig : NSObject

+ (BOOL)autoLoadMusicEnableUseRecomGlobalSwitch;
+ (BOOL)isCurrentSingleImageWithPublishViewModel:(id)a0;
+ (BOOL)isCurrentMultiImagesWithPublishViewModel:(id)a0;
+ (BOOL)isCurrentImageAndVideoMixedWithPublishViewModel:(id)a0;
+ (BOOL)preloadHotMusicInRecommend;
+ (BOOL)autoLoadMusicEnableUseRecomWithPublishViewModel:(id)a0;
+ (BOOL)shouldSetMaxWaitingTimeForFrameExtract;
+ (double)maxWaitingTimeForFrameExtract;
+ (BOOL)shouldPreloadMusicWithoutRecom;
+ (double)maxWaitingTimeForPreloadMusicWithoutRecom;

@end
