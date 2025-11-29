@class MovingRhombusView;

@interface WAGameRollProgressView : UIView

@property (nonatomic) double currentProgress;
@property (retain, nonatomic) MovingRhombusView *view1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 progressBarColor:(id)a1;
- (void)updateProgress:(double)a0;
- (void)beginLoadingAnimation;
- (void)endLoadingAnimation;
- (void).cxx_destruct;

@end
