@class UIImageView, MMUILabel, UIView;

@interface BrandMyTabEntranceCardNotify : UIView

@property (retain, nonatomic) UIView *topSeparator;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UIImageView *arrowView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithText:(id)a0;
- (void)setUpViews;
- (void)setUpLayout;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
