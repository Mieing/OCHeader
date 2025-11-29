@class WCFinderCreateCoordinator, NSMutableDictionary, NSString, UIImage, MMFinderLiveGlobalImageResource;

@interface MMLiveTempCacheInfo : NSObject <WCFinderCreateCoordinatorDelegate>

@property (retain, nonatomic) NSMutableDictionary *tempCacheInfoDict;
@property (retain, nonatomic) NSMutableDictionary *globalImageResourceDict;
@property (nonatomic) unsigned long long startScene;
@property (nonatomic) int offlineScene;
@property (nonatomic) unsigned long long memberPrice;
@property (retain, nonatomic) WCFinderCreateCoordinator *mountCreateCoordinator;
@property (readonly, nonatomic) MMFinderLiveGlobalImageResource *shoppingIconImageResource;
@property (readonly, nonatomic) MMFinderLiveGlobalImageResource *giftIconImageResource;
@property (retain, nonatomic) UIImage *shoppingIconImageForNotifyMsg;
@property (retain, nonatomic) UIImage *giftIconIconImageForSongList;
@property (retain, nonatomic) UIImage *giftIconIconImageForGiftGoal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cachePivotReplayFeedReqInfo:(id)a0 forEntrcSrc:(long long)a1;
- (void)unCachePivotReplayFeedReqInfoForEntrcSrc:(long long)a0;
- (id)getCurrentCachePivotReplayFeedReqInfoForEntrcSrc:(long long)a0;
- (void)cacheOlympicWinterTorchEventInfo:(id)a0;
- (id)currentOlympicWinterTorchEventInfoCache;
- (void)removeOlympicWinterTorchEventInfoCache;
- (void)setCacheFinderBoxId:(id)a0;
- (id)currentCacheFinderBoxId;
- (void)removeCacheFinderBoxId;
- (void)setCacheFinderBoxId:(id)a0 forLiveId:(unsigned long long)a1;
- (id)currentCacheFinderBoxIdForLiveId:(unsigned long long)a0;
- (void)removeCacheFinderBoxIdForLiveId:(unsigned long long)a0;
- (void)setSensitveWordMaxNum:(unsigned int)a0;
- (unsigned int)sensitveWordMaxNum;
- (void)setRecommendReasonInfo:(id)a0 forLiveId:(unsigned long long)a1;
- (id)getRecommendReasonInfoWithLiveId:(unsigned long long)a0;
- (void)clearRecommendReasonInfos;
- (void)attachCreateCoordinator:(id)a0;
- (void)deAttachCreateCoordinator;
- (void)updateGlobalImageResource:(id)a0;
- (id)getGlobalImageResource:(unsigned int)a0;
- (void)cleanGlobalImageResources;
- (id)getFinderBoxIdDictCache;
- (id)getRecommendReasonCache;
- (void)finderCreateAccountSuccess:(id)a0;
- (void)finderCreateAccountCancel:(id)a0;
- (void).cxx_destruct;

@end
