@class LynxPlatformLength;

@interface LynxTransformRaw : NSObject {
    unsigned long long _p0Unit;
    unsigned long long _p1Unit;
    unsigned long long _p2Unit;
}

@property (nonatomic) float p0;
@property (nonatomic) float p1;
@property (nonatomic) float p2;
@property (retain, nonatomic) LynxPlatformLength *platformLengthP0;
@property (retain, nonatomic) LynxPlatformLength *platformLengthP1;
@property (retain, nonatomic) LynxPlatformLength *platformLengthP2;
@property (nonatomic) int type;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transformMatrix;

+ (id)toTransformRaw:(id)a0;
+ (double)getRotateZRad:(id)a0;
+ (BOOL)hasPercent:(id)a0;
+ (BOOL)hasScaleOrRotate:(id)a0;
+ (double)getTranslateX:(id)a0;
+ (double)getTranslateY:(id)a0;

- (BOOL)isRotate;
- (BOOL)isTranslate;
- (BOOL)isMatrix;
- (BOOL)isRotateXY;
- (BOOL)isP0Percent;
- (BOOL)isP1Percent;
- (void)initTransformMatrixWithArray:(id)a0;
- (BOOL)isP2Percent;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;

@end
