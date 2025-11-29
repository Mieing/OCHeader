@class VideoColorLUTMetal, NSString, VideoLucidMetal, VideoClarityMetal, TPMetalColorHelper, VideoSharpenMetal;
@protocol MTLBuffer, MTLDevice, MTLLibrary, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface TPMetalRenderBase : NSObject <TPMetalRender> {
    id<MTLDevice> _metalDevice;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _defaultLibrary;
    id<MTLRenderPipelineState> _pipelineState;
    id<MTLBuffer> _vertexBuffer;
    id<MTLBuffer> _parametersBuffer;
    int _offset;
    VideoSharpenMetal *_MetalSharpenFilter;
    id<MTLTexture> _sTexture;
    int _yWidth;
    int _yHeight;
    VideoLucidMetal *_metalLucidFilter;
    VideoClarityMetal *_metalClarityFilter;
    VideoColorLUTMetal *_metalColorLUTFilter;
}

@property BOOL colorManagementFlag;
@property int rendererSharpenFlag;
@property int rendererLucidFlag;
@property BOOL renderOptYuv420;
@property int rendererColorLUTFlag;
@property (copy) NSString *rendererColorLUTFilePath;
@property int rendererClarityFlag;
@property (retain, nonatomic) TPMetalColorHelper *colorHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMetalDevice:(id)a0 withColorManagement:(BOOL)a1;
- (void)setSharpenFlag:(int)a0;
- (void)setLucidFlag:(int)a0;
- (void)setClarityFlag:(int)a0;
- (void)setColorLUT:(int)a0 filePath:(id)a1;
- (BOOL)setupMetal;
- (BOOL)loadAssets;
- (BOOL)onMetalContextReady;
- (id)currentMetalDevice;
- (BOOL)prepareRender;
- (void)setRenderInfo:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (void)render:(id)a0;
- (void)setupMetalFilters:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (BOOL)drawFrame:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0 withDestination:(id)a1;
- (id)shaderSource;
- (id)vertexFunctionSourceName;
- (id)fragmentFunctionSourceName;
- (BOOL)setupTexturesForFrame:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (void)uploadTexturesToCommandEncoder:(id)a0;
- (id)getYTexture;
- (void).cxx_destruct;

@end
