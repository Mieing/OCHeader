@class CAShapeLayer;

@interface ACCTemplateTextStickerBorderView : UIView

@property (nonatomic) double basicLineWidth;
@property (nonatomic) double basicLineDashLength;
@property (nonatomic) double basicScale;
@property (nonatomic) double scale;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (nonatomic) long long index;
@property (copy, nonatomic) id /* block */ userWantEditTemplateText;

- (double)lineDashLength;
- (void)setHiddenBorderView:(BOOL)a0;
- (void)updateBorderViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateBorderViewCenterPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)updateBorderBasicLineWidthWithScale:(double)a0;
- (void)updateBorderLineWidthWithScale:(double)a0;
- (double)lineWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
