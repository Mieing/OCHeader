@class UIView, NSString, NSArray, UIImageView, IESLivePKConnectingInfoView, IESLiveCountTimer, UIButton, IESLiveReceiverPKConnectingConfig, UILabel, IESLiveReceiverPKConnectingViewModel;
@protocol IESLivePKAnchorBuilderAction, IESLiveGameModuleAdapter;

@interface IESLiveReceiverPKConnectingViewController : IESLiveRevenueInteractPopupViewController <IESLiveInteractiveUserServiceDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *disturbSettingButton;
@property (retain, nonatomic) UIView *yellowDot;
@property (retain, nonatomic) UIView *avatarView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) IESLivePKConnectingInfoView *connectionView;
@property (retain, nonatomic) UILabel *disturbLabel;
@property (retain, nonatomic) UIImageView *disturbHintImage;
@property (retain, nonatomic) IESLiveReceiverPKConnectingViewModel *viewModel;
@property (retain, nonatomic) id<IESLivePKAnchorBuilderAction> anchorBuilderAction;
@property (retain, nonatomic) id<IESLiveGameModuleAdapter> gameModule;
@property (copy, nonatomic) NSArray *waitingList;
@property (nonatomic) long long otherWaitingListCount;
@property (nonatomic) long long battleInvitePanelOpt;
@property (retain, nonatomic) IESLiveReceiverPKConnectingConfig *pkConnectingConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)setupBaseViews;
- (BOOL)isReserve;
- (void)onSetupNavBar:(id)a0;
- (void)multiLinkerUserService:(id)a0 didInteractiveListUpdated:(id)a1;
- (void)setupDisturbSettingView;
- (void)showYellowDotIfNeeded;
- (void)disturbSettingButtonClicked;
- (void)trackConnectingViewControllerDidLoad;
- (void)trackConnectingViewControllerDismiss;
- (void)declineInteract:(BOOL)a0;
- (void)acceptInteract;
- (void)declineInteractActively;
- (id)cancelButtonStr;
- (void)trackConnectionInviteedWithSelection:(id)a0;
- (void)ieslive_reallyAcceptInteract;
- (void)trackPkInviteRemindPopupClick:(BOOL)a0;
- (void)updateConnectionView:(id)a0;
- (void)disturbLabelClicked;
- (id)p_getActivityTitle:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)startTimer;
- (void)viewDidLoad;

@end
