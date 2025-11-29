@class UIScrollView, CAMediaTimingFunction, CADisplayLink;

@interface ScrollViewTimingDelegate : NSObject

@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) double duration;
@property (nonatomic) BOOL animationStarted;
@property (nonatomic) double beginTime;
@property (nonatomic) struct CGPoint { double x; double y; } beginContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } deltaContentOffset;

- (void)dealloc;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 withTimingFunction:(id)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 withTimingFunction:(id)a1 duration:(double)a2;
- (void)updateContentOffset:(id)a0;
- (void)updateProgress:(double)a0;
- (void)stopAnimation;
- (void).cxx_destruct;

@end
