@interface VPVREye : NSObject {
    void *_lensDistortion;
    struct CardboardEyeTextureDescription { unsigned long long x0; float x1; float x2; float x3; float x4; } *_eyeTextureDescription;
    struct { void /* unknown type, empty encoding */ columns[4]; } _projectionMatrix;
    struct { void /* unknown type, empty encoding */ columns[4]; } _eyeMatrix;
    struct CGSize { double width; double height; } _textureSize;
    BOOL _scopicMonoDrawOnce;
}

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long scopicType;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } eyeMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } projectionMatrix;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; } viewport;
@property (nonatomic) float zoom;

+ (id)eyeWithType:(unsigned long long)a0 textureSize:(struct CGSize { double x0; double x1; })a1 scopicType:(long long)a2 fovAngle:(float)a3 configData:(id)a4;

- (void)updateParams;
- (struct CardboardMesh { int *x0; int x1; float *x2; float *x3; int x4; })distortionMesh;
- (struct CardboardEyeTextureDescription { unsigned long long x0; float x1; float x2; float x3; float x4; } *)eyeTextureDescription;
- (id)initWithType:(unsigned long long)a0 textureSize:(struct CGSize { double x0; double x1; })a1 scopicType:(long long)a2 fovAngle:(float)a3 configData:(id)a4;
- (void)dealloc;

@end
