@class UILabel, AWESearchHomeSideCurveTipViewConfig, CAShapeLayer;

@interface AWESearchHomeSideCurveTipView : UIView

@property (retain, nonatomic) AWESearchHomeSideCurveTipViewConfig *config;
@property (retain, nonatomic) UILabel *tip;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) BOOL didHaptic;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)updateTip:(id)a0;
- (void)updateWithXOffset:(double)a0 yPosition:(double)a1;
- (void)updateShapeLayer:(double)a0 controlPointWidth:(double)a1 yPosition:(double)a2;
- (void)changeState:(double)a0;
- (void).cxx_destruct;

@end
