@interface QGPVector3 : QGPBaseModel

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

- (union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; })toGLKVector3;

@end
