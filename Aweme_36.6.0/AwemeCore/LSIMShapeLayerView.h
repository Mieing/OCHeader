@class CAShapeLayer;

@interface LSIMShapeLayerView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

@end
