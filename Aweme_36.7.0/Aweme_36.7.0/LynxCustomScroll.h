@class UIScrollView, CADisplayLink;

@interface LynxCustomScroll : NSObject

@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) CADisplayLink *displayLink;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } start;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } dist;
@property (readonly, nonatomic) double beginTime;
@property (readonly, copy, nonatomic) id /* block */ completeBlock;
@property (readonly, copy, nonatomic) id /* block */ interception;
@property (readonly, copy, nonatomic) id /* block */ timingFunction;
@property (nonatomic) BOOL originalScrollEnabled;
@property (nonatomic) double autoScrollRate;
@property (nonatomic) BOOL isAutoScrollVertical;
@property (nonatomic) BOOL isAutoScrollAutoStop;
@property (nonatomic) unsigned long long scrollBehavior;

- (void)autoScrollTick;
- (double)easeInEaseOut:(double)a0;
- (BOOL)autoScrollWillReachToTheBounds:(inout struct CGPoint { double x0; double x1; } *)a0;
- (void)startAutoScroll:(double)a0 behavior:(unsigned long long)a1 rate:(double)a2 autoStop:(BOOL)a3 vertical:(BOOL)a4 complete:(id /* block */)a5;
- (void)startWithDuration:(double)a0 behavior:(unsigned long long)a1 interval:(double)a2 start:(struct CGPoint { double x0; double x1; })a3 end:(struct CGPoint { double x0; double x1; })a4 timingFunction:(id /* block */)a5 progress:(id /* block */)a6 complete:(id /* block */)a7;
- (void).cxx_destruct;
- (id)initWithScrollView:(id)a0;
- (void)stop:(BOOL)a0;
- (void)dealloc;
- (void)tick:(id)a0;

@end
