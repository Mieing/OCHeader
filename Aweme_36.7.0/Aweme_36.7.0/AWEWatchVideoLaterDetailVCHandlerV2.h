@class AWEBarPanelDetailTableViewControllerV2, NSString, AWEBarPanelViewController, AWEAwemeModel, AWEBarPanelDetailUIConfig;

@interface AWEWatchVideoLaterDetailVCHandlerV2 : NSObject <AWEWatchVideoLaterListViewControllerDelegate, AWEBarPanelDetailTableViewControllerHandlerProtocolV2, AWEBarPanelViewControllerDelegate>

@property (weak, nonatomic) AWEBarPanelDetailTableViewControllerV2 *detailViewController;
@property (nonatomic) BOOL hasEnterWatchLaterListPage;
@property (retain, nonatomic) AWEAwemeModel *willDisplayModelForPageSwitch;
@property (nonatomic) BOOL enterWatchLaterListPage;
@property (nonatomic) BOOL panelShowing;
@property (nonatomic) BOOL isPopVC;
@property (retain, nonatomic) AWEAwemeModel *enterShowModel;
@property (retain, nonatomic) AWEAwemeModel *beforeShowPanelModel;
@property (retain, nonatomic) AWEBarPanelViewController *panelViewController;
@property (retain, nonatomic) AWEBarPanelDetailUIConfig *uiConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPanelShowing;
- (void)dismissPanelWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updatePanelLayout;
- (void)onWatchVideoLaterChangeNotification:(id)a0;
- (id)initWithDetailViewController:(id)a0;
- (void)tryPreloadData;
- (void)showListPanel:(BOOL)a0 trigger:(long long)a1 completion:(id /* block */)a2;
- (void)panelDetailDidFinishLoadMore;
- (id)bottomBarNameInVC:(id)a0;
- (void)willPlayNextVideo:(id)a0;
- (BOOL)enableInheritedPlaybackRate;
- (void)didClickCell:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldEnterNewDetailPageForClickAweme;
- (void)listPageDidClickModel:(id)a0;
- (void)trackEnterPage;
- (BOOL)refreshTableIfDataControllerChanged;
- (void)trackDetailPanelShow:(long long)a0;
- (void)checkDataValid;
- (void)didLoadPreviousWithList:(id)a0;
- (void)didLoadMoreWithList:(id)a0;
- (void)didClickPanelTopContent:(id)a0;
- (void)didClickClose:(BOOL)a0;
- (void)panelDragProgress:(double)a0;
- (BOOL)enableAutoPlayNextVideo;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
