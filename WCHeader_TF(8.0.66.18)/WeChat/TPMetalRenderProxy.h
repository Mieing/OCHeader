@class TPMetalColorHelper, NSString;
@protocol MTLDevice, TPMetalRender;

@interface TPMetalRenderProxy : NSObject <TPMetalRender>

@property (retain, nonatomic) id<MTLDevice> metalDevice;
@property (retain, nonatomic) id<TPMetalRender> nv12Render;
@property (retain, nonatomic) id<TPMetalRender> i420Render;
@property (retain, nonatomic) id<TPMetalRender> rgbaRender;
@property (nonatomic) BOOL colorMangementFlag;
@property (retain, nonatomic) TPMetalColorHelper *colorHelper;
@property (nonatomic) BOOL waitingForMainThread;
@property (nonatomic) int rendererSharpenFlag;
@property (nonatomic) int rendererLucidFlag;
@property (nonatomic) int rendererClarityFlag;
@property (nonatomic) BOOL renderOptYuv420;
@property (nonatomic) int rendererColorLUTFlag;
@property (copy, nonatomic) NSString *rendererColorLUTFilePath;
@property (nonatomic) struct ITPRendererInterruptCallback { void /* function */ **x0; } *interruptCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMetalDevice:(id)a0 withColorManagement:(BOOL)a1;
- (void)setSharpenFlag:(int)a0;
- (void)setLucidFlag:(int)a0;
- (void)setClarityFlag:(int)a0;
- (void)setColorLUT:(int)a0 filePath:(id)a1;
- (BOOL)drawFrame:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0 withDestination:(id)a1;
- (id)chooseRender:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (void)createNV12Render;
- (void)createI420Render;
- (void)createRGBARender;
- (BOOL)prepareRender;
- (void)waitForMainThread;
- (void).cxx_destruct;

@end
