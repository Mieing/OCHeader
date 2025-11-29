@class NSString;

@interface AWEAwemeDetailBottomBarController : AWEAwemeFeedBaseController <AWEAwemeFeedBaseControllerProtocol>

@property (nonatomic) unsigned long long cachedVisibleIndex;
@property (nonatomic) BOOL isTransitioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentDisplayingCell;
- (unsigned long long)currentVisibleCellIndex;
- (void)currentPlayVideoDidChangePlayState:(long long)a0;
- (void)viewWillEndCoordinatorTransitionAnimation:(struct CGSize { double x0; double x1; })a0;
- (void)viewWillBeginCoordinatorTransitionAnimation:(struct CGSize { double x0; double x1; })a0;
- (BOOL)enableDetailFeedMoreLifeCycleForwardToBottomBar;
- (BOOL)enableDetailPauseForwardToBottomBar;
- (BOOL)enableCurrentCellOptWhenTransitioning;
- (unsigned long long)currentVisibleCellIndexBeforeTransition;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)applicationDidBecomeActive;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
