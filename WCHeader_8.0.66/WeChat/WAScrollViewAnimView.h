@class UIScrollView, CADisplayLink, UIView;

@interface WAScrollViewAnimView : UIView

@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *animateView;
@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopAnimate;
- (void)startAnimateWithDuration:(double)a0 delay:(double)a1 usingSpringWithDamping:(double)a2 initialSpringVelocity:(double)a3 options:(unsigned long long)a4 startPoint:(struct CGPoint { double x0; double x1; })a5 endPoint:(struct CGPoint { double x0; double x1; })a6;
- (void)timeTick:(id)a0;
- (void)setNeedsCancelAnimation;
- (void).cxx_destruct;

@end
