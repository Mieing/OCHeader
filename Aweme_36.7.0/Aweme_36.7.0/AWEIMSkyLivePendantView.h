@class UILabel, UIView;

@interface AWEIMSkyLivePendantView : UIView

@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIView *indicativeView;
@property (retain, nonatomic) UILabel *statusLabel;

- (id)p_gradientLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_createIndicativeView:(double)a0;
- (void)p_createDotView;
- (void)showDotOrIndicator:(BOOL)a0 indicatorH:(double)a1 iconText:(id)a2;
- (void)setBorderColor:(id)a0;
- (void).cxx_destruct;

@end
