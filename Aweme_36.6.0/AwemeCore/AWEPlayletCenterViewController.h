@class AWEPlayletCenterCardViewController, NSString, AWEPlayletCenterPageNaviBarView, AWEPlayletCenterFeedViewController;

@interface AWEPlayletCenterViewController : AWEPlayletCentralizationBaseViewController <AWEPlayletCenterViewControllerProtocol, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEPlayletCenterCardViewController *cardViewController;
@property (retain, nonatomic) AWEPlayletCenterFeedViewController *feedViewController;
@property (retain, nonatomic) AWEPlayletCenterPageNaviBarView *naviBarView;
@property (nonatomic) BOOL defaultIsFeedStyle;
@property (nonatomic) BOOL isFromPlayletInnerBackup;
@property (copy, nonatomic) NSString *routerType;
@property (nonatomic) BOOL isFromPlayletInner;
@property (nonatomic) BOOL disableShowTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadSplitScreenAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (id)aAWEPadSplitScreenAdapter;
- (id)currentDetailViewController;
- (void)openSearchPage;
- (void)removePlayletInnerFromNavigationStack;
- (void)updateContainerStyle;
- (void)switchFeedStyleAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)vipSchema;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
