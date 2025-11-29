@class EAGLContext, WAEJJavaScriptView;

@interface ExternalTextureHandler : NSObject {
    struct CFRef<__CVOpenGLESTextureCache *> { struct __CVOpenGLESTextureCache *instance_; } cacheRef;
    struct CFRef<__CVBuffer *> { struct __CVBuffer *instance_; } bufferRef;
    struct CFRef<__CVBuffer *> { struct __CVBuffer *instance_; } textureRef;
    struct CFRef<__CVBuffer *> { struct __CVBuffer *instance_; } textureRefY;
    struct CFRef<__CVBuffer *> { struct __CVBuffer *instance_; } textureRefUV;
    EAGLContext *ctx;
}

@property (weak, nonatomic) WAEJJavaScriptView *scriptView;

- (id)initWithScriptView:(id)a0;
- (void)ensureTextureCacheExists;
- (void)createTextureFromPixelBuffer:(void *)a0 textureFormat:(int)a1 sourceFormat:(int)a2 width:(int)a3 height:(int)a4 plane:(int)a5;
- (BOOL)createYuvTexture:(int)a0 height:(int)a1;
- (struct sk_sp<SkImage> { struct SkImage *x0; })makeTextureImage:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
