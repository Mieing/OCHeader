@class HTSEventContext, IESLiveDynamicActivityManager, NSArray, NSString, HTSLiveInteractiveAPI, IESLiveInteractFeedbackViewModel, HTSLiveImage, IESLiveInteractionLayout, IESLiveAudienceLinkmicAnchorPreApplyManager, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveInteractionLinkerService;

@interface IESLiveMultiAudioAnchorStore : NSObject <IESLiveInteractionLinkerServiceAction>

@property (retain, nonatomic) HTSLiveInteractiveAPI *interactiveAPI;
@property (nonatomic) BOOL interactiveModeEnabled;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (retain, nonatomic) IESLiveDynamicActivityManager *activityProvider;
@property (nonatomic) unsigned long long subscene;
@property (retain, nonatomic) IESLiveAudienceLinkmicAnchorPreApplyManager *preApplyManager;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (readonly, nonatomic) BOOL enableAudioCaptureInBackground;
@property (readonly, nonatomic) IESLiveInteractFeedbackViewModel *feedbackViewModel;
@property (readonly, nonatomic) NSArray *playModesArray;
@property (readonly, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (nonatomic) BOOL isTask;
@property (retain, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *fastOpensource;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) BOOL showInvitePanel;
@property (retain, nonatomic) NSString *adminApplyPrompts;
@property (retain, nonatomic) NSString *adminUserId;
@property (nonatomic) BOOL isEnlargeAnchor;
@property (nonatomic) BOOL willEnterDoubleC;
@property (retain, nonatomic) HTSLiveImage *invitePanelIconImage;
@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)previousLayout;
- (void)preInviteWithUserID:(id)a0 requestPage:(id)a1;
- (void)interactionLinkerService:(id)a0 onReceivedEnlargeGuestReply:(id)a1;
- (void)interactionLinkerService:(id)a0 onReceivedEnlargeGuestInvite:(id)a1;
- (void)interactionLinkerService:(id)a0 onReceivedEnlargeGuestInviteAnchor:(id)a1;
- (void)interactionLinkerService:(id)a0 onReceivedAudiencePreApply:(id)a1;
- (void)interactionLinkerService:(id)a0 onReceivedAudiencePreReply:(id)a1;
- (void)interactionLinkerService:(id)a0 onReceivedAudienceCancelPreapply:(id)a1;
- (BOOL)p_enablePaidLinkmicAddPrice;
- (id)initWithRoom:(id)a0 eventContext:(id)a1;
- (BOOL)enableMultiKTVMode;
- (void)tr_trackSingChallengeEntranceShow;
- (void)enlargeGuestReply:(int)a0 guestID:(id)a1 actionType:(id)a2 completion:(id /* block */)a3;
- (void)tr_trackEnlargeGuestReply:(id)a0 guestID:(id)a1;
- (id)p_currentLargeUserType;
- (void)p_trackEnlargeUiChangeWithMessage:(id)a0;
- (void)p_trackSeatNameSubmit:(id)a0 oldSeatName:(id)a1 seatIndex:(long long)a2 hasGuest:(BOOL)a3;
- (void)p_trackSeatNameSubmitSuccess:(id)a0 oldSeatName:(id)a1 seatIndex:(long long)a2 hasGuest:(BOOL)a3;
- (void)p_trackSeatNameDeleteAtSeatIndex:(long long)a0 oldSeatName:(id)a1 hasGuest:(BOOL)a2;
- (void)p_trackFunctionPanelProgramShowWithGameItem:(id)a0 source:(id)a1;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (void)clean;

@end
