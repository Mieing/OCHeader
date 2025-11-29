@class IESLiveMediaLinkParticipationViewModel, UIImageView, UILabel, UIView;
@protocol IESLiveCompoundSubscription;

@interface IESLiveMediaMultiLinkConnectingViewController : IESLiveCommunityInteractPopupViewController

@property (retain, nonatomic) IESLiveMediaLinkParticipationViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *quitButton;
@property (retain, nonatomic) UIView *inviteBtnContainer;
@property (retain, nonatomic) UIImageView *inviteBtnIcon;
@property (retain, nonatomic) UILabel *inviteBtnLabel;

- (void)updateUsers:(id)a0;
- (void)onSetupNavBar:(id)a0;
- (void)updateInviteButton;
- (void)onQuitButtonClicked;
- (void)onInviteButtonClicked;
- (id)initWithDIContext:(id)a0 roomID:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupViews;
- (void)setupData;
- (double)contentViewHeight;

@end
