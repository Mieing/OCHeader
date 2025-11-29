@interface AWEMVPageTrackerController : AWEDCFeedBaseController

@property (nonatomic) struct CGPoint { double x; double y; } originScrollViewContentOffset;
@property (nonatomic) BOOL isTrackedFirstScreenTime;
@property (nonatomic) double stayDuration;

- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerScrollViewDidScrollToTop:(id)a0;
- (void)trackStayTime;
- (id)mvPageContext;
- (void)resetStayDuration;
- (void)trackFirstScreenStayTime;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)scrollViewDidEndScrolling;
- (void)containerViewDidLoad;

@end
