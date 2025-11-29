@class UIView, DUXAlertDialog, AWENewsAISmartFeedViewController, AWENewsAISmartFeedPageContext, DUXBaseLabel, UIImageView, NSString, AWENewsAISmartTrackDetailViewModel, AWENewsAISmartBackgroundView, UIVisualEffectView, AWENewsAISmartFeedNavigationBarView, DUXBaseButton;

@interface AWENewsAISmartTrackDetailViewController : UIViewController <AWERouterViewControllerProtocol, AWECommonFeedDelegate, DUXAlertDialogDelegate>

@property (retain, nonatomic) AWENewsAISmartFeedPageContext *context;
@property (retain, nonatomic) AWENewsAISmartBackgroundView *backgroundView;
@property (retain, nonatomic) AWENewsAISmartFeedNavigationBarView *navView;
@property (retain, nonatomic) UIVisualEffectView *headerView;
@property (retain, nonatomic) UIView *returnView;
@property (retain, nonatomic) UIView *detailHeaderView;
@property (retain, nonatomic) UIVisualEffectView *detailHeaderBlurView;
@property (retain, nonatomic) AWENewsAISmartFeedViewController *commonFeedVC;
@property (retain, nonatomic) AWENewsAISmartTrackDetailViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseLabel *descriptionLabel;
@property (retain, nonatomic) DUXBaseLabel *countLabel;
@property (retain, nonatomic) DUXBaseLabel *countInfoLabel;
@property (retain, nonatomic) DUXBaseButton *trackingStatusButton;
@property (retain, nonatomic) DUXAlertDialog *currDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidDismiss:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)contentScrollViewDidScroll:(id)a0;
- (void)p_configUIComponent;
- (void)p_makeConstraint;
- (void)p_calculateCoordinates;
- (id)currentContentScrollView;
- (id)p_returnImage;
- (void)p_updateTrackButtonWithOffsetY:(double)a0;
- (void)updateTrackingStatusUI;
- (void)trackingStatusTapped:(id)a0;
- (void)p_presentUnfollowConfirm;
- (void)showDialog;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
