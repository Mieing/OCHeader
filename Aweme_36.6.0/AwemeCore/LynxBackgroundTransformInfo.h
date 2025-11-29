@interface LynxBackgroundTransformInfo : NSObject

@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform;
@property (nonatomic) struct CGPoint { double x; double y; } transformOrigin;
@property (nonatomic) struct CGPoint { double x; double y; } postTranslate;

- (id)init;

@end
