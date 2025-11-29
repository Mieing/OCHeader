@class NSString, MTLRenderPassDescriptor, TPMTLDisplayConfig;
@protocol MTLRenderPipelineState, MTLDevice, MTLLibrary, MTLCommandQueue, MTLBuffer;

@interface TPMTLFrameRendererBase : NSObject <TPMTLFrameRenderer>

@property (retain) id<MTLDevice> mtlDevice;
@property (retain) id<MTLCommandQueue> cmdQueue;
@property (retain) id<MTLLibrary> library;
@property (retain) id<MTLBuffer> vertexTexBuffer;
@property (retain) id<MTLRenderPipelineState> pipelineState;
@property (retain) MTLRenderPassDescriptor *renderpassDescriptor;
@property (retain) TPMTLDisplayConfig *displayCfg;
@property (readonly) unsigned long long rendererType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMetalDevice:(id)a0;
- (void)prepareMTLContext;
- (BOOL)prepareRenderer:(id)a0;
- (id)currentRenderPassDescriptor:(id)a0;
- (BOOL)render:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0 destination:(id)a1;
- (void)renderImpl:(id)a0 withRenderPass:(id)a1 withCmdBuffer:(id)a2;
- (id)shaderSource;
- (id)vertexFunctionName;
- (id)fragmentFunctionName;
- (void)uploadResourcesToCommandEncoder:(id)a0;
- (void)setFrame:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (void).cxx_destruct;

@end
