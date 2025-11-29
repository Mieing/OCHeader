@class HTSLiveCloudCollaborateMemberActionMessage, UIView, IESLiveCloudCollaborateAPI, NSString, CloudCollabRTCInfo, IESLiveCloudCollaborateSmallWindowPreview, IESLiveGCDTimer, IESLiveCloudCollaborateRTCService, IESLiveCloudCollaborateWaitingView, IESLiveCloudCollaborateMonitorImpl;

@interface IESLiveCloudCollaborateFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveCloudCollaborateJSBHandler, IESLiveCloudCollaborateRTCServiceDelegate, IESLiveCloudCollaborateRouter>

@property (retain, nonatomic) IESLiveCloudCollaborateAPI *apiService;
@property (retain, nonatomic) IESLiveCloudCollaborateRTCService *rtcService;
@property (retain, nonatomic) CloudCollabRTCInfo *rtcInfo;
@property (retain, nonatomic) HTSLiveCloudCollaborateMemberActionMessage *actionMessage;
@property (retain, nonatomic) IESLiveCloudCollaborateSmallWindowPreview *smallWindow;
@property (retain, nonatomic) IESLiveCloudCollaborateWaitingView *waitingView;
@property (retain, nonatomic) UIView *streamXView;
@property (nonatomic) BOOL isCollaborating;
@property (nonatomic) BOOL isCloudCollaborateInviting;
@property (nonatomic) BOOL isCollaboratingOpen;
@property (nonatomic) BOOL streamXFirstFrame;
@property (retain, nonatomic) IESLiveGCDTimer *pingTimer;
@property (nonatomic) long long lastState;
@property (nonatomic) long long cloudCollaborateState;
@property (retain, nonatomic) NSString *stopSource;
@property (weak, nonatomic) UIView *cameraPreviewContainer;
@property (retain, nonatomic) IESLiveCloudCollaborateMonitorImpl *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (id)perfModel;
- (BOOL)isCloudCollaborating;
- (void)cloudCollaborateJSBActionType:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)handleState;
- (void)stopCollaborate:(id)a0;
- (void)monitorWithStep:(id)a0 extra:(id)a1;
- (void)trackCloudCollaborateClose:(id)a0;
- (void)trackCloudCollaborateStateChange:(long long)a0;
- (void)invalidPingTimer;
- (void)stopConnectCollaborateMsg;
- (void)recoveryUIState;
- (void)rejectCollaborate:(id)a0;
- (void)startJoinCollaborate;
- (void)disableFunctions:(BOOL)a0;
- (void)uploadPerf;
- (void)showSmallWindowPreview;
- (void)startPingTimer;
- (void)startConnectCollaborateMsg;
- (void)removeSmallWindowPreview;
- (void)removeWaitingView;
- (void)removeBigWindowPreview;
- (void)leaveCollaborate;
- (void)joinedCollaborate;
- (void)renderBigWindowPreview;
- (void)showWaitingView;
- (void)updateCloudCollaborateState:(id)a0 withType:(long long)a1;
- (BOOL)rejectCollaborateIfNeeded;
- (void)openInviteCloudCollaboratePanel;
- (void)showExitAlertWithDesc:(id)a0;
- (void)acceptCollaborate;
- (void)collaborateRtcServiceDidStart:(id)a0;
- (void)collaborateRtcServiceDidFailed:(id)a0;
- (void)collaborateRtcServiceVideoViewCreated:(id)a0 view:(id)a1;
- (void)collaborateRtcServiceVideoFirstFrame:(id)a0;
- (void)collaborateRtcServiceDidReceiveRTS:(id)a0 type:(long long)a1 sources:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)messageReceived:(id)a0;

@end
