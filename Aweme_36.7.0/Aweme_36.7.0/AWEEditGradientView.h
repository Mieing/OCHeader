@class CAGradientLayer;

@interface AWEEditGradientView : AWEStudioExcludeSelfView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topColor:(id)a1 bottomColor:(id)a2;
- (id)initLeftTop2RightBottomWithColors:(id)a0;

@end
