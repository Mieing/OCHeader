@class UIView;

@interface EditImageSNSBorderView : UIView

@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIView *topBorderLine;
@property (retain, nonatomic) UIView *bottomBorderLine;
@property (retain, nonatomic) UIView *leftBorderLine;
@property (retain, nonatomic) UIView *rightBorderLine;
@property (retain, nonatomic) UIView *topShadowLine;
@property (retain, nonatomic) UIView *bottomShadowLine;
@property (retain, nonatomic) UIView *leftShadowLine;
@property (retain, nonatomic) UIView *rightShadowLine;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createShadowLine;
- (id)createBorderLine;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
