@class NSArray;

@interface WCFinderGradientView : UIView

@property (copy) NSArray *colors;
@property (copy) NSArray *locations;
@property struct CGPoint { double x0; double x1; } startPoint;
@property struct CGPoint { double x0; double x1; } endPoint;

+ (Class)layerClass;

- (id)_layer;

@end
