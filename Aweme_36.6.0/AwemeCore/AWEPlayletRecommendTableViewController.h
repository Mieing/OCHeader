@class AWEPlayletRecommendTableViewMaskView;
@protocol AWEPlayletRecommendTableViewControllerDelegate;

@interface AWEPlayletRecommendTableViewController : AWEAwemeDetailTableViewController

@property (retain, nonatomic) AWEPlayletRecommendTableViewMaskView *tableViewMaskView;
@property (weak, nonatomic) id<AWEPlayletRecommendTableViewControllerDelegate> playletRecommendTableViewControllerDelegate;

+ (id)playletRecommendWithDataModel:(id)a0 dataController:(id)a1 model:(id)a2 logExtraDict:(id)a3;

- (void)awe_onReturnButtonClicked:(id)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (id)cellReuseIdentifierForRowWithModel:(id)a0;
- (BOOL)shouldActiveInCurrentTopViewController;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (id)enterFromForEnterSearch;
- (BOOL)shouldShowDiscoverEntranceView;
- (BOOL)shouldUseSearchEntranceBarStyle;
- (id)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (id)naviBarCoordinator;
- (double)cellHeightAtIndex:(long long)a0;
- (id)createDefaultConfig;
- (BOOL)fpsOptimizationEnabled;
- (BOOL)getCanShowFixedBottomBar;
- (BOOL)p_enableFullScreenSlide;
- (BOOL)shouldHideCommentInputViewOnAweme:(id)a0;
- (void)clickExitButton;
- (void)exitOnScroll;
- (void)playletRecommendDataControllerLoadMoreFinish:(id)a0;
- (void)trackerCellShowWithModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)setTableView:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
