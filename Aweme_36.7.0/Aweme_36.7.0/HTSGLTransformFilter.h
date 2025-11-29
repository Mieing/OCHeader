@interface HTSGLTransformFilter : HTSGLFilter {
    struct HTSGPUMatrix4x4 { struct HTSGPUVector4 { float one; float two; float three; float four; } one; struct HTSGPUVector4 { float one; float two; float three; float four; } two; struct HTSGPUVector4 { float one; float two; float three; float four; } three; struct HTSGPUVector4 { float one; float two; float three; float four; } four; } _orthographicMatrix;
}

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } affineTransform;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform3D;
@property (nonatomic) BOOL ignoreAspectRatio;
@property (nonatomic) BOOL anchorTopLeft;

- (void)setupFilterForSize:(struct CGSize { double x0; double x1; })a0;
- (void)initializeRenderer:(id)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)loadOrthoMatrix:(float *)a0 left:(float)a1 right:(float)a2 bottom:(float)a3 top:(float)a4 near:(float)a5 far:(float)a6;
- (void)convert3DTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } *)a0 toMatrix:(struct HTSGPUMatrix4x4 { struct HTSGPUVector4 { float x0; float x1; float x2; float x3; } x0; struct HTSGPUVector4 { float x0; float x1; float x2; float x3; } x1; struct HTSGPUVector4 { float x0; float x1; float x2; float x3; } x2; struct HTSGPUVector4 { float x0; float x1; float x2; float x3; } x3; } *)a1;
- (id)initWithContext:(id)a0;

@end
