@class UIView, NSString, Smooth, RenderConfig, RenderStats, XPlayDrawer, NSMutableArray, MTKView, Jank;
@protocol XPlayExternalRenderResultDelegate;

@interface XPlayRender : NSObject <MTKViewDelegate>

@property (retain) RenderConfig *renderConfig;
@property (retain) NSMutableArray *frameQueue;
@property (nonatomic) long long frameQueueSize;
@property (nonatomic) long long rotation;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) RenderStats *renderStats;
@property (retain, nonatomic) MTKView *mtkView;
@property (retain, nonatomic) XPlayDrawer *xplayDrawer;
@property (nonatomic) long long pixelWidth;
@property (nonatomic) long long pixelHeight;
@property (nonatomic) long long frameWidth;
@property (nonatomic) long long frameHeight;
@property (nonatomic) long long viewWidth;
@property (nonatomic) long long viewHeight;
@property (nonatomic) long long frameRotation;
@property (nonatomic) long long frameType;
@property (nonatomic) long long frameContentType;
@property (nonatomic) long long framePixelFormat;
@property (nonatomic) long long pureColor;
@property (nonatomic) unsigned long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) Smooth *smooth;
@property (retain, nonatomic) Jank *jank;
@property (readonly, nonatomic) long long frameReceiveCount;
@property (readonly, nonatomic) long long frameDropCount;
@property (readonly, nonatomic) long long frameRenderCount;
@property (readonly, nonatomic) long long frameReceiveIntervalMax;
@property (readonly, nonatomic) long long frameReceiveBlockDuration;
@property (readonly, nonatomic) long long frameRenderDelay;
@property (readonly, nonatomic) long long frameRenderIntervalMax;
@property (readonly, nonatomic) long long frameRenderElapse;
@property (readonly, nonatomic) long long frameRenderBlockDuration;
@property (readonly, nonatomic) long long frameRenderJank;
@property (readonly, nonatomic) long long frameRenderStutter;
@property (readonly, nonatomic) double frameRenderSmooth;
@property (readonly, nonatomic) long long frameOutCount;
@property (readonly, nonatomic) long long frameOutDropCount;
@property (readonly, nonatomic) long long frameOutElapse;
@property (weak, nonatomic) id<XPlayExternalRenderResultDelegate> externalRenderResultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProcessorType:(id)a0;
- (void)setRenderFrameDelegate:(id)a0;
- (void)setVideoFrameCallbackEnabled:(BOOL)a0;
- (id)initWithView:(id)a0 processorType:(id)a1 renderConfig:(id)a2;
- (void)drawWithFrame:(id)a0;
- (void)clearFrameCount;
- (void).cxx_destruct;
- (void)invalidate;
- (void)drawInMTKView:(id)a0;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;

@end
