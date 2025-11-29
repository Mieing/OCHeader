@class NSString, UIView, NSMutableArray, UIViewController;
@protocol AnnieXContainerBaseProtocol, AWEModernFeedCellContext, AnnieXCardModelProtocol, BDUGLuckyCountDownPendantViewProtocol, AWEPlayVideoViewControllerProtocol, AWEAwemeDetailTableViewControllerProtocol;

@interface AWESearchAdsIncentiveTaskLynxViewController : UIViewController <BDXContainerLifecycleProtocol, BDUGLuckyCountDownTaskPendantDelegateProtocol, AWEModernFullscreenTransitionInnerContextProvider, AWEModernFullscreenTransitionOuterContextProvider, AWESearchLynxContainerDataSourceProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) UIView<BDUGLuckyCountDownPendantViewProtocol> *pendant;
@property (copy, nonatomic) NSString *pageVisibilitySource;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSMutableArray *awemeList;
@property (weak, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *playVideoViewController;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailTableViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (long long)modernTransitionItemOffset;
- (BOOL)modernTransitionItemHasScrolled;
- (id)modernTransitionContext;
- (long long)modernInitialIndex;
- (long long)modernUseOrigin;
- (void)handleDidEnterBackground:(id)a0;
- (void)handleWillEnterForeground:(id)a0;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (id)currentScrollView;
- (void)pendantIsReady;
- (void)pendantWillDestroy;
- (void)createLynxContainerView;
- (void)registerBDXLocalMethod;
- (void)onThemeChangeNotificationAction:(id)a0;
- (void)unregistBDXLocalMethod;
- (void)sentPageVisibilityChangeEvent:(BOOL)a0;
- (void)_notifyAppStatusChange:(BOOL)a0;
- (void)updateCurrentAwemeCardWith:(id)a0 awemeIndex:(long long)a1;
- (void)updateCurrentAwemeCardWithModel:(id)a0;
- (void)startLuckyTaskTimer;
- (void)updatePageSource;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)currentViewController;
- (void)addObservers;

@end
