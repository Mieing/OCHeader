@class AWEAntiAddictPreviewControlView, NSArray, NSString, NSDictionary, AWEUILoadingView, AWEAwemeModel, UIViewController;
@protocol AWEAwemePlayVideoProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoTrackProtocol;

@interface AWEAntiAddictPreviewViewController : UIViewController <AWERouterViewControllerProtocol, AWEAntiAddictPreviewControlViewDelegate, IESVideoPlayerDelegate, AWEPlayVideoDelegate, AWEPlayVideoViewControllerStatusDelegate>

@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoTrackProtocol> *videoController;
@property (retain, nonatomic) AWEAntiAddictPreviewControlView *controlView;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL isRestRemind;
@property (nonatomic) unsigned long long previewVideoType;
@property (nonatomic) BOOL isEditable;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *videoTag;
@property (copy, nonatomic) NSString *prePage;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL needPlayAfterViewDidAppear;
@property (nonatomic) BOOL alreadyPlayOneLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)playerVideoController:(id)a0 didRecreatePlayerController:(id)a1;
- (void)playerWillStartNextLoop:(id)a0;
- (void)dismissLoadingView;
- (void)playIfActive;
- (void)p_trackViewDidAppear;
- (void)playConfrimButtonAnimation;
- (void)showRequestModelErrorToast;
- (void)p_trackClickConfirmButton;
- (void)p_trackConfirmFeedbackWithsaveStatus:(id)a0 titleContent:(id)a1;
- (void)controlView:(id)a0 confirmButtonDidClick:(id)a1 viewModel:(id)a2;
- (void)controlView:(id)a0 returnButtonDidClick:(id)a1;
- (id)controlViewEnterFrom:(id)a0;
- (void)addVideoView:(id)a0;
- (void)shrinkVideoViewIfNeeded;
- (void)updateBlurCoverWithModel:(id)a0;
- (void)loadAndPlay:(BOOL)a0;
- (void)addNotificationsObservers;
- (void)removeNotificationsObservers;
- (void)windowDidResignKeyNotification:(id)a0;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)stop;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)appWillResignActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)appDidBecomeActive:(id)a0;
- (BOOL)isActive;
- (void)viewWillDisappear:(BOOL)a0;
- (void)showLoadingView;

@end
