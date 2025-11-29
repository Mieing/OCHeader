@class AWEVideoPlayerController, AWENavigationBarView, NSString, DUXNavigationBar, UIImageView, AWEUILoadingView, SKStoreProductViewController, AWEDetailPageInfoBannerView, AWEVideocutLandingPageViewModel;

@interface AWEVideocutLandingPageViewController : UIViewController <AWERouterViewControllerProtocol, AWEVideoPlayerControllerDelegate, SKStoreProductViewControllerDelegate>

@property (retain, nonatomic) AWEVideoPlayerController *playerController;
@property (retain, nonatomic) AWENavigationBarView *navigationBar;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (retain, nonatomic) AWEDetailPageInfoBannerView *bannerView;
@property (retain, nonatomic) SKStoreProductViewController *jianyingStorePage;
@property (retain, nonatomic) AWEUILoadingView *pageLoadingView;
@property (retain, nonatomic) AWEUILoadingView *playerLoadingView;
@property (retain, nonatomic) UIImageView *pauseIcon;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL shouldRestorePlay;
@property (nonatomic) BOOL appear;
@property (retain, nonatomic) AWEVideocutLandingPageViewModel *viewModel;
@property (retain, nonatomic) UIImageView *videoCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)playbackDidFinishForURL:(id)a0;
- (void)preparedToPlayForURL:(id)a0;
- (void)onAvatarTapped:(id)a0;
- (void)bindObservers;
- (void)openInJianyingIfInstalled;
- (void)onPlayerTapped:(id)a0;
- (void)setupPlayerWithURLList:(id)a0;
- (void)onBackButtonTapped;
- (void)pauseAnimationIfPaused:(BOOL)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
