@class NSString, AWEAwemeModel, UIView, NSObject, BDXBridgeEventSubscriber;
@protocol AnnieXContainerBaseProtocol, AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEDouYinSelectUGBottomBarController : NSObject <BDXContainerLifecycleProtocol, AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) NSString *lynxSchema;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *appGuideView;
@property (nonatomic) unsigned long long phase;
@property (copy, nonatomic) NSString *showingItemId;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) UIView *appGuideContainer;
@property (nonatomic) BOOL isBrandShowing;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL isAppForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillStartLoading:(id)a0;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)cellDidEndDisplay:(id)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarAddedToContainer:(id)a0;
- (void)updatePlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)bottomBarWillShow;
- (void)bottomBarDidShow;
- (void)bottomBarWillHidden;
- (void)bottomBarDidHidden;
- (void)setBrandShowing:(BOOL)a0;
- (BOOL)enableBrandTracker;
- (void)loadLynxIfNeeded:(id)a0;
- (BOOL)isFixedBar;
- (void)clearShowingItemId;
- (void)registerObserverForModel:(id)a0;
- (void)p_updateLynxDataWithModel:(id)a0;
- (void)forceResetShowingStatus;
- (id)lynxDataWithModel:(id)a0;
- (id)commonLynxData;
- (id)buildInitData;
- (unsigned long long)currentPlayTimeSecond;
- (BOOL)isShowingForItemId:(id)a0;
- (void)registerObserver;
- (void)unregisterObserver;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (id)containerBackgroundColor;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (Class)contextClass;
- (id)bottomBarView;

@end
