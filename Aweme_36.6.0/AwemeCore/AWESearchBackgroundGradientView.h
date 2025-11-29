@class AWESearchBackgroundGradientModel, CAGradientLayer;

@interface AWESearchBackgroundGradientView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWESearchBackgroundGradientModel *model;

- (void)updateGradientColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
