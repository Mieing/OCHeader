@class NSString;
@protocol IESLCMessageHandlerProtocol, IESGCPTeamPlayInterface;

@interface IESLiveGameCPTeamPlayFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLCMessageHandlerService, IESLiveTeamPlayRouter>

@property (retain, nonatomic) id<IESGCPTeamPlayInterface> teamPlayInterface;
@property (nonatomic) double startPushTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)componentBindService;
- (void)componentMount;
- (void)p_handleOnReceiveAWEPushServiceWithMsg:(id)a0;
- (id)p_commonTrackParams;
- (void)registerTeamPlayRefundToast;
- (void)_registerIMMessageObserver;
- (void)_handleTeamPlayStatusMessage:(id)a0;
- (void)_handleTeamCloseCloudMessage:(id)a0;
- (void)_handleTeamApplyListChange:(id)a0;
- (void)_handlePlayDebugListChangeMessage:(id)a0;
- (void)_handleTeamApplyNewApplyMessage:(id)a0;
- (id)stringForTeamJoinMode:(int)a0;
- (void)_showTeamPlayInfoPopup:(id)a0 status:(id)a1;
- (void)_handleTeamPlayDebugEntranceMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
