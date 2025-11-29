@class NSString, AWEAwemeModel;

@interface AWEWatchVideoLaterDetailVCHandler : AWEBarPanelBaseVCHandler <AWEWatchVideoLaterListViewControllerDelegate>

@property (nonatomic) BOOL hasEnterWatchLaterListPage;
@property (retain, nonatomic) AWEAwemeModel *willDisplayModelForPageSwitch;
@property (nonatomic) BOOL enterWatchLaterListPage;
@property (nonatomic) BOOL isPopVC;
@property (retain, nonatomic) AWEAwemeModel *enterShowModel;
@property (nonatomic) long long dataCount;
@property (nonatomic) long long pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPanelShowing;
- (void)onWatchVideoLaterChangeNotification:(id)a0;
- (id)initWithDetailViewController:(id)a0;
- (id)bottomBarNameInVC:(id)a0;
- (void)willPlayNextVideo:(id)a0;
- (id)initWithDetailViewController:(id)a0 type:(long long)a1;
- (BOOL)shouldEnterNewDetailPageForClickAweme;
- (void)listPageDidClickModel:(id)a0;
- (void)trackEnterPage;
- (void)updateDataCountIfNeed;
- (BOOL)refreshTableIfDataControllerChanged;
- (void)trackDetailPanelShow:(long long)a0;
- (void)checkDataValid;
- (void)didShowPanelViewWithEnterType:(long long)a0;
- (void)didHiddenPanelView;
- (void)panelController:(id)a0 didClickCell:(id)a1 atIndexPath:(id)a2;
- (void)panelController:(id)a0 didLoadPreviousWithList:(id)a1;
- (void)panelController:(id)a0 didLoadMoreWithList:(id)a1;
- (void)panelController:(id)a0 didClickPanelTopContent:(id)a1;
- (BOOL)enableAutoPlayNextVideo;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
