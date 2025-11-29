@class UIFont, NSString, CATextLayer, NSMutableDictionary, CAShapeLayer, CABasicAnimation, UIImpactFeedbackGenerator, UIColor;

@interface BDEnvPlatformCornerView : UIView

@property (retain, nonatomic) CATextLayer *textLayer;
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } defaultCenter;
@property (readonly, nonatomic) double defaultRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } defaultFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } animatationFrame;
@property (nonatomic) unsigned long long cornerState;
@property (readonly, nonatomic) CABasicAnimation *spreadAnimation;
@property (retain, nonatomic) NSMutableDictionary *colorMutableDict;
@property (retain, nonatomic) UIImpactFeedbackGenerator *generator;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *shapeFillColor;

+ (Class)layerClass;
+ (id)cornerView;

- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)buildLayers;
- (id)textColorWithState:(unsigned long long)a0;
- (id)bezierPathWithRadius:(double)a0;
- (id)keyWithState:(unsigned long long)a0;
- (id)keysWithState:(unsigned long long)a0;
- (id)topBDEnvViewController;
- (id)topBDEnvViewController:(id)a0;
- (void)setTextColor:(id)a0 forState:(unsigned long long)a1;
- (void)showWithAnimated:(BOOL)a0 fromView:(id)a1;
- (void)pointInside:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
