@class AWERelatedVideoVideoPlayerDrawBackView, UIVisualEffectView;

@interface AWERVRecallVideoController : AWEVideoPlayControlBaseController

@property (retain, nonatomic) AWERelatedVideoVideoPlayerDrawBackView *drawBackView;
@property (retain, nonatomic) UIVisualEffectView *glassView;

- (void)setHide:(BOOL)a0;
- (void)bindEvent;
- (BOOL)shouldBlockGesture:(id)a0 touch:(id)a1;
- (BOOL)shouldHandlePan;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
