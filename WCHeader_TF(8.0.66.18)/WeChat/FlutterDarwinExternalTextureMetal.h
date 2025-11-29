@class NSObject;
@protocol FlutterTexture;

@interface FlutterDarwinExternalTextureMetal : NSObject {
    struct CFRef<__CVMetalTextureCache *> { struct __CVMetalTextureCache *instance_; } _textureCache;
    NSObject<FlutterTexture> *_externalTexture;
    BOOL _textureFrameAvailable;
    struct sk_sp<flutter::DlImage> { struct DlImage *fPtr; } _externalImage;
    struct __CVBuffer { } *_lastPixelBuffer;
    unsigned int _pixelFormat;
    BOOL _enableImpeller;
}

@property (readonly, nonatomic) long long textureID;

- (id)initWithTextureCache:(struct __CVMetalTextureCache { } *)a0 textureID:(long long)a1 texture:(id)a2 enableImpeller:(BOOL)a3;
- (void)dealloc;
- (void)paintContext:(struct PaintContext { struct DlCanvas *x0; struct GrDirectContext *x1; struct AiksContext *x2; struct DlPaint *x3; } *)a0 bounds:(const struct SkRect { float x0; float x1; float x2; float x3; } *)a1 freeze:(BOOL)a2 sampling:(int)a3;
- (void)onNeedsUpdatedTexture:(struct PaintContext { struct DlCanvas *x0; struct GrDirectContext *x1; struct AiksContext *x2; struct DlPaint *x3; } *)a0;
- (void)onGrContextCreated;
- (void)onGrContextDestroyed;
- (void)markNewFrameAvailable;
- (void)onTextureUnregistered;
- (struct sk_sp<flutter::DlImage> { struct DlImage *x0; })wrapExternalPixelBuffer:(struct __CVBuffer { } *)a0 context:(struct PaintContext { struct DlCanvas *x0; struct GrDirectContext *x1; struct AiksContext *x2; struct DlPaint *x3; } *)a1;
- (struct sk_sp<flutter::DlImage> { struct DlImage *x0; })wrapNV12ExternalPixelBuffer:(struct __CVBuffer { } *)a0 context:(struct PaintContext { struct DlCanvas *x0; struct GrDirectContext *x1; struct AiksContext *x2; struct DlPaint *x3; } *)a1;
- (struct sk_sp<flutter::DlImage> { struct DlImage *x0; })wrapBGRAExternalPixelBuffer:(struct __CVBuffer { } *)a0 context:(struct PaintContext { struct DlCanvas *x0; struct GrDirectContext *x1; struct AiksContext *x2; struct DlPaint *x3; } *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
