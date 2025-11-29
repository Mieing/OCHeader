@interface AWEAwemeDetailFloatingButtonController : AWEAwemeNewDetailBaseController

+ (Class)aAWEPadDetailTableViewPlayControlCenterAdapterClass;

- (void)onScrollViewWillBeginDragging:(double)a0;
- (id)currentDisplayingAweme;
- (void)viewDidLoadAfterTableviewSetup;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)viewWillBeginCoordinatorTransitionAnimation:(struct CGSize { double x0; double x1; })a0;
- (id)aAWEPadDetailTableViewPlayControlCenterAdapter;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)currentInteractionController;

@end
