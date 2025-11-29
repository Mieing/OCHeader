@class CALayer;

@interface AMapSMCalloutBackgroundView : UIView

@property (nonatomic) struct CGPoint { double x; double y; } arrowPoint;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) CALayer *contentMask;

@end
