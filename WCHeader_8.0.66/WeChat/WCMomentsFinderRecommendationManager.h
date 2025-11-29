@class WCDataItem, NSString, NSArray, NSMutableSet, WCMomentsFinderRecommendationReporter, WCMomentsFinderRecommendationInfo, WCFacade;

@interface WCMomentsFinderRecommendationManager : NSObject <IWCTimelineMgrExt, IWCTimeLineViewControllerExt, WCFinderRedDotExt, MMLimitedModeExt>

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long configurations_updateConditionN;
@property (nonatomic) long long configurations_updateConditionM;
@property (nonatomic) long long configurations_updateTimeInterval;
@property (nonatomic) long long configurations_displayingTimeInterval;
@property (nonatomic) BOOL configurations_allowsDisplayingDynamically;
@property (copy, nonatomic) NSString *configurations_customizedSeparatorTips;
@property (nonatomic) unsigned long long firstCachedItemID;
@property (nonatomic) BOOL hasDisplayedFirstCachedItem;
@property (copy, nonatomic) NSArray *itemIDsForMissRead;
@property (retain, nonatomic) NSMutableSet *freshItemIDs;
@property (nonatomic) unsigned long long firstItemIDForRecommendationInfoUpdates;
@property (nonatomic) BOOL hasFetchedRecommendationInfo;
@property (retain, nonatomic) WCMomentsFinderRecommendationInfo *recommendationInfo;
@property (retain, nonatomic) WCDataItem *recommendationPlaceholderItem;
@property (nonatomic) double lastTimeThatFetchedRecommendationInfo;
@property (nonatomic) double lastTimeThatDisplayedRecommendationInfo;
@property (copy, nonatomic) NSString *preloadGroupID;
@property (nonatomic) BOOL isPreloading;
@property (retain, nonatomic) WCMomentsFinderRecommendationReporter *reporter;
@property (weak, nonatomic) WCFacade *referredFacade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)beginNewSession;
- (void)updateFirstCachedItemID:(unsigned long long)a0;
- (void)updateFirstCacheItemDisplayStatusWithDisplayingDataItem:(id)a0;
- (void)updateItemIDsForMissRead:(id)a0;
- (void)updateFreshItemIDsWithResponseDataItems:(id)a0;
- (void)calculateFirstItemIDForRecommendationInfoUpdates;
- (void)checkUpdateRecommendationInfoWithDataItem:(id)a0;
- (void)fetchRecommendationInfo;
- (id)createRecommendationInfoWithCtrlInfo:(id)a0;
- (void)didReceiveFinderCtrlInfo:(id)a0 tag:(id)a1;
- (void)clearRecommendationInfo;
- (void)regenerateRecommendationPlaceholderItemAfterDataItem:(id)a0 index:(unsigned long long)a1;
- (void)willDisplayRecommendationPlaceholderItem:(id)a0;
- (void)didEndDisplayingRecommendationPlaceholderItem:(id)a0;
- (BOOL)hasPreloaded;
- (void)resetPreloadContext;
- (void)preloadRecommendationInfoIfNeeded:(id)a0;
- (void)cancelPreloadingRecommendationInfoIfNeeded;
- (void)navigateToFinderWithRecommendationInfo:(id)a0 fromViewController:(id)a1;
- (void)onFirstPageUpdated:(unsigned long long)a0 datas:(id)a1 feedIds:(id)a2 feedFlags:(id)a3 wsGroupDict:(id)a4;
- (void)onTimelineWillEnterPage:(id)a0;
- (void)onTimelineDidLeavePage:(id)a0;
- (void)onTimeLineViewWillDisplayDataItem:(id)a0;
- (void)onTimelineViewDidEndDisplayingDataItem:(id)a0;
- (void)onTimeLineViewMissReadJumpBtnClick;
- (void)finderRedDotDataReceiveRedDotBindObjectPathKey:(id)a0;
- (void)onLimitedModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)a0 bizType:(long long)a1;
- (void)_limitedModeDidChange;
- (void).cxx_destruct;

@end
