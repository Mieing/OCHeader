@class NSString, MagicBrushPerformance;
@protocol MagicBrushCoreResourceDelegate, MagicBrushCoreScreenCanvasDelegate, MagicBrushCoreJSStuffDelegate;

@interface MagicBrushCore : NSObject <MBRuntimeOCWrapper, MagicBrushProfileTrait, MagicBrushCanvasCaptureTrait, MagicBrushRenderTargetTrait, MagicBrushNativeRenderTrait, MagicBrushMemoryTrait, MagicBrushExternalDrawableTrait>

@property (nonatomic) void *runtime;
@property (weak, nonatomic) id<MagicBrushCoreScreenCanvasDelegate> windowDelegate;
@property (weak, nonatomic) id<MagicBrushCoreResourceDelegate> resDelegate;
@property (weak, nonatomic) id<MagicBrushCoreJSStuffDelegate> jsDelegate;
@property (readonly, nonatomic) MagicBrushPerformance *performance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMBJS;
+ (unsigned long long)metalCppDecoderVersion;
+ (BOOL)supportRenderdoc;

- (void)dealloc;
- (void)setup:(id)a0;
- (void)bindTo:(id)a0;
- (void)pause;
- (void)resume;
- (void)destroy;
- (void)run;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)sendTouchEvent:(id)a0 forCanvas:(int)a1;
- (void)runOnJsThread:(id /* block */)a0;
- (void)runOnJsThreadSync:(id /* block */)a0;
- (void)postToJsThread:(id /* block */)a0;
- (id)createRenderTargetWithLayer:(id)a0 forCanvas:(int)a1;
- (id)createRenderTargetWithPixelBufferDelegate:(id)a0 forCanvas:(int)a1;
- (id)createRenderTargetWithMTLLayer:(id)a0 forCanvas:(int)a1;
- (id)fetchCanvasContentImpl:(int)a0;
- (id)fetchCanvasContent:(int)a0;
- (void)fetchCanvasContentAsync:(int)a0 callback:(id /* block */)a1;
- (void)release2DMemory;
- (void)notifyNativeRenderCanvasCreated:(int)a0 width:(int)a1 height:(int)a2 onscreen:(BOOL)a3;
- (void)notifyNativeRenderCanvasResized:(int)a0 width:(int)a1 height:(int)a2;
- (void)notifyNativeRenderCanvasDestroyed:(int)a0;
- (void)notifyNativeRenderCanvasSetStyle:(int)a0 x:(float)a1 y:(float)a2 width:(float)a3 height:(float)a4 zIndex:(int)a5;
- (void)notifyNativeRenderCanvasGotContext:(int)a0 contextId:(int)a1 contextType:(id)a2 options:(id)a3;
- (id)onNativeRenderCanvasToDataURL:(int)a0 type:(id)a1 encoderOptions:(float)a2;
- (id)notifyNativeRenderImageLoaded:(id)a0 withId:(int)a1;
- (void)notifyNativeRenderImageDestroyed:(int)a0;
- (id)notifyNativeRenderFontLoaded:(id)a0;
- (id)onNativeRenderProcessBuffer:(id)a0 extBuffer:(id)a1;
- (void)onNativeRenderSwapWindow;
- (BOOL)registerExternaPlainPixelRGBA:(const char *)a0 withId:(int)a1 width:(int)a2 height:(int)a3;
- (void)unregisterExternalPlainPixel:(int)a0;
- (void)notifyExternalCVPixelBuffer:(id)a0 elementId:(int)a1 buffer:(struct __CVBuffer { } *)a2;
- (void)setupFrameCapture:(unsigned long long)a0;
- (void)startCaptureFrames:(int)a0 count:(int)a1;
- (void)stopCaptureFrames:(int)a0;
- (void)startGLProfile:(id)a0;
- (void)stopGLProfile;
- (void).cxx_destruct;

@end
