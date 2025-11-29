@class NSString, NSRecursiveLock, OrderedDictionary, NSMutableDictionary, MMLiveCDNPlayerIllegalEvent, NSMutableArray, FLVNetworkInfo, MMLiveCDNPlayerView, MMLiveCDNPlayerItem;

@interface MMLiveCDNPlayerMgr : MMUserService <WCAVAudioSessionSwizzleExtension, MMServiceProtocol>

@property (nonatomic) BOOL canReuseCdnPlayerItemWhenEnterLive;
@property (retain, nonatomic) NSMutableDictionary *liveCDNPlayerItemDict;
@property (nonatomic) BOOL isInBackground;
@property (retain, nonatomic) OrderedDictionary *livePreloadCDNPlayerItemDict;
@property (nonatomic) BOOL canPreloadCdnPlayerItemInFeedList;
@property (nonatomic) unsigned long long preloadItemDictMaxCount;
@property (retain, nonatomic) FLVNetworkInfo *cachedFlvNetworkInfo;
@property (retain, nonatomic) NSMutableDictionary *enterLiveUIEventItemTimeMap;
@property (retain, nonatomic) NSMutableArray *streamStatusList;
@property (nonatomic) unsigned int nextReportStreamStatusInterval;
@property (nonatomic) unsigned int lastReportStreamStatusTime;
@property (retain, nonatomic) NSRecursiveLock *playerItemDictLock;
@property (retain, nonatomic) MMLiveCDNPlayerIllegalEvent *lastReportedIllegalMultipleUnmutePlayEvent;
@property (retain, nonatomic) MMLiveCDNPlayerView *currentReusablePlayerView;
@property (weak) MMLiveCDNPlayerItem *lastStartedCdnPlayerItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)clearReusablePlayerView;
- (void)clearPreloadCDNPlayerItemDict;
- (void)clearLiveCDNPlayerItemDict;
- (void)setEnableHEVAndAVCDecoder;
- (void)setEnterLiveUIEventTimestamp:(unsigned long long)a0 forItemId:(id)a1;
- (unsigned long long)getEnterLiveUIEventTimestampWithItemId:(id)a0;
- (id)getLiveCDNPlayerItemWithId:(id)a0 delegate:(id)a1 playScene:(unsigned long long)a2 liveVrType:(int)a3;
- (id)getPlayingLiveCDNPlayerItemIfExistWithId:(id)a0;
- (BOOL)removeCDNPlayerItem:(id)a0;
- (void)pauseOrCleanPlayerItemsWhenEnterBackground;
- (void)startPlayForPreloadWithId:(id)a0 url:(id)a1 andDelayStopTime:(double)a2 liveVrType:(unsigned int)a3;
- (void)checkPreloadCDNPlayerItemDictCount;
- (BOOL)removePreloadCDNPlayerItem:(id)a0;
- (id)preloadLiveRoomCDNPlayerItemWithId:(id)a0 liveId:(unsigned long long)a1 objectId:(unsigned long long)a2 url:(id)a3 originalUrl:(id)a4 andDelayStopTime:(double)a5 liveSdkInfo:(id)a6 liveVrType:(unsigned int)a7 anchorNickname:(id)a8 commentScene:(int)a9;
- (BOOL)isLiveCDNPlayersPlayingOrLoading;
- (BOOL)checkHasCdnPlayerPlaying;
- (BOOL)checkHasCdnPlayerPlayingOutsideLiveRoom;
- (BOOL)checkHasUnmutedCdnPlayerPlaying;
- (BOOL)checkHasCdnPlayerPrePlayingInFinderFeed;
- (id)getFlvNetworkInfo;
- (long long)getLastFlvNetworkQuality;
- (void)delayCheckIllegalPlayAndReport;
- (void)_checkIllegalPlayAndReport;
- (BOOL)checkMultipleUnmutedPlayersPlaying;
- (BOOL)pauseLeakedCDNPlayerItem:(id)a0;
- (void)wcAVAudioSessionSwizzleDidCallMethod:(id)a0 error:(id)a1 ret:(BOOL)a2 caller:(id)a3;
- (void)tryReportStreamStatus:(id)a0;
- (void)doReportStreamStatusIfNeed;
- (void).cxx_destruct;

@end
