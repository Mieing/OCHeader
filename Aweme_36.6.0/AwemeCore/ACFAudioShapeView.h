@class UIColor, CAShapeLayer;

@interface ACFAudioShapeView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;

+ (Class)layerClass;

- (void)awe_themeReload;
- (void).cxx_destruct;

@end
