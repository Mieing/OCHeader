@class FinderReddotFreqInfo, FinderSyncClientStatus_DiscoveryReddotInfo, FinderSyncClientStatus_FinderNewLifePrefetchInfo, FinderSyncClientStatus_ReddotSession, NSMutableArray;

@interface FinderSyncClientStatus : WXPBGeneratedMessage

@property (nonatomic) BOOL hasDiscoveryReddot;
@property (nonatomic) unsigned long long latestFinderMentionEntranceExposureTime;
@property (nonatomic) unsigned long long latestFinderMentionEntranceExposureNumber;
@property (retain, nonatomic) FinderSyncClientStatus_ReddotSession *reddotSession;
@property (retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *finderDiscoveryReddotInfo;
@property (nonatomic) BOOL isFinderDau;
@property (retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *liveDiscoveryReddotInfo;
@property (nonatomic) unsigned long long flagConsumedDiscoveryReddotBusinessType;
@property (retain, nonatomic) FinderSyncClientStatus_FinderNewLifePrefetchInfo *finderNewlifePrefetchInfo;
@property (retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *socialHotSpotDiscoveryReddotInfo;
@property (nonatomic) unsigned int findersyncUserScene;
@property (retain, nonatomic) FinderReddotFreqInfo *finderReddotFreqInfo;
@property (nonatomic) BOOL isInFlow;
@property (nonatomic) unsigned int remainingFinderReddotFreqCtrlInterval;
@property (retain, nonatomic) NSMutableArray *cachedFeedStatusList;
@property (nonatomic) unsigned int remainingTimelineCacheInterval;
@property (nonatomic) unsigned int lastExitFinderTabType;

+ (void)initialize;

- (void)setLastExitFinderTabType:(unsigned int)a0;
- (unsigned int)lastExitFinderTabType;
- (void)setRemainingTimelineCacheInterval:(unsigned int)a0;
- (unsigned int)remainingTimelineCacheInterval;
- (void)setCachedFeedStatusList:(id)a0;
- (id)cachedFeedStatusList;
- (void)setRemainingFinderReddotFreqCtrlInterval:(unsigned int)a0;
- (unsigned int)remainingFinderReddotFreqCtrlInterval;
- (void)setIsInFlow:(BOOL)a0;
- (BOOL)isInFlow;
- (void)setFinderReddotFreqInfo:(id)a0;
- (id)finderReddotFreqInfo;
- (void)setFindersyncUserScene:(unsigned int)a0;
- (unsigned int)findersyncUserScene;
- (void)setSocialHotSpotDiscoveryReddotInfo:(id)a0;
- (id)socialHotSpotDiscoveryReddotInfo;
- (void)setFinderNewlifePrefetchInfo:(id)a0;
- (id)finderNewlifePrefetchInfo;
- (void)setFlagConsumedDiscoveryReddotBusinessType:(unsigned long long)a0;
- (unsigned long long)flagConsumedDiscoveryReddotBusinessType;
- (void)setLiveDiscoveryReddotInfo:(id)a0;
- (id)liveDiscoveryReddotInfo;
- (void)setIsFinderDau:(BOOL)a0;
- (BOOL)isFinderDau;
- (void)setFinderDiscoveryReddotInfo:(id)a0;
- (id)finderDiscoveryReddotInfo;
- (void)setReddotSession:(id)a0;
- (id)reddotSession;
- (void)setLatestFinderMentionEntranceExposureNumber:(unsigned long long)a0;
- (unsigned long long)latestFinderMentionEntranceExposureNumber;
- (void)setLatestFinderMentionEntranceExposureTime:(unsigned long long)a0;
- (unsigned long long)latestFinderMentionEntranceExposureTime;
- (void)setHasDiscoveryReddot:(BOOL)a0;
- (BOOL)hasDiscoveryReddot;

@end
