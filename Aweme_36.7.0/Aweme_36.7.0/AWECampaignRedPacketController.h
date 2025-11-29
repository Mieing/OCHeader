@class NSTimer, NSString, NSArray, AWEPageContext, NSMutableDictionary, AWECampaignSmallRedPacketView, NSObject, AWECampaignBigRedPacketViewController;
@protocol OS_dispatch_queue, AWEStorageServiceFileKitResourceMetricInterface;

@interface AWECampaignRedPacketController : NSObject <AWEPerfResourceCleanStrategy, AWECampaignRedPacketControllerProtocol>

@property (copy, nonatomic) NSArray *resArray;
@property (copy, nonatomic) NSArray *campaignBigRedPacketPresentedArray;
@property (nonatomic) double presentBigPacketTS;
@property (retain, nonatomic) AWECampaignSmallRedPacketView *smallRedPacketView;
@property (nonatomic) BOOL hasAddedViewHierarchyChangeHandler;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ timerBlock;
@property (weak, nonatomic) AWEPageContext *currentContext;
@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheVisitQueue;
@property (retain, nonatomic) NSMutableDictionary *cacheVisitDict;
@property (retain, nonatomic) AWECampaignBigRedPacketViewController *bigRedPacketVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (BOOL)isShowingBigRedPacket;
- (id)cleanPaths;
- (void)cleanResourceWithStrategy:(unsigned long long)a0;
- (double)cleanSizeWithStrategy:(unsigned long long)a0;
- (id)campaignRedPacketVideoResourceWithID:(id)a0;
- (void)dismissBigRedPacket;
- (void)updateResourcesWithArray:(id)a0;
- (void)timeFired;
- (void)trackInteractiveVideoDataLogWithMessage:(id)a0;
- (BOOL)enablePresentSmallRedPacketForCampaignID:(id)a0 withType:(long long)a1;
- (BOOL)enablePresentBigRedPacketForCampaignID:(id)a0 withType:(long long)a1;
- (void)trackInteractiveVideoActionLogWithMessage:(id)a0;
- (void)clearRedPacketContext;
- (id)currentVideoResourcWithCampaignID:(id)a0;
- (id)alphaPlayerConfigNamed:(id)a0 withCampaignID:(id)a1;
- (id)LottieNamed:(id)a0 withCampaignID:(id)a1;
- (void)presentBigRedPacketOnViewController:(id)a0 withModel:(id)a1 andContext:(id)a2;
- (id)redPacketSchemaWithCampaignID:(id)a0;
- (void)handleFeedRefreshCompletion:(id)a0;
- (long long)bigRedPacketSplitFrameNumWithCampaignID:(id)a0;
- (void)presentSmallRedPacketOnViewController:(id)a0 withCampaignID:(id)a1;
- (void)presentSmallRedPacketOnViewController:(id)a0 withCampaignID:(id)a1 animated:(BOOL)a2;
- (void)monitorService:(id)a0 status:(unsigned long long)a1 level:(unsigned long long)a2 error:(id)a3 extraInfo:(id)a4 campaignID:(id)a5;
- (BOOL)campaignRedPacketTimeOrSchemaInvalidWithCampaignID:(id)a0;
- (BOOL)campaignRedPacketIsBarWithActivityType:(id)a0 activityTag:(id)a1;
- (id)campaignRedPacketBarResourceWithActivityType:(id)a0 activityTag:(id)a1;
- (void)updateBigRedPacketShowStatus:(BOOL)a0 withCampaignID:(id)a1;
- (void)trackSmallPacketShow;
- (void)updateCacheVisitDictionaryWithKey:(id)a0 value:(id)a1;
- (void)cleanUpResourceWithExpireDay:(long long)a0;
- (double)calculateCleanSizeWithExpireDay:(long long)a0;
- (BOOL)isResourcePathExpired:(id)a0 expireDay:(long long)a1;
- (BOOL)enablePresentBigRedPacketBarForActivityType:(id)a0 activityTag:(id)a1 withType:(long long)a2;
- (id)redPacketBarIconSchemaWithActivityType:(id)a0 activityTag:(id)a1;
- (id)redPacketBarTitleWithActivityType:(id)a0 activityTag:(id)a1;
- (id)redPacketBarSchemaWithActivityType:(id)a0 activityTag:(id)a1;
- (id)redPacketBarTypeWithActivityType:(id)a0 activityTag:(id)a1;
- (id)redPacketBarTagWithActivityType:(id)a0 activityTag:(id)a1;
- (id)redPacketBarWithActivityType:(id)a0 activityTag:(id)a1;
- (void).cxx_destruct;
- (void)cancelTimer;
- (id)init;
- (void)dealloc;

@end
