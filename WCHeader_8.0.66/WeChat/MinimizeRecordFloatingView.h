@class CAShapeLayer, UIColor, UIView;

@interface MinimizeRecordFloatingView : MinimizeStarFloatingView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameBeforeMove;
@property (nonatomic) double titleMaxWidthWithCurrentState;
@property (retain, nonatomic) UIView *shadowLayerView;
@property (retain, nonatomic) UIView *shadowSubLayerView;
@property (retain, nonatomic) UIView *whiteBackgroundView;
@property (retain, nonatomic) CAShapeLayer *outterBorderLayer;
@property (retain, nonatomic) CAShapeLayer *innerBorderLayer;
@property (retain, nonatomic) UIColor *gradientBackgroundColor;
@property (retain, nonatomic) UIView *redDotView;

- (void)initUI;
- (void)showFloating;
- (void)layoutSubviews;
- (void)setRedDotViewHidden:(BOOL)a0;
- (void)updateMask:(BOOL)a0 Duration:(double)a1;
- (void)updateMask:(BOOL)a0 View:(id)a1 Duration:(double)a2;
- (void)updateShadow:(BOOL)a0 Duration:(double)a1;
- (void)resetBorderLayer;
- (void)resetBorderLayerWhenTraitCollectionDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateBorderLayer:(id)a0 VisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 BorderColor:(id)a2 BorderWidth:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)getDefaultClipPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
