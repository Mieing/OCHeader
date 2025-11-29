@class MMFinderLiveNetworkInterface, NSMutableDictionary, NSString, MMLiveStarterTestSpeedManager, MMFinderLiveSpeedTestNotifyModel;

@interface MMFinderLiveNetQualityMonitor : MMObject <CNetworkStatusExt, INetworkStatusMgrExt, MMLiveTaskMgrExt, ICdnComMgrExt>

@property (nonatomic) long long lastNetworkQuality;
@property (nonatomic) unsigned int lastNetworkQualityEvaluateTime;
@property (retain, nonatomic) NSMutableDictionary *factorDict;
@property (nonatomic) unsigned long long lastNetworkTypeChangedTimeMs;
@property (nonatomic) long long lastTrtcLocalQuality;
@property (nonatomic) unsigned long long lastTrtcLocalQualityTimeInMs;
@property (retain, nonatomic) MMLiveStarterTestSpeedManager *testSpeedManager;
@property (retain, nonatomic) MMFinderLiveSpeedTestNotifyModel *uploadPacket;
@property (nonatomic) BOOL testtingSpeed;
@property (readonly, nonatomic) long long currentNetworkQuality;
@property (readonly, nonatomic) BOOL isNetworkSwitchingToCellular;
@property (readonly, nonatomic) NSString *currentCellularStateString;
@property (readonly, nonatomic) MMFinderLiveNetworkInterface *currentCellularInterface;
@property (readonly, nonatomic) BOOL isWeakNetFromMars;
@property (readonly, nonatomic) BOOL enableBindCellular;
@property (readonly, nonatomic) unsigned int recentCgiFailsCount;
@property (readonly, nonatomic) unsigned int recentCgiDelayCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reportCgiNetworkError:(id)a0 response:(id)a1 bindCellular:(BOOL)a2;
- (void)reportCgiDelayToGetResponse:(unsigned int)a0 bindCellular:(BOOL)a1;
- (void)reportPreviewLiveCDNPlayerItemPlayEvent:(int)a0 withParam:(id)a1;
- (void)reportPreviewLiveCDNPlayerNetStatus:(id)a0 withLiveId:(unsigned long long)a1;
- (id)getNetworkFactorItemCreateIfNotExists:(long long)a0;
- (void)recordRecentLagTimeStampInRoom:(unsigned long long)a0;
- (void)recordRecentLagTimeStampInPreview:(unsigned long long)a0;
- (void)recordRecentDisconnectTimeStampInRoom:(unsigned long long)a0;
- (void)recordRecentDisconnectTimeStampInPreview:(unsigned long long)a0;
- (unsigned int)getRecentLagCountFromTime:(unsigned long long)a0;
- (unsigned int)getRecentDisconnectCountFromTime:(unsigned long long)a0;
- (unsigned int)getRecentLiveTRTCConnectLostCountFromTime:(unsigned long long)a0;
- (unsigned int)getRecentLiveCGINetworkFailsCountFromTime:(unsigned long long)a0;
- (unsigned int)getRecentLiveCGIsDelayCountFromTime:(unsigned long long)a0;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onSimCardNetTypeChange;
- (void)onNetworkWeakChanged:(BOOL)a0 currentRTT:(unsigned int)a1;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)handleNetworkStatusChanged;
- (void)onLiveTask:(id)a0 networkLocalQuality:(id)a1 remoteQuality:(id)a2;
- (void)onLiveTask:(id)a0 statistics:(id)a1;
- (void)onLiveTask:(id)a0 user:(id)a1 eventName:(id)a2 info:(id)a3;
- (void)onLiveTask:(id)a0 netStatus:(id)a1 p2pStatus:(id)a2;
- (void)onLiveTask:(id)a0 cdnPlayEventId:(int)a1 params:(id)a2;
- (void)onLiveTaskConnectionLost:(id)a0;
- (void)onLiveTaskConnectionRecovery:(id)a0;
- (void)onLiveTask:(id)a0 exitLiveRoom:(long long)a1 error:(id)a2;
- (void)onLiveTaskExitLive:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)evaluateLiveNetworkQuality;
- (BOOL)isOnDawangEnv;
- (BOOL)startTestSpeedRequest:(id /* block */)a0;
- (void)testSpeedMethod:(id)a0 testSpeedBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
