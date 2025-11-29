@interface AWEPlayInteractionABSettings : NSObject

+ (BOOL)explanationPanelEntranceShowEnable;
+ (BOOL)enableFeedVideoTagsLazyLoad;
+ (BOOL)enableTruncationOptimization;
+ (BOOL)isExperimentTypeV1;
+ (BOOL)isExperimentTypeV2;
+ (id)sceneForDescTruncation;
+ (id)sceneWhiteListForTruncationOptimization;
+ (long long)videoTypeTruncationOptimization;
+ (id)truncationTextForLong;
+ (BOOL)enableShowIconForLong;
+ (id)truncationTextForShort;
+ (BOOL)enableShowIconForShort;
+ (id)truncationTextForEmpty;
+ (BOOL)enableShowIconForEmpty;
+ (BOOL)enableUseWeakStyleForLong;
+ (BOOL)enableUseWeakStyleForShort;
+ (BOOL)enableUseWeakStyleForEmpty;
+ (id)descriptionTruncationOptimizationConfig;
+ (id)truncationOptimizationConfigForEmpty;
+ (id)truncationOptimizationConfigForShort;
+ (id)truncationOptimizationConfigForLong;
+ (BOOL)enableWeeklyAndRecommendGuideTag;
+ (id)dailyWeeklyAndRecommendGuideTagShowConfig;
+ (BOOL)enableFeedTitleStandardization;
+ (BOOL)enableDelayDanmakuInteractionUnload;
+ (BOOL)dailyWeeklyAndRecommendTagGuideIntegratedDisplay;
+ (BOOL)dailyWeeklyAndRecommendTagGuideParallelDisplay;
+ (BOOL)countDownLeftElementDisabled;

@end
