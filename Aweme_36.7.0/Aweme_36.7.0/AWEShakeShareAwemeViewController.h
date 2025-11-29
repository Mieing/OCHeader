@class UIView, AWEAwemeModel, AWEShakeShareAwemeUserListContainerView, NSString, AWEShakeShareAwemeNoLocationAuthorizationView, AWEShakeShareAwemeBottomBar, AWENavigationBar, AWEShakeShareAwemeNavigationBarTitleView, CAGradientLayer, AWEShakeShareAwemeCardView, AWEShakeShareAwemeUserListView, AWEShakeShareAwemeManager;

@interface AWEShakeShareAwemeViewController : UIViewController <AWERouterViewControllerProtocol, AWEShakeShareAwemeUserListViewDelegate>

@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWEShakeShareAwemeNoLocationAuthorizationView *authorizationView;
@property (retain, nonatomic) AWEShakeShareAwemeCardView *shareCardView;
@property (retain, nonatomic) AWEShakeShareAwemeBottomBar *bottomBar;
@property (retain, nonatomic) AWEShakeShareAwemeUserListContainerView *userListContainerView;
@property (retain, nonatomic) AWEShakeShareAwemeUserListView *userListView;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (retain, nonatomic) AWEAwemeModel *awemeToShare;
@property (nonatomic) BOOL hasFetchedAweme;
@property (retain, nonatomic) AWEShakeShareAwemeManager *shareAwemeManager;
@property (nonatomic) BOOL hasExit;
@property (nonatomic) BOOL hasShowedAuthLocationView;
@property (nonatomic) BOOL hasReadyToShare;
@property (retain, nonatomic) AWENavigationBar *navigationBar;
@property (retain, nonatomic) AWEShakeShareAwemeNavigationBarTitleView *navigationBarTitleView;
@property (nonatomic) BOOL hasSearchTimeExceed;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeWithAnimated:(BOOL)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)initView;
- (void)configNavigationBar;
- (void)p_startHeartBeat;
- (void)shakeShareAwemeUserListViewDidUpdatedUserList;
- (void)shakeShareAwemeUserListViewDidScroll;
- (void)configLeftNavigationBarButton;
- (void)configRightNavigationBarButton;
- (void)onTapBackButton;
- (void)settingButtonClicked:(id)a0;
- (void)updateNavigationBarWithUserCount:(long long)a0 searching:(BOOL)a1;
- (void)p_stopHeartBeat;
- (void)tryStartHeartBeatNeedRequestAuth:(BOOL)a0 isFirst:(BOOL)a1;
- (double)gradientViewSize;
- (void)startFetchAweme;
- (void)updateShareCardStatusForCurrentUserIfNeeded;
- (void)trackF2fVideoShareWithAction:(id)a0 buttonType:(id)a1;
- (void)trackF2fVideoShareWithAction:(id)a0;
- (void)shareCardViewButtonTappedWithStatus:(unsigned long long)a0 aweme:(id)a1 user:(id)a2;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupLayout;
- (void)startHeartBeat;
- (void)stopHeartBeat;

@end
