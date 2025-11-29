@class CAShapeLayer;

@interface AWEPOIShapeLayerView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

@end
