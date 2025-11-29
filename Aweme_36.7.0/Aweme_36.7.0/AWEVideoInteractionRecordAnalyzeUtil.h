@interface AWEVideoInteractionRecordAnalyzeUtil : NSObject

+ (void)recordVideoPlayInteraction:(id)a0;
+ (void)recordUserDislikeInteraction:(id)a0;
+ (void)recordUserSkipInteraction:(id)a0;
+ (void)recordUserSkipInteractionForDislike:(id)a0;
+ (void)cleanRecordUserSkipInteractionForDislike;
+ (BOOL)userHasSkippedEnoughVideosForDislikeToast;
+ (id)getDislikeItemsInSessionArray;
+ (id)getSkipItemsInSessionArray;
+ (BOOL)needRefetchRecommendFeed;

@end
