@class VoIPInvitationViewController, NSString, VoIPInvitationInfo, MMTipsViewController;
@protocol VoIPInvitationViewInfo;

@interface VoIPInvitationService : MMUserService <VoIPInvitationViewControllerDelegate, ISysCallCheckExt, MonoServiceMsgLogicDelegate, VoIPAudioServiceExtension, MultiTalkMgrExt, MMServiceProtocol>

@property (retain, nonatomic) VoIPInvitationViewController *viewController;
@property (retain, nonatomic) VoIPInvitationInfo *acceptedInvitationInfo;
@property (retain, nonatomic) MMTipsViewController *tipsViewController;
@property (copy, nonatomic) id /* block */ interrputBlock;
@property (readonly, nonatomic) id<VoIPInvitationViewInfo> currentViewInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultService;

- (void)reset;
- (BOOL)handleInvitationInfo:(id)a0 withTalkingRoomID:(unsigned long long)a1 talkingRoomKey:(unsigned long long)a2;
- (BOOL)handleInviteMonoMsg:(id)a0 withTalkingRoomID:(unsigned long long)a1 talkingRoomKey:(unsigned long long)a2;
- (BOOL)handleCancelMonoMsgWithRoomID:(unsigned long long)a0 roomKey:(long long)a1 fromUserName:(id)a2;
- (BOOL)handleCancelMonoMsg:(id)a0;
- (void)scrollIn;
- (void)rejectInvitationWithInfo:(id)a0;
- (void)handleAccpetedInvitationInfoIfNeed;
- (void)handleAccpetedInvitationInfoIfNeedWithneedCloseCamera:(BOOL)a0;
- (void)acceptInvitationWithInfo:(id)a0;
- (void)acceptInvitationWithInfo:(id)a0 needCloseCamera:(BOOL)a1;
- (void)rejectIfNeedAnimation:(BOOL)a0;
- (void)rejectWithRoomID:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)voIPInvitationViewController:(id)a0 willScollInWithInfo:(id)a1;
- (void)voIPInvitationViewController:(id)a0 didScollInWithInfo:(id)a1;
- (void)voIPInvitationViewController:(id)a0 willScollOutWithInfo:(id)a1;
- (void)voIPInvitationViewController:(id)a0 didScollOutWithInfo:(id)a1;
- (void)voIPInvitationViewController:(id)a0 didClickWithInfo:(id)a1;
- (void)voIPInvitationViewController:(id)a0 didAcceptWithInfo:(id)a1;
- (void)voIPInvitationViewController:(id)a0 didHangupWithInfo:(id)a1 manually:(BOOL)a2;
- (id)currentAppTopViewController;
- (void)voIPInvitationViewController:(id)a0 didClickQuickReplyWithInfo:(id)a1;
- (void)voIPInvitationViewControllerWillClear:(id)a0;
- (void)voIPInvitationViewControllerDidClear:(id)a0;
- (void)UIManagerDidCloseCompletely;
- (void)multiTalkMgrDidClose;
- (void)OnSysCallState:(int)a0 andCallId:(id)a1;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isMonoServiceCheckingServer;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceInterruptionEnd;
- (void)onMultiTalkMainViewControllerVideoSelected:(BOOL)a0;
- (void)setVirtualBackground:(BOOL)a0 isFront:(BOOL)a1;
- (void)onMultiTalkMainViewControllerFlipCamera;
- (void)receiverOpenUIAfterAckSuccess:(BOOL)a0;
- (void)ilinkDidEnd;
- (void)setClipRatioWith:(int)a0 enableClipBeforePreprocessing:(BOOL)a1;
- (void)onIlinkInviteMultiTalk:(id)a0;
- (void)onIlinkChangeToMultiTalk:(id)a0 confSDKMemberMgr:(id)a1 isMicMute:(BOOL)a2 isSpeakerOn:(BOOL)a3 localVideoClosed:(BOOL)a4 remoteVideoClosed:(BOOL)a5;
- (void)showToastOnMultiTalkVC:(id)a0;
- (void)hangupMultiTalkByCallEnd;
- (void)receiverCanStartCamera;
- (void).cxx_destruct;

@end
