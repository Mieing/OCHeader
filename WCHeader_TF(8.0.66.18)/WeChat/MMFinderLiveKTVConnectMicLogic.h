@class NSMutableDictionary, NSString, MMFinderLiveTaskId, MMFinderLiveKTVConnectMicSessionInfo, MMFinderLiveTask;

@interface MMFinderLiveKTVConnectMicLogic : NSObject <IRecordPermissionCheckExt>

@property (retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) MMFinderLiveKTVConnectMicSessionInfo *connectMicSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *endSingingSessionInfoDict;
@property (nonatomic) BOOL hasStartedActivateMicForAnchor;
@property (nonatomic) unsigned int audienceStayTrtcRoomTimeAfterStopSinging;
@property (nonatomic) BOOL isRequestSongBlockedByRealNameCheck;
@property (nonatomic) unsigned long long recordPermissionCheckResult;
@property (copy, nonatomic) id /* block */ requestSongCheckResultBlock;
@property (nonatomic) BOOL isShowingMysteriousNoticeView;
@property (readonly, copy, nonatomic) NSString *currentSongId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)initNotifications;
- (void)beginKtvSingingSessionWithSongUniqueId:(id)a0 resultBlock:(id /* block */)a1;
- (BOOL)tryConnectMicIfRequireSdkInfo:(BOOL)a0 sdkInfo:(id)a1;
- (void)endKtvSingingSessionWithSongUniqueId:(id)a0 shouldStopConnectMic:(BOOL)a1;
- (void)endKtvSingingSessionForOtherSingerWithSongUniqueId:(id)a0;
- (void)checkAndClearConnectMicSessionInfoWithSongUniqueId:(id)a0;
- (void)sendEndKtvSingingSessionCgiWithSongUniqueId:(id)a0;
- (void)handleEndKtvSingingSessionFailedWithSongUniqueId:(id)a0;
- (void)handleTrtcSwitchRoleResult:(BOOL)a0 errorMsg:(id)a1;
- (BOOL)isCurrentInMic;
- (void)updateMicMute:(BOOL)a0;
- (void)updateAudienceStayTrtcRoomTimeAfterStopSinging:(unsigned int)a0;
- (BOOL)startConnectMicWithTask:(id)a0 sdkInfo:(id)a1;
- (void)stopConnectMicWithTask:(id)a0;
- (void)delayCheckAndSwitchToCDNPlay;
- (void)checkAndSwitchToCDNPlayWithTask:(id)a0;
- (void)updateRequestSongBlockFlagWithRealNameCheckResultFromCGI:(int)a0;
- (void)checkIsAudienceRequestSongBlockedWithResultBlock:(id /* block */)a0;
- (void)checkIsAudienceRequestSongBlockedPhaseTwoWithResultBlock:(id /* block */)a0 liveTask:(id)a1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)onBecomeActive;
- (void)startActivateLiveConnectMicForAnchor;
- (void)activateLiveConnectMicForAnchor;
- (void).cxx_destruct;

@end
