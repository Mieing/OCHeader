@class NSString, MMLiveGroupConnectMicLogic, MMGroupLiveTask, MMGroupLiveTaskId;
@protocol MMGroupLiveLogicDelegate;

@interface MMGroupLiveLogic : MMLiveLogic <MMGroupLiveMgrExt>

@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) long long roleType;
@property (nonatomic) BOOL isKeyRequesting;
@property (readonly, nonatomic) MMGroupLiveTaskId *groupTaskId;
@property (readonly, nonatomic) MMGroupLiveTask *liveTask;
@property (readonly, nonatomic) MMLiveGroupConnectMicLogic *groupLiveConnectMicLogic;
@property (nonatomic) BOOL isInUpdateLiveMicEnableCgiProcess;
@property (weak, nonatomic) id<MMGroupLiveLogicDelegate> liveLogicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initConnectMicLogic;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)createLiveWithLiveCreateParamsModel:(id)a0;
- (BOOL)joinLive:(unsigned long long)a0;
- (BOOL)closeLive;
- (BOOL)closeLiveByAssitant;
- (BOOL)closeLiveByCutLive;
- (void)clearLive;
- (BOOL)setOffline;
- (BOOL)shareLive;
- (BOOL)getLiveInfo;
- (BOOL)getLiveMicAudienceInfo;
- (BOOL)fetchNewLiveSdkInfo;
- (void)enterBackground;
- (void)enterForeground;
- (void)sysCallInterrupted:(BOOL)a0;
- (void)resetAnchorStatus;
- (void)onCreateLiveResult:(id)a0 andLiveInfo:(id)a1 isVerified:(BOOL)a2 andVerifyUrl:(id)a3;
- (void)onJoinLiveResult:(id)a0 andLiveId:(unsigned long long)a1 andLiveSdkInfo:(id)a2;
- (void)onShareLiveResult:(id)a0 andLiveId:(unsigned long long)a1;
- (void)onGetApplyLiveMicWithLiveId:(unsigned long long)a0 fromAudience:(id)a1;
- (void)onGetAcceptLiveMicWithLiveId:(unsigned long long)a0 liveMicId:(id)a1 msgServerTime:(unsigned int)a2 andLiveSdkInfo:(id)a3;
- (void)onGetLiveMessageResult:(id)a0 liveMessageResp:(id)a1 liveId:(unsigned long long)a2 andRoomId:(id)a3;
- (void)onLiveClosedResult:(id)a0 andLiveId:(unsigned long long)a1;
- (void)onGetEnableApplyLiveMicWithLiveId:(unsigned long long)a0 andResult:(BOOL)a1;
- (void)onGetCloseLiveMicWithLiveId:(unsigned long long)a0 andLiveMicId:(id)a1;
- (void)onGetLiveMicSuccWithLiveId:(unsigned long long)a0 andAudience:(id)a1;
- (void)onApplyLiveMicResult:(id)a0 liveId:(unsigned long long)a1 liveMicId:(id)a2 isVerified:(BOOL)a3 andVerifyUrl:(id)a4;
- (void)onAcceptLiveMicResult:(id)a0 andLiveId:(unsigned long long)a1 andLiveMicId:(id)a2;
- (void)onCloseApplyLiveMicResult:(id)a0 lastAttemptValue:(BOOL)a1 andLiveId:(unsigned long long)a2;
- (void)onGetRefreshLiveMicWithLiveId:(id)a0 andLiveId:(unsigned long long)a1 andLiveSdkInfo:(id)a2;
- (void)onGetLiveInfoWithResult:(id)a0 liveId:(unsigned long long)a1 andRoomId:(id)a2 andLiveInfo:(id)a3;
- (void)onGetLiveMicAudienceInfoResult:(id)a0 liveId:(unsigned long long)a1 andAudience:(id)a2;
- (void)onGetLiveOnlineMemberByIdResult:(id)a0 liveId:(unsigned long long)a1 andAudienceOnlineInfo:(id)a2;
- (void)onUpdateLiveMicEnableWithTaskId:(id)a0 enable:(BOOL)a1;
- (void)onAcceptLiveMicWithTaskId:(id)a0 audienceInfo:(id)a1;
- (void)onCloseLiveMicWithTaskId:(id)a0 audienceInfo:(id)a1;
- (void)onApplyLiveMicWithTaskId:(id)a0;
- (void)onConnectMicOperationPanelWillShowWithIdentityIdList:(id)a0;
- (void)onConnectMicModeChanged:(BOOL)a0;
- (void)applyConnectMic;
- (void).cxx_destruct;

@end
