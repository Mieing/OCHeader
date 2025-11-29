@class CALayer, UIImageView, NSString;

@interface AWEEcomSearchSketchView : UIView <AWEEcomSearchSketchViewProtocol>

@property (retain, nonatomic) CALayer *gradientLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithoutResize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 geckoImageName:(id)a1 type:(unsigned long long)a2;
- (void)scanAnimate;
- (id)makeGradientLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;

@end
