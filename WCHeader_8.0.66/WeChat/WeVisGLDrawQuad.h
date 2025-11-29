@class WeVisGLProgram, NSMutableDictionary;

@interface WeVisGLDrawQuad : NSObject {
    unsigned int mQuadVAO;
    unsigned int mQuadVBO;
    WeVisGLProgram *mQuadProgram;
    float mUvScaleX;
    float mUvScaleY;
    float mUvOffsetX;
    float mUvOffsetY;
    int mUVTransform;
    int mUvScaleLoc;
    int mUvOffsetLoc;
    int mUvMatrixLoc;
    int mUvTranslateLoc;
    NSMutableDictionary *mUniformCache;
}

@property (nonatomic) BOOL isInitialized;

- (id)initWithFragShader:(const char *)a0;
- (void)bindUniform:(const char *)a0 toTexUnit:(int)a1;
- (void)bindUniform:(const char *)a0 toFloatX:(float)a1 Y:(float)a2;
- (void)dealloc;
- (void)setupQuadVertexStream;
- (void)drawFromTex0:(unsigned int)a0 UVTransform:(int)a1;
- (void)drawFromTex0:(unsigned int)a0 tex1:(unsigned int)a1 UVTransform:(int)a2;
- (void).cxx_destruct;

@end
