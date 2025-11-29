@class UIView;

@interface AWEPadFeedDrawerPlayingAnimationView : UIView

@property (retain, nonatomic) UIView *firstLine;
@property (retain, nonatomic) UIView *secondLine;
@property (retain, nonatomic) UIView *thirdLine;

- (void)animationRun;
- (void)updateLineColor:(id)a0;
- (void)updateLineWidth;
- (void)__addAnimationWithDuration:(double)a0 timeoffset:(double)a1 view:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
