@class EAGLContext, CAEAGLLayer, NSObject;
@protocol OS_dispatch_queue;

@interface BDPGLResizeView : UIView {
    unsigned int _renderBuffer;
    unsigned int _frameBuffer;
    unsigned int _coordBuffer;
    int _renderBufferWidth;
    int _renderBufferHeight;
    unsigned int _program;
    unsigned int _vertexLocation;
    unsigned int _textureLocation;
    unsigned int _textureUnitLocation;
    struct __CVBuffer { } *_pixelReadBufferRef;
    struct __CVOpenGLESTextureCache { } *_pixelReadTextureCache;
    struct __CVBuffer { } *_pixelReadTexture;
    BOOL _enableRender;
    BOOL _envReady;
    NSObject<OS_dispatch_queue> *_renderQueue;
    CAEAGLLayer *_eaglLayer;
}

@property (retain, nonatomic) EAGLContext *context;

+ (Class)layerClass;

- (void)buildCameraView;
- (id)convertCameraPixelsBufferToData:(struct __CVBuffer { } *)a0;
- (void)updateBufferSize:(struct CGSize { double x0; double x1; })a0;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end
