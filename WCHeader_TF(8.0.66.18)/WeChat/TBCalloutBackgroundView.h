@class CALayer;

@interface TBCalloutBackgroundView : UIView

@property (nonatomic) struct CGPoint { double x; double y; } arrowPoint;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) CALayer *contentMask;
@property (nonatomic) double anchorHeight;
@property (nonatomic) double anchorMargin;

+ (id)dataWithBase64EncodedString:(id)a0;
+ (id)embeddedImageNamed:(id)a0;
+ (id)CalloutArrow;
+ (id)CalloutArrow_2x;

@end
