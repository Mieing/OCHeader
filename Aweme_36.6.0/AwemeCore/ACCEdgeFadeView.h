@class NSString, CAGradientLayer;

@interface ACCEdgeFadeView : UIView <CALayerDelegate>

@property (readonly, nonatomic) CAGradientLayer *fadeLayer;
@property (nonatomic) long long direction;
@property (nonatomic) double value;
@property (nonatomic) double fadeRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fadeLayer;

- (BOOL)isValidFadeValue;
- (double)getFadeRatio;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)refresh;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
