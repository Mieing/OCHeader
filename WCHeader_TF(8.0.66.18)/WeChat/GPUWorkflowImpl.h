@class EAGLContext, NSRecursiveLock;

@interface GPUWorkflowImpl : NSObject {
    unsigned int _fbo;
    EAGLContext *_glContextOld;
    EAGLContext *_glContextNew;
    struct __CVOpenGLESTextureCache { } *_textureCacheRef;
    struct GPUWorkflowShader { unsigned int x0; unsigned int x1; unsigned int x2; } *_shader;
    NSRecursiveLock *_glLock;
}

- (id)init;
- (void)dealloc;
- (void)releaseGLRes;
- (void *)getCameraBufferWithPixelBuffer:(struct __CVBuffer **)a0 viewport:(struct CGSize { double x0; double x1; })a1 displayTransform:(struct mat<3, 3, float, glm::packed_highp> { struct vec<3, float, glm::packed_highp> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0[3]; })a2;
- (void *)getCameraBufferWithYTexture:(unsigned int)a0 uvTexture:(unsigned int)a1 textureSize:(struct CGSize { double x0; double x1; })a2 viewport:(struct CGSize { double x0; double x1; })a3 displayTransform:(struct mat<3, 3, float, glm::packed_highp> { struct vec<3, float, glm::packed_highp> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0[3]; })a4;
- (BOOL)createTextureFromPixelBuffer:(struct __CVBuffer **)a0 yTexture:(unsigned int *)a1 uvTexture:(unsigned int *)a2;
- (void)setupTextureCache;
- (BOOL)renderYTexture:(unsigned int)a0 uvTexture:(unsigned int)a1 toTexture:(unsigned int)a2 viewport:(struct CGSize { double x0; double x1; })a3 displayTransform:(struct mat<3, 3, float, glm::packed_highp> { struct vec<3, float, glm::packed_highp> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0[3]; })a4;
- (void)ensureGLVariables;
- (BOOL)attachOffscreenFramebufferToTargetTexture:(unsigned int)a0;
- (void)drawYTexture:(unsigned int)a0 uvTexture:(unsigned int)a1 viewport:(struct CGSize { double x0; double x1; })a2 displayTransform:(struct mat<3, 3, float, glm::packed_highp> { struct vec<3, float, glm::packed_highp> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0[3]; })a3;
- (void)setCurrentEGLContext:(void *)a0;
- (id)glContext;
- (void)makeArContext;
- (void)restoreContext;
- (void).cxx_destruct;

@end
