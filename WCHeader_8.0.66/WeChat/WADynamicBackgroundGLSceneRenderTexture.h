@interface WADynamicBackgroundGLSceneRenderTexture : WADynamicBackgroundGLObject {
    unsigned int vbo;
    unsigned int vao;
    unsigned int diffuseTexture;
}

@property (nonatomic) union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } colorMatrix;
@property (nonatomic) unsigned int directionX;
@property (nonatomic) unsigned int needColorMatrix;
@property (nonatomic) BOOL needBlend;

- (id)initWithGLContext:(id)a0 texture:(unsigned int)a1;
- (void)dealloc;
- (float *)planeData;
- (void)genVBO;
- (void)genVAO;
- (void)update:(double)a0;
- (void)draw:(id)a0;

@end
