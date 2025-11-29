@class IESLivePKGuestInteractiveRootPanel, NSString, NSArray, IESLivePKGuestInteractSettingHandler, IESLivePKGuestPermissionChecker, IESLivePKGuestInteractiveRootPanelViewModel, IESLivePKGuestAnchorBuilder, IESLivePKGuestTrackerContext, IESLiveInteractiveLinkService, IESLivePKGuestTrackHandler;
@protocol IESLiveShareServiceAdapter, IESLivePKModel, IESLiveRoomService;

@interface IESLivePKGuestAnchorPlugin : NSObject <IESLiveInteractiveLinkServiceDelegate, IESLivePKGuestAction, IESLivePKGuestInteractiveRootPanelDelegate, IESLivePKStateAction, IESLivePKInstanceProtocol, IESLivePKGuestProvider>

@property (weak, nonatomic) IESLivePKGuestInteractiveRootPanel *audOperatePanel;
@property (retain, nonatomic) IESLivePKGuestInteractiveRootPanelViewModel *audOperatePanelViewModel;
@property (retain, nonatomic) NSArray *readedApplications;
@property (retain, nonatomic) id<IESLivePKModel> pkmodel;
@property (retain, nonatomic) IESLivePKGuestAnchorBuilder *guestBuilder;
@property (retain, nonatomic) id<IESLiveShareServiceAdapter> shareService;
@property (nonatomic) BOOL pkingStateReceived;
@property (retain, nonatomic) IESLiveInteractiveLinkService *linkService;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLivePKGuestTrackerContext *guestTrackerContext;
@property (retain, nonatomic) IESLivePKGuestTrackHandler *guestTrackerHandler;
@property (retain, nonatomic) IESLivePKGuestInteractSettingHandler *settingHandler;
@property (nonatomic) BOOL isBigPartyMode;
@property (retain, nonatomic) IESLivePKGuestPermissionChecker *permissionChecker;

- (void)didSetAttachingDIContext;
- (void)componentContainerFrameChanged;
- (void)didChangePKStateFrom:(long long)a0 to:(long long)a1;
- (void)onPKFinish;
- (void)onReceivedReplyAudienceMessage:(id)a0;
- (void)onReceivedLinkEnterMessage:(id)a0;
- (void)onReceivedLinkCloseMessage:(id)a0;
- (void)onReceivedLinkLeaveMessage:(id)a0;
- (void)onReceiveAudienceCameraOpenReply:(id)a0;
- (void)onReceivedAudiencePreapplyMessage:(id)a0;
- (void)onReceivedAudienceCancelPreapplyMessage:(id)a0;
- (void)endLiveWithScource:(unsigned long long)a0;
- (BOOL)linkMicConnected;
- (void)showAdminOperatePanel;
- (void)askForStopConnection;
- (void)applyForConnection;
- (void)handleGuestSeatDidTapped;
- (void)onPKCloseWithGuest;
- (void)showInteractivePanel;
- (void)didWaitingListChanged:(id)a0;
- (void)handlePreApplyMessage:(id)a0;
- (void)showAudienceOperationPanel;
- (void)resetReadedApplications;
- (void)showOrHideIntimateChatEntranceWithApplicationsCount:(long long)a0;
- (void)hideInteractivePanel;
- (void)pkGuestInteractiveRootPanel:(id)a0 inviteWithUserID:(id)a1 secUserID:(id)a2 sourcePage:(id)a3 params:(id)a4;
- (void)p_closeBigParty;
- (void)pkGuestInteractiveRootPanel:(id)a0 permitApplicationOfUser:(id)a1 extraInfo:(id)a2;
- (void)pkGuestInteractiveRootPanel:(id)a0 inviteWithUserID:(id)a1 secUserID:(id)a2 sourcePage:(id)a3;
- (void)pkGuestInteractiveRootPanelNeedToResetWaitingApplications:(id)a0;
- (void)pkGuestInteractiveRootPanel:(id)a0 fetchInvitableFriendsListWithCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)pkGuestInteractiveRootPanel:(id)a0 shareWithClickScene:(id)a1 shareScene:(id)a2;
- (void)pkGuestInteractiveRootPanel:(id)a0 onTabShowWithType:(id)a1;
- (void)pkGuestInteractiveRootPanelEndInteract:(id)a0;
- (void)pkGuestInteractiveRootPanelOnGuestAutoLinkMic:(id)a0 completion:(id /* block */)a1;
- (void)pkGuestInteractiveRootPanel:(id)a0 operateGuest:(id)a1;
- (void)p_trackFeedbackViewShow;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
