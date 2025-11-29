@class NSMutableDictionary, YYCache, NSString, AWERelatedRecomendPanelRecord;

@interface AWERelatedRecomendManager : NSObject <AWERelatedRecomendManagerProtocol>

@property (retain, nonatomic) AWERelatedRecomendPanelRecord *record;
@property (retain, nonatomic) YYCache *cache;
@property (retain, nonatomic) NSMutableDictionary *relationConfirmedDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getTempDataControllerForAwemeId:(id)a0;
- (double)awemeListCacheTimeInterval;
- (void)removeTempDataControllerForAwemeId:(id)a0;
- (long long)maxPanelShowTimes;
- (long long)maxDisinterestTimes;
- (long long)maxNoConsumeTimes;
- (long long)awemeListCacheMaxCount;
- (BOOL)shouldShowRelatedPanelWithAwemeId:(id)a0;
- (void)showPanelOnceWithAwemeId:(id)a0;
- (void)noInterestOnce;
- (void)consumpPanelVideo;
- (void)registTempDataController:(id)a0 forAwemeId:(id)a1;
- (double)requestPanelAheadTimeInterval;
- (double)autoShowPanelAheadTimeInterval;
- (double)autoHidePanelAheadTimeInterval;
- (BOOL)canShowRecommendBar;
- (void).cxx_destruct;

@end
