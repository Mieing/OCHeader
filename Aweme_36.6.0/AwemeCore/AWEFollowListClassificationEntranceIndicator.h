@class UIView;

@interface AWEFollowListClassificationEntranceIndicator : UIView

@property (retain, nonatomic) UIView *indicatorForeground;
@property (retain, nonatomic) UIView *indicatorBackground;
@property (nonatomic) float totalWidth;

- (void)updateIndicatorWithProgress:(float)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
