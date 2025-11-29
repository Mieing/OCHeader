@class UIImageView, LOTAnimationView;

@interface AWEUserHomeCoverTipButton : UIButton

@property (nonatomic) double interTitleImageSpacing;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) LOTAnimationView *tipAnimationView;

- (void)p_resizeSubviews;
- (void)p_layoutSubViewsForImagePositionRight;
- (void)tipAnimationPlay;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
