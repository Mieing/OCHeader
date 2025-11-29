@class UIColor;

@interface AWENoxusGradientView : UIView

@property (nonatomic) BOOL startFromUp;
@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;

+ (Class)layerClass;

- (id)initWithDirection:(BOOL)a0 startColor:(id)a1 endColor:(id)a2;
- (void)refreshStartColor:(id)a0 endColor:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithDirection:(BOOL)a0;

@end
