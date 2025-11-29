@class NSString, IESLiveScreencastLinkAnchorRootPanel, IESLiveScreencastLinkerCancelPanel, IESLiveScreencastLinkerAnchorStore, HTSLiveScreencastLinkInfoLayout;
@protocol IESLiveCompoundSubscription;

@interface IESLiveScreencastLinkerAnchorFragment : IESLiveRoomComponent <IESLiveScreencastLinkerAnchorRouter>

@property (retain, nonatomic) IESLiveScreencastLinkerAnchorStore *store;
@property (retain, nonatomic) IESLiveScreencastLinkAnchorRootPanel *inviteListPanel;
@property (weak, nonatomic) IESLiveScreencastLinkerCancelPanel *cancelPanel;
@property (retain, nonatomic) HTSLiveScreencastLinkInfoLayout *remoteAnchorInfoLayout;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (BOOL)couldUnmountComponent;
- (id)linkedUsers;
- (void)setupBinds;
- (void)onClickEntranceItem;
- (BOOL)isScreencastLinkerProcessing;
- (void)trackSettingWithEvent:(id)a0 status:(BOOL)a1;
- (void)showCloseCheckAlert;
- (void)showCancelPanel;
- (void)dismissRootPanelIfNeeded;
- (void)sendPushNotificationWithText:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isLinkEnabled;
- (long long)componentPriority;

@end
