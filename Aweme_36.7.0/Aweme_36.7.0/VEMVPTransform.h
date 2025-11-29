@interface VEMVPTransform : VETransform {
    struct IESGLesMatrix4x4<float> { struct IESGLesVector4<float> { float x; float y; float z; float w; } x; struct IESGLesVector4<float> { float x; float y; float z; float w; } y; struct IESGLesVector4<float> { float x; float y; float z; float w; } z; struct IESGLesVector4<float> { float x; float y; float z; float w; } w; } _mvpMatrix;
    struct IESGLesMatrix4x4<float> { struct IESGLesVector4<float> { float x; float y; float z; float w; } x; struct IESGLesVector4<float> { float x; float y; float z; float w; } y; struct IESGLesVector4<float> { float x; float y; float z; float w; } z; struct IESGLesVector4<float> { float x; float y; float z; float w; } w; } _externalModel4x4Matrix;
    BOOL _useExternalModel4x4Matrix;
    struct IES_V3F_T2F_QUAD { struct IES_V3F_T2F { struct IESGLesVector3<float> { float x; float y; float z; } vertices; struct IESGLesVector2<float> { float x; float y; } texCoords; } bl; struct IES_V3F_T2F { struct IESGLesVector3<float> { float x; float y; float z; } vertices; struct IESGLesVector2<float> { float x; float y; } texCoords; } br; struct IES_V3F_T2F { struct IESGLesVector3<float> { float x; float y; float z; } vertices; struct IESGLesVector2<float> { float x; float y; } texCoords; } tl; struct IES_V3F_T2F { struct IESGLesVector3<float> { float x; float y; float z; } vertices; struct IESGLesVector2<float> { float x; float y; } texCoords; } tr; } _quadData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewPort;
@property (nonatomic) struct CGSize { double width; double height; } inSize;
@property (nonatomic) struct CGSize { double width; double height; } outSize;
@property (nonatomic) long long fillMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;

- (void)updateExternalModelWith3x3Matrix:(float *)a0;
- (long long)quadData;
- (struct CGSize { double x0; double x1; })inActualSize;
- (void)updateQuadData;
- (void)updateViewPort;
- (void)updateMatrix;
- (const float *)externalMvpMatrix;
- (BOOL)useExternalMvpMatrix;
- (id)init;
- (id).cxx_construct;
- (const float *)mvpMatrix;

@end
