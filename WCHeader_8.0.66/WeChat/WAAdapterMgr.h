@class NSString;

@interface WAAdapterMgr : MMUserService <MMKernelExt, IMsgExt, MMConfigMgrExt, MMResourceMgrExt, MultiTalkMgrExt, IVOIPUILogicMgrExt, IExptServiceExt, INetworkStatusMgrExt, ServiceAuthExt, MonoServiceLogicExt, MainTabBarControllerExt, MonoServiceMsgLogicDelegate, IChatBotVoIPExt, MMServiceProtocol>

@property (nonatomic) BOOL isCallInterruption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setup;
+ (void)registerLazyExtension;
+ (void)internalRegisterLazyExtension;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)clearDataOnUserLogout;
- (void)registerExtension;
- (void)unregisterExtension;
- (void)onAuthOK;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)a0 to:(unsigned int)a1;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onRecvWeAppCdp:(id)a0 callId:(id)a1 context:(id)a2;
- (void)onMMDynamicConfigUpdated;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)onBeginMultiTalk;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onVideoVoipViewDidAppear:(id)a0;
- (void)onVideoVoipViewDisappear;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)onNetworkWeakChanged:(BOOL)a0 currentRTT:(unsigned int)a1;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceDidEnd;
- (void)BeginInterruption;
- (void)EndInterruption;
- (void)OnSysCallState:(int)a0 andCallId:(id)a1;
- (void)onWAAudioSessionInterruptionBegan;
- (void)onWAAudioSessionInterruptionEnd;
- (void)onMMLiveWillStart;
- (void)onExitLiveSuccessWithLiveTaskId:(id)a0;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isMonoServiceCheckingServer;
- (void)didMonoServiceRejectMsg;
- (void)onCloseService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void)mainTabBarController:(id)a0 transitionFromViewController:(id)a1 toViewController:(id)a2;

@end
