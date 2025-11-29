@class NSString, IESLiveCountTimer, IESLiveScreencastLinkNotifyPlayerItemView, UIButton;
@protocol IESLiveAnchorScreencastLinkNotifyViewControllerDelegate;

@interface IESLiveAnchorScreencastLinkNotifyViewController : IESLiveGameInteractPopupViewController <IESLiveInteractiveUserServiceDelegate>

@property (nonatomic) BOOL isInvitationOrNot;
@property (copy, nonatomic) NSString *titleTips;
@property (copy, nonatomic) NSString *gameText;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (retain, nonatomic) UIButton *declineButton;
@property (retain, nonatomic) IESLiveScreencastLinkNotifyPlayerItemView *playerItemView;
@property (copy, nonatomic) NSString *inviteUserID;
@property (copy, nonatomic) NSString *applierUserID;
@property (weak, nonatomic) id<IESLiveAnchorScreencastLinkNotifyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (void)onSetupNavBar:(id)a0;
- (void)p_startCountdown;
- (void)p_declineRequest:(id)a0;
- (void)p_acceptReqeust;
- (void)p_cancelCountdown;
- (void)p_reallyAcceptReqeust;
- (void)p_refreshPlayers;
- (id)inviteUser;
- (void)p_updatePlayer:(id)a0;
- (void)sendPushNotification;
- (void)multiLinkerUserService:(id)a0 didInteractiveListUpdated:(id)a1;
- (id)initWithInvitationOrNot:(BOOL)a0 gameText:(id)a1 tips:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)p_addObservers;

@end
