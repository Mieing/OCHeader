@interface VETransform : NSObject {
    struct IESGLesMatrix4x4<float> { struct IESGLesVector4<float> { float x; float y; float z; float w; } x; struct IESGLesVector4<float> { float x; float y; float z; float w; } y; struct IESGLesVector4<float> { float x; float y; float z; float w; } z; struct IESGLesVector4<float> { float x; float y; float z; float w; } w; } _mvpMatrix;
}

@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) double rotateAngle;
@property (nonatomic) double extraRotateAngle;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL shouldUpdate;

- (const float *)externalMvpMatrix;
- (BOOL)useExternalMvpMatrix;
- (id)init;
- (id).cxx_construct;
- (const float *)mvpMatrix;

@end
