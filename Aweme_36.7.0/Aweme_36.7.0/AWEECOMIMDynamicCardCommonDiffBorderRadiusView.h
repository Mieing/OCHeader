@class UIImageView, AWEECOMIMDynamicCardCommonDiffBorderRadiusViewModel, CAShapeLayer;

@interface AWEECOMIMDynamicCardCommonDiffBorderRadiusView : UIView

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) UIImageView *imgView;
@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusViewModel *model;

- (void)addBorderToImageView:(id)a0;
- (void)addDifferentCornerRadiusForLeftTop:(double)a0 leftBottom:(double)a1 rightTop:(double)a2 rightBottom:(double)a3 contianerBorderColor:(id)a4 contianerBorderWidth:(double)a5 isDash:(BOOL)a6;
- (void)updateViewWithModel:(id)a0 completion:(id /* block */)a1;
- (void)didResetFrame;
- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
