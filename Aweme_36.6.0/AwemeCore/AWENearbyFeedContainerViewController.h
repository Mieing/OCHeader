@class UIButton, NSString, UILabel, UIViewController;
@protocol AWEFeedTabItemViewControllerProtocol, AWENewNearbyViewControllerProtocol;

@interface AWENearbyFeedContainerViewController : UIViewController <AWENearbyVcProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWENewNearbyViewControllerProtocol> *currentViewController;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isLoad;
@property (retain, nonatomic) UILabel *refreshLabel;
@property (retain, nonatomic) UIButton *titleButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dragWithProgress:(double)a0;
- (void)dragCancellation;
- (void)setAccessoriesHidden:(BOOL)a0;
- (BOOL)currentTabIsTop;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)playIfActive;
- (void)selectCity;
- (id)mainAppWindow;
- (void)_addNotifications;
- (void)_windowDidBecomeKeyNotification:(id)a0;
- (void)_windowDidResignKeyNotification:(id)a0;
- (void)_onAwemeDeleteNotification:(id)a0;
- (void)dragBegin;
- (void)_removeNotifications;
- (BOOL)p_shouldPreventVideoPause;
- (void)animatedRefreshWithType:(long long)a0 completion:(id /* block */)a1;
- (void)_addRefreshLabel;
- (void)tabBarBackgroundColorFill;
- (void)didVideoStartPlay:(id)a0;
- (void)p_restoreFeedContainerPlayNotification:(id)a0;
- (void)cityHasChangedAndNeedRefresh:(BOOL)a0 animated:(BOOL)a1 nearbyTitle:(id)a2;
- (void)contentOffsetChangedWithNewOffset:(struct CGPoint { double x0; double x1; })a0 oldOffset:(struct CGPoint { double x0; double x1; })a1 isUserTriggered:(BOOL)a2;
- (void)_addCitySelecter;
- (double)titleOffsetYWithHeight:(double)a0;
- (id)displayTopCityName;
- (void)titleButtonSizetoFit;
- (void)setRefreshLabelFrame;
- (void)p_updateNearbyTabTitleAnimated:(BOOL)a0;
- (id)scrollHideBarVC;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)beginRefreshing;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)isActive;
- (void)_appDidEnterBackground:(id)a0;
- (void)stopRefreshing;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_appWillResignActive:(id)a0;
- (void)setupUI;
- (void)_appDidBecomeActive:(id)a0;
- (void)_appWillEnterForeground:(id)a0;

@end
