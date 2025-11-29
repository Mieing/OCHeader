@class WADynamicBackgroundGLGeometry, NSMutableArray;

@interface DynamicBackgroundParticle : WADynamicBackgroundGLObject

@property (nonatomic) float radius;
@property (nonatomic) int sideCount;
@property (nonatomic) union _GLKVector3 { struct { float x; float y; float z; } ; struct { float r; float g; float b; } ; struct { float s; float t; float p; } ; float v[3]; } position;
@property (nonatomic) union _GLKVector3 { struct { float x; float y; float z; } ; struct { float r; float g; float b; } ; struct { float s; float t; float p; } ; float v[3]; } velocity;
@property (nonatomic) float opacity;
@property (nonatomic) union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } colorMatrix;
@property (retain, nonatomic) WADynamicBackgroundGLGeometry *geometry;
@property (nonatomic) unsigned int framePerSecond;
@property (nonatomic) float angle;
@property (nonatomic) float vx;
@property (nonatomic) float vy;
@property (nonatomic) float dx;
@property (nonatomic) float dy;
@property (retain, nonatomic) NSMutableArray *colorConfigs;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } currentColor;
@property (nonatomic) double colorRatio;
@property (nonatomic) unsigned int colorIndex;

- (id)initWithGLContext:(id)a0;
- (void)update:(double)a0;
- (void)draw:(id)a0;
- (void)rangeDetect;
- (void)resetPositionBeyondScreen:(BOOL)a0;
- (float)randFloat:(float)a0 end:(float)a1;
- (void).cxx_destruct;

@end
