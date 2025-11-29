@class NSString, IESLiveCountTimer, UILabel, NSMutableArray, UIButton;
@protocol IESLiveMediaMultiLinkNotificationViewControllerDelegate, IESLiveGameModule;

@interface IESLiveMediaMultiLinkNotificationViewController : IESLiveCommunityInteractPopupViewController

@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *playerItemViews;
@property (retain, nonatomic) UIButton *declineButton;
@property (retain, nonatomic) id<IESLiveGameModule> gameModule;
@property (copy, nonatomic) NSString *inviteUserID;
@property (weak, nonatomic) id<IESLiveMediaMultiLinkNotificationViewControllerDelegate> delegate;

- (void)p_setupViews;
- (void)onSetupNavBar:(id)a0;
- (void)p_startCountdown;
- (void)updateUsers;
- (void)p_declineRequest:(id)a0;
- (void)p_acceptReqeust;
- (void)p_updatePlayers:(id)a0;
- (void)p_cancelCountdown;
- (void)p_reallyAcceptReqeust;
- (id)p_alogDescFromInteractUserList:(id)a0;
- (void)inviteCanceled;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
