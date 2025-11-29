@class UIView;

@interface WCListenLyricAnimationLoadingView : MMUIView

@property (retain, nonatomic) UIView *p1;
@property (retain, nonatomic) UIView *p2;
@property (retain, nonatomic) UIView *p3;
@property (nonatomic) int repeatCount;
@property (nonatomic) double remainDuration;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)startAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)stopAnimation;
- (void)pauseLayer:(id)a0;
- (void)resumeLayer:(id)a0;
- (void)runLoadingAnimation:(id /* block */)a0;
- (void)runCountDownAnimationWithDuraion:(double)a0 completion:(id /* block */)a1;
- (void)reset;
- (id)genPoint;
- (void).cxx_destruct;

@end
