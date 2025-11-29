@class NSMutableData, EAGLContext;

@interface EJTextureHolder : NSObject {
    BOOL _create;
    BOOL _boud;
    int _viewWidth;
    int _viewHeight;
    unsigned int _glTexture;
    EAGLContext *_glTextureContext;
    struct __CVBuffer { } *_pixeTexture;
}

@property (readonly, nonatomic) BOOL ready;
@property (readonly, nonatomic) int frameBuffer;
@property (readonly, nonatomic) int renderBuffer;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) unsigned int textureId;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) NSMutableData *nsData;

- (void)dealloc;
- (void)resize:(int)a0 height:(int)a1;
- (BOOL)create:(struct __CVOpenGLESTextureCache { } *)a0 withPixelBuffer:(BOOL)a1;
- (void)bind;
- (void)active;
- (void)removeOldCaptureTexture;

@end
