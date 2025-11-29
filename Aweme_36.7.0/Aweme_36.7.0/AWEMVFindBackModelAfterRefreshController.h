@class NSArray, NSString, AWEMVFindBackModelAfterRefreshView, UIView;

@interface AWEMVFindBackModelAfterRefreshController : AWEDCFeedBaseController <AWEUserMessage, AWEMVEventDispatchProtocol>

@property (retain, nonatomic) NSArray *firstXModelsBeforeRefresh;
@property (retain, nonatomic) AWEMVFindBackModelAfterRefreshView *refreshView;
@property (retain, nonatomic) UIView *coverView;
@property (nonatomic) BOOL refreshViewCanHide;
@property (copy, nonatomic) id /* block */ sevenSecondsDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willStartLogin;
- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onUIThemeDidChange;
- (void)setupRefreshView;
- (id)mvContext;
- (void)onMVChannelFetchListDataStartWithType:(unsigned long long)a0;
- (void)onMVChannelFetchListDataEndWithType:(unsigned long long)a0;
- (void)resetFreshView;
- (void)hideFindBackView;
- (void)showFindBackView;
- (void)recordFindBackMessageInModel:(id)a0 refreshType:(unsigned long long)a1;
- (void)insertFindBackModels:(id)a0;
- (void)trackFindBackViewClick;
- (BOOL)canShowFindBackView;
- (BOOL)shouldInsert;
- (void)trackFindBackViewShow;
- (id)createInsertIndexPathByEnterModel:(id)a0;
- (void)didClickFindBackCardsView;
- (void).cxx_destruct;
- (id)takeScreenshot;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
