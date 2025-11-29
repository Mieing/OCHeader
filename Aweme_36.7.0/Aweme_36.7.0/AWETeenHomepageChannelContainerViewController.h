@class AWEListDataController, NSArray, NSString, NSMutableSet, UIView, AWETeenExtraParamModel, UIViewController;
@protocol AWETeenHomepageRootViewControllerProtocol, AWETeenHomepageContentViewControllerProtocol, AWETeenFeedChannelControllerProxyProtocol;

@interface AWETeenHomepageChannelContainerViewController : UIViewController <AWEDigitalWellbeingMessage, AWETeenHomepageContentViewControllerProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSArray *controllers;
@property (retain, nonatomic) UIViewController<AWETeenHomepageContentViewControllerProtocol> *selectedViewController;
@property (retain, nonatomic) UIViewController<AWETeenHomepageContentViewControllerProtocol> *lastSwitchForChannelChangedController;
@property (retain, nonatomic) NSMutableSet *needRefreshVCs;
@property (readonly, nonatomic) long long vcType;
@property (readonly, nonatomic) AWEListDataController *dataController;
@property (weak, nonatomic) id<AWETeenHomepageRootViewControllerProtocol> rootVC;
@property (readonly, nonatomic) AWETeenExtraParamModel *extraParam;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWETeenFeedChannelControllerProxyProtocol> controllerProxy;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (BOOL)currentTabIsTop;
- (void)onAwemeDeleted:(id)a0 isDislike:(BOOL)a1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (unsigned long long)transition_destinatedType;
- (void)playIfActive;
- (id)currentVideoModel;
- (void)refreshWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)bottomBarFillBackground;
- (void)p_removeContentViewController:(id)a0;
- (unsigned long long)bottomTabThemeType;
- (void)triggerSearchAction:(BOOL)a0;
- (void)trackHomepageTabChangeWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (unsigned long long)currentTopTabBarTheme;
- (BOOL)supportInterestChannel:(id)a0;
- (void)p_updateBottomTabThemeWithChannel:(id)a0;
- (void)setNeedsRefreshUsingBlock:(id /* block */)a0;
- (void)switchToNextWithCompletion:(id /* block */)a0;
- (void)p_setupInitialVC;
- (void)p_switchTo:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_addContentViewController:(id)a0 needsLayout:(BOOL)a1;
- (void)p_refreshIfNeeded;
- (void)p_setupUI;
- (BOOL)canRefresh;
- (long long)currentIndex;
- (void).cxx_destruct;
- (BOOL)play;
- (void)pause;
- (void)stop;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithControllers:(id)a0;

@end
