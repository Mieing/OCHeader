@class LynxAnimationTransformRotation;

@interface LynxUILastInfo : NSObject

@property (retain, nonatomic) LynxAnimationTransformRotation *lastTransformRotation;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } lastTransformWithoutRotate;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } lastTransformWithoutRotateXY;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } offsetEffectTransform;
@property (nonatomic) double lastOffsetX;
@property (nonatomic) double lastOffsetY;

- (void).cxx_destruct;
- (id)init;

@end
