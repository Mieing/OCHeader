@interface TBDrawParam : NSObject {
    float _viewMat[16];
    float _projectMat[16];
}

@property int renderType;
@property int width;
@property int height;
@property (readonly) float *projectMatrix;
@property (readonly) float *viewMatrix;
@property float distancePerPixel;

- (void)update:(struct TBDrawParamType { int x0; float x1[16]; double x2[16]; int x3; int x4; float x5; } *)a0;

@end
