@class NSString, MMLiveTaskId, MMLiveConnectMicLogic;
@protocol MMLiveLogicDelegate;

@interface MMLiveLogic : NSObject <MMLiveConnectMicActionDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) id<MMLiveLogicDelegate> liveLogicDelegate;
@property (retain, nonatomic) MMLiveConnectMicLogic *connectMicLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)initConnectMicLogic;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)createLiveWithLiveCreateParamsModel:(id)a0;
- (BOOL)joinLive:(unsigned long long)a0;
- (BOOL)cancelLive;
- (void)clearLive;
- (BOOL)closeLive;
- (BOOL)closeLiveByAssitant;
- (BOOL)closeLiveByCutLive;
- (BOOL)closeWait:(unsigned int)a0;
- (BOOL)setOffline;
- (BOOL)notifyStartLiveSucceeded;
- (BOOL)shareLive;
- (BOOL)getLiveInfo;
- (BOOL)fetchNewLiveSdkInfo;
- (void)enterBackground;
- (void)enterForeground;
- (void)sysCallInterrupted:(BOOL)a0;
- (void)resetAnchorStatus;
- (void)applyConnectMic;
- (void)enterLiveRoom;
- (void)enableLiveReward:(BOOL)a0 callback:(id /* block */)a1;
- (void)enableLiveLike:(BOOL)a0 callback:(id /* block */)a1;
- (void)hiddenAudienceName:(BOOL)a0 callback:(id /* block */)a1;
- (void)enableRealTimeDataPanel:(BOOL)a0 callback:(id /* block */)a1;
- (void)enableAiAssistant:(BOOL)a0 callback:(id /* block */)a1;
- (void)enableAnchorProductQuestion:(BOOL)a0 callback:(id /* block */)a1;
- (void)openGloryList:(BOOL)a0 callback:(id /* block */)a1;
- (void)startWeChatPayVerifyProcess:(long long)a0;
- (BOOL)backToPluginLive;
- (void)onUpdateLiveMicEnableWithTaskId:(id)a0 enable:(BOOL)a1;
- (void)onAcceptLiveMicWithTaskId:(id)a0 audienceInfo:(id)a1;
- (void)onConnectMicOperationPanelWillShowWithIdentityIdList:(id)a0;
- (void)onConnectMicModeChanged:(BOOL)a0;
- (void)handleNotifyCommentForSkinSegOpen;
- (void)handleNotifyCommentForSkinSegClose;
- (void)reportSDKEnterRoomError:(id)a0;
- (void).cxx_destruct;

@end
