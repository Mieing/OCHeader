@interface AWEDCFeedSettingManager : NSObject

+ (BOOL)enableOutOfTimeRefreshConfigWithReferString:(id)a0;
+ (long long)timeOfOutOfTimeRefreshConfigWithReferString:(id)a0;
+ (BOOL)enablePadConfig;
+ (id)padDCConfig;
+ (BOOL)enableFormatLogger;
+ (BOOL)enableFormatLoggerInstance;
+ (BOOL)useDefaultLogWhenDowngrade;
+ (double)padSpacing;
+ (BOOL)enableTidyModelImageOptimize;
+ (BOOL)albumInnerEnableCoverPlaceHolder;
+ (BOOL)albumInnerPreloadConfigOpt;
+ (BOOL)albumInnerDelayCommentLoad;
+ (BOOL)enableUpdatePadTransition;
+ (BOOL)enableDCFeedCardLargeFont;
+ (BOOL)enableTypeSettingOpt;
+ (BOOL)enableRemoveCollectInfo;
+ (id)keepCollectInfoWhiteList;
+ (BOOL)imagePreviewEnableIgnoreCache;
+ (BOOL)liveCheckStatusChange;
+ (BOOL)enableSetRecommendReasonV2Type;
+ (BOOL)enableDCFeedNewTopicLynxCell;
+ (BOOL)disableCommonLynxWithReferString:(id)a0;
+ (BOOL)enableDuplicateFilterTypeFetch;
+ (BOOL)innerCacheNoTimer;
+ (long long)padHorizontalBreakPoint;
+ (BOOL)enableOptimizeCellEndDisplay;
+ (BOOL)enableDislikePanelOpt;
+ (BOOL)enableSlardarHmdPageExtension;
+ (BOOL)enableAWEDCFeedAsyncUpdateListKit;
+ (BOOL)enableFixUpdateDataState;
+ (BOOL)enableOptimizeSetFirstLoadDidSuccess;
+ (BOOL)enableCacheFirstScreenData;
+ (BOOL)useNewPlaceHolderRefactor;
+ (id)outOfTimeRefreshConfig;
+ (id)dcFeedFormatLoggerConfig;
+ (id)dcFeedCardTitleOpt;
+ (id)dcFeedImageCacheHitRateOpt;
+ (BOOL)enableImageCacheHitRateOpt;
+ (BOOL)disableAlbumVideoPreload;
+ (BOOL)enableImageCacheHitRateOptWithDCFeedData;
+ (BOOL)enableImageCacheHitRateOptWithFeedData;

@end
