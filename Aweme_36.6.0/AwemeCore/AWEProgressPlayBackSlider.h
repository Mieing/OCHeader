@class UIView;

@interface AWEProgressPlayBackSlider : UIView

@property (retain, nonatomic) UIView *playedView;
@property (retain, nonatomic) UIView *lineView;
@property (readonly, nonatomic) double progress;

+ (long long)progressSmallerWhenDragSolution;

- (void)updatePlayTime:(double)a0 totalTime:(double)a1 animated:(BOOL)a2 animatedDuration:(double)a3;
- (void)setupCornerRadis;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
