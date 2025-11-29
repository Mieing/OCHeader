@class CAGradientLayer;

@interface HTSPaddingLabel : UILabel

@property (retain, nonatomic) CAGradientLayer *ies_gameGradientLayer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;

- (id)ies_gameGradientLayer;
- (void)ies_gameResetGradient;
- (void)setIes_gameGradientLayer:(id)a0;
- (void)ies_gameSetGradientTextColorWithColors:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
