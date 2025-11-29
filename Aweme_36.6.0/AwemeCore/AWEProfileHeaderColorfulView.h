@class AWEProfileHeaderContext, CAGradientLayer;

@interface AWEProfileHeaderColorfulView : UIView

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) CAGradientLayer *radialLayer;
@property (retain, nonatomic) CAGradientLayer *linearLayer;

- (void)p_refreshColors;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithContext:(id)a0;

@end
