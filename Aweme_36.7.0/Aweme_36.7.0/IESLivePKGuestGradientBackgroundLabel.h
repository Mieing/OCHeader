@class CAGradientLayer;

@interface IESLivePKGuestGradientBackgroundLabel : UILabel

@property (readonly, nonatomic) CAGradientLayer *layer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;

+ (Class)layerClass;

- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 limitedToNumberOfLines:(long long)a1;

@end
