@class AWEAwemeModel, NSString, AWEBarPanelDetailUIConfig, AWEBarPanelDetailConfigModel, AWEBarPanelDetailBottomBar, AWEElementContainer, AWEBarPanelBaseVCHandler, AWEBarPanelViewController;
@protocol AWEBarPanelDetailTableViewControllerHandlerProtocol;

@interface AWEBarPanelDetailTableViewController : AWEAwemeDetailTableViewController <AWEBarPanelViewControllerDelegate>

@property (retain, nonatomic) AWEBarPanelDetailBottomBar *bottomBar;
@property (retain, nonatomic) AWEElementContainer *bottomRightContainer;
@property (retain, nonatomic) AWEBarPanelViewController *panelViewController;
@property (nonatomic) double playbackRate;
@property (retain, nonatomic) AWEBarPanelDetailUIConfig *uiConfig;
@property (retain, nonatomic) AWEBarPanelDetailConfigModel *configModel;
@property (nonatomic) BOOL panelShowing;
@property (retain, nonatomic) AWEAwemeModel *beforeShowPanelModel;
@property (retain, nonatomic) AWEBarPanelBaseVCHandler<AWEBarPanelDetailTableViewControllerHandlerProtocol> *detailVCHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWEBarPanelDetailTableViewControllerAdapterClass;
+ (Class)aAWEBarPanelDetailTableViewControllerAdapterClass;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)cellDidEndDisplay:(id)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (BOOL)bottomBarShowState;
- (void)setBottomBarHidden:(BOOL)a0;
- (void)initialDataSourceFetchDidFinished;
- (id)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (id)aAWEPadBizUIAdapter;
- (void)dismissPanelWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (double)bottomBarCornerRadius;
- (id)bottomBarBackgroundColor;
- (id)aAWEBarPanelDetailTableViewControllerAdapter;
- (id)aAWEBarPanelDetailTableViewControllerAdapter;
- (void)configBottomRightContainerinteractionController:(id)a0 awemeModel:(id)a1;
- (double)bottomRightContainerWidth;
- (id)createDefaultConfig;
- (void)updateBottomUIStyleIfNeed;
- (void)setupAndConfigBottomRightContainerWithModel:(id)a0 interactionController:(id)a1;
- (void)adaptPlaybackRateForDetailCell:(id)a0;
- (void)showListPanel:(BOOL)a0 trigger:(long long)a1 completion:(id /* block */)a2;
- (void)layoutBottomRightContainer;
- (void)layoutSplitUI;
- (void)setupStyleSplitUI;
- (void)setupBottomRightContainer;
- (void)recordForSpeedInheritedIfNeedsWithSpeed:(id)a0 model:(id)a1;
- (void)onBottomAction;
- (void)loadMoreFinished;
- (BOOL)autoPlayScrollToNextVideo;
- (void)didClickCell:(id)a0 atIndexPath:(id)a1;
- (id)initWithDataController:(id)a0 config:(id)a1;
- (void)halfPanelReloadDataWithCurrentModel:(id)a0;
- (void)updateBottomBarText:(id)a0;
- (void)halfPanelReloadData;
- (void)didLoadPreviousWithList:(id)a0;
- (void)didLoadMoreWithList:(id)a0;
- (void)didClickPanelTopContent:(id)a0;
- (void)didClickClose:(BOOL)a0;
- (void)panelDragProgress:(double)a0;
- (void)updateConfigModelWithLogExtra:(id)a0;
- (void)shrinkVideoWhenShowPanelIfNeeded;
- (void)cancelShrinkVideoIfNeeded;
- (void)resizeVideoWithProgressIfNeeded:(double)a0;
- (BOOL)enableAutoPlayNextVideo;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
