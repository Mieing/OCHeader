@class UIImageView, UIView;

@interface AWERelatedVideoAIPlayingAnimationView : UIView

@property (retain, nonatomic) UIView *firstLine;
@property (retain, nonatomic) UIView *secondLine;
@property (retain, nonatomic) UIView *thirdLine;
@property (retain, nonatomic) UIImageView *image;

- (void)animationRun;
- (void)updateLineColor:(id)a0;
- (void)updateLineWidth;
- (void)__addAnimationWithDuration:(double)a0 timeoffset:(double)a1 toValue:(long long)a2 view:(id)a3;
- (void)animationStop;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
