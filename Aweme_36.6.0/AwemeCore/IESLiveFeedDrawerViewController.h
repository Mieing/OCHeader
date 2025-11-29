@class NSString, UIImageView, IESLiveFeedDrawerViewControllerContext, UIView, HTSEventContext, UIViewController;
@protocol IESLiveFeedDrawerService, IESLiveDrawerFeedContainerProtocol, IESLiveFeedDrawerAnimatorProtocol;

@interface IESLiveFeedDrawerViewController : UIViewController <IESLiveFeedDrawerTransitionDelegate, IESLiveFeedDrawerViewControllerProtocol>

@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIImageView *indicatorIcon;
@property (retain, nonatomic) UIViewController<IESLiveDrawerFeedContainerProtocol> *feedViewController;
@property (retain, nonatomic) id<IESLiveFeedDrawerService> feedDrawerService;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL enableMultiTab;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *feedDrawerContext;
@property (nonatomic) BOOL originVSIsAppear;
@property (nonatomic) BOOL isLandscapeMode;
@property (nonatomic) BOOL isFromNearbyTV;
@property (retain, nonatomic) NSString *nearbyCityCode;
@property (nonatomic) BOOL shouldShowFollowDefaultTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IESLiveFeedDrawerAnimatorProtocol> animator;
@property (copy, nonatomic) id /* block */ clickShowActionBlock;
@property (copy, nonatomic) id /* block */ clickHideActionBlock;
@property (copy, nonatomic) id /* block */ drawShowActionBlock;
@property (copy, nonatomic) id /* block */ drawHideActionBlock;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSEventContext *originTrackContext;
@property (nonatomic) unsigned long long showPosition;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *overlayView;

- (void)didSetAttachingDIContext;
- (void)refreshLayout:(BOOL)a0;
- (void)trackViewDidLoad;
- (void)trackViewDidAppear;
- (void)updateRoomService:(id)a0;
- (void)updateBackGroundColor;
- (void)willAutoRotateTo:(long long)a0;
- (void)didAutoRotateTo:(long long)a0;
- (BOOL)canHideWithGesture;
- (void)overlayTapGestureActions:(id)a0;
- (void)updateDefaultTabWithVerticalInfo:(id)a0 roomId:(id)a1;
- (void)updateDefaultTabWithType:(long long)a0;
- (void)updateEntranceClickTime:(id)a0;
- (BOOL)disablePanGestureWithOtherResponder:(id)a0;
- (id)initWithDIContext:(id)a0 feedDrawerContext:(id)a1;
- (void)setupFeedViewController;
- (BOOL)isNewFeedDrawStyle;
- (BOOL)isNeedRefreshConstrains;
- (void)setupConstraints;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupViews;
- (void)refreshConstraints;

@end
