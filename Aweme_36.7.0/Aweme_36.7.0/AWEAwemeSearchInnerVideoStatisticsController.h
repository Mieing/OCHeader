@interface AWEAwemeSearchInnerVideoStatisticsController : AWEAwemeNewDetailBaseController

@property (nonatomic) BOOL shouldReportClickFirstFrameEvent;

- (void)onScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)videoStartPlay;
- (void)trackClickFirstFrameEvent;
- (void)trackSlideFirstFrameEvent;
- (BOOL)shouldAddSearchParamsInShareVideoTrack;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
