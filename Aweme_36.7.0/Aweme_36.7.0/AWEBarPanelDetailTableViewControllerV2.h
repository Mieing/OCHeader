@class AWEBarPanelDetailBottomBar, AWEElementContainer, NSString, AWEBarPanelDetailUIConfig, AWEBarPanelDetailConfigModel;
@protocol AWEBarPanelDetailTableViewControllerHandlerProtocolV2;

@interface AWEBarPanelDetailTableViewControllerV2 : AWEAwemeDetailTableViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEElementContainer *bottomRightContainer;
@property (retain, nonatomic) AWEBarPanelDetailUIConfig *uiConfig;
@property (retain, nonatomic) AWEBarPanelDetailBottomBar *bottomBar;
@property (retain, nonatomic) AWEBarPanelDetailConfigModel *configModel;
@property (nonatomic) double playbackRate;
@property (copy, nonatomic) NSString *videoEnterMethod;
@property (retain, nonatomic) id<AWEBarPanelDetailTableViewControllerHandlerProtocolV2> detailVCHandler;
@property (nonatomic) BOOL openPanelWhenEnter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWEBarPanelDetailTableViewControllerAdapterClass;
+ (Class)aAWEBarPanelDetailTableViewControllerAdapterClass;
+ (id)watchVideoLaterControllerWithModel:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
+ (id)watchVideoLaterWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)cellDidEndDisplay:(id)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (BOOL)bottomBarShowState;
- (void)setBottomBarHidden:(BOOL)a0;
- (void)splitStatusChanged;
- (void)initialDataSourceFetchDidFinished;
- (id)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (id)aAWEPadBizUIAdapter;
- (double)bottomBarCornerRadius;
- (id)bottomBarBackgroundColor;
- (id)aAWEBarPanelDetailTableViewControllerAdapter;
- (id)aAWEBarPanelDetailTableViewControllerAdapter;
- (void)configBottomRightContainerinteractionController:(id)a0 awemeModel:(id)a1;
- (double)bottomRightContainerWidth;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3;
- (id)createDefaultConfig;
- (void)updateBottomUIStyleIfNeed;
- (void)setupAndConfigBottomRightContainerWithModel:(id)a0 interactionController:(id)a1;
- (void)adaptPlaybackRateForDetailCell:(id)a0;
- (void)layoutBottomRightContainer;
- (void)layoutSplitUI;
- (void)setupStyleSplitUI;
- (void)setupBottomRightContainer;
- (void)recordForSpeedInheritedIfNeedsWithSpeed:(id)a0 model:(id)a1;
- (void)onBottomAction;
- (void)loadMoreFinished;
- (BOOL)autoPlayScrollToNextVideo;
- (void)didClickCell:(id)a0 atIndexPath:(id)a1;
- (BOOL)enableAutoPlayNextVideo;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
