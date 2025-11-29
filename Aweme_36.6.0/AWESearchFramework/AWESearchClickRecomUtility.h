@interface AWESearchClickRecomUtility : NSObject

+ (BOOL)unifyConfigEnable:(id)a0;
+ (id)fetchGeneralSearchModelWithComponent:(id)a0;
+ (id)getFromGroupId:(id)a0 awemeModel:(id)a1 displayItems:(id)a2;
+ (long long)waterfallCommonCardShowDelay;
+ (BOOL)enableWaterfallPreFetchClickRecom;
+ (BOOL)isGeneralSearchWaterfallLayoutWithModel:(id)a0;
+ (double)searchRecomWordShowDelayTime;
+ (BOOL)shouldShowWaterfallClickRecomCard:(id)a0 hasClicked:(BOOL)a1 docType:(long long)a2;
+ (id)getBussinessId:(BOOL)a0 awemeModel:(id)a1;
+ (id)getSearchModelWithIndex:(long long)a0 items:(id)a1;
+ (long long)getInsertIdxWithModel:(id)a0 currentIdx:(long long)a1 displayItems:(id)a2 cachalotView:(id)a3;
+ (BOOL)enableWaterfallInterceptCardAround;
+ (double)waterfallRecommendYDistance;
+ (BOOL)enableWaterfallClickRecom;
+ (BOOL)enableWaterfallInsertAnimation;
+ (BOOL)isFusionCard:(id)a0;
+ (void)beginTrigger;
+ (BOOL)enableRegisterPlayCallbackV1:(id)a0;
+ (BOOL)isCardConsumTimeValidWithDocType:(long long)a0;
+ (id)waterfallCustomCardDocTypeList;
+ (long long)waterfallCustomCardShowDelay;
+ (id)getFusionCardItemID:(id)a0 awemeModel:(id)a1 displayItems:(id)a2;
+ (BOOL)isSingleCardAtNewGeneralLayoutWithModel:(id)a0;
+ (id)createWaterfallRecomViewWithType:(long long)a0 delegate:(id)a1;
+ (double)heightOfRecomView:(long long)a0 model:(id)a1 cardWidth:(double)a2;
+ (long long)waterfallCustomCardImageStyle;
+ (long long)waterfallRecommendTextLimit;
+ (long long)waterfallRecommendCellHeight;
+ (id)config;

@end
