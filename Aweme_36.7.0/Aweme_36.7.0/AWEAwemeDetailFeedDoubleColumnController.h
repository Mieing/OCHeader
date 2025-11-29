@class AWEFeedDoubleColumnDetailInerMaskView, UITapGestureRecognizer, UIView;

@interface AWEAwemeDetailFeedDoubleColumnController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) UIView *hintView;
@property (retain, nonatomic) AWEFeedDoubleColumnDetailInerMaskView *innerMaskView;
@property (nonatomic) BOOL isShowingHintView;
@property (nonatomic) BOOL preventShow;
@property (retain, nonatomic) UITapGestureRecognizer *tap;

- (void)playerWillStartNextLoop:(id)a0;
- (void)onScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)doubleColumnScenesEnable;
- (void)setMetricsInfo;
- (void)showInnerHintView:(id)a0;
- (void)hideInnerHintViewWithAnimated:(BOOL)a0;
- (BOOL)shouldShowInnerHintView;
- (void)setHintViewHasShow;
- (void)pureFirstCellInteractionVCWithEnter:(BOOL)a0;
- (id)getCurrentInteractionVC;
- (id)getCurrentPlayer;
- (void)tap:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)timerAction;
- (void)viewWillDisappear;

@end
