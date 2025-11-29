@class CAMediaTimingFunction;

@interface LynxHeroModifiers : NSObject

@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) float opacity;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) CAMediaTimingFunction *timingFunction;

- (id)rotateX:(double)a0 y:(double)a1 z:(double)a2;
- (id)translateX:(double)a0 y:(double)a1 z:(double)a2;
- (id)scaleX:(double)a0 y:(double)a1 z:(double)a2;
- (id)init;

@end
