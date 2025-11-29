@class XPlayRender, RenderConfig, NSTimer;
@protocol XPlayRenderFrameDelegate, XPlayRenderProcessorType, XPlayItemProtocol;

@interface XPlaySink : NSObject <XPlaySink>

@property (retain, nonatomic) XPlayRender *xplayRender;
@property (retain, nonatomic) id<XPlayRenderProcessorType> processorType;
@property (retain, nonatomic) RenderConfig *renderConfig;
@property (retain, nonatomic) NSTimer *reportTimer;
@property (retain, nonatomic) NSTimer *pureDetectTimer;
@property (nonatomic) long long status;
@property (nonatomic) long long renderElapse;
@property (nonatomic) long long frameContentType;
@property (nonatomic) long long pureColor;
@property (copy, nonatomic) id /* block */ pureDetectCallback;
@property (weak, nonatomic) id<XPlayItemProtocol> item;
@property (weak, nonatomic) id<XPlayRenderFrameDelegate> renderFrameDelegate;
@property long long renderStatsReportId;

- (void)updateView:(id)a0;
- (void)applicationEnterBackground:(id)a0;
- (id)initWithItem:(id)a0 view:(id)a1 processorType:(id)a2 renderConfig:(id)a3;
- (void)setExternalRenderResultDelegate:(id)a0;
- (void)setVideoFrameCallbackEnabled:(BOOL)a0;
- (void)pureDetectReport;
- (void)applicationBecomeActive:(id)a0;
- (void)monitorRenderLifecycle:(id)a0;
- (void)teaReportRenderPureDetectWithFrameContentType:(long long)a0 pureColor:(long long)a1 pureDetectElapse:(long long)a2 renderProcessor:(id)a3 reportInterval:(long long)a4;
- (void)monitorRenderPureDetectWithFrameContentType:(long long)a0 pureColor:(long long)a1 pureDetectElapse:(long long)a2 renderProcessor:(id)a3 reportInterval:(long long)a4;
- (void)teaReportRenderStatsWithFrameWidth:(long long)a0 frameHeight:(long long)a1 viewWidth:(long long)a2 viewHeight:(long long)a3 frameRotation:(long long)a4 renderElapse:(long long)a5 frameDropCount:(long long)a6 frameReceiveCount:(long long)a7 receiveIntervalMax:(long long)a8 receiveBlockDuration:(long long)a9 frameRenderCount:(long long)a10 renderIntervalMax:(long long)a11 renderBlockDuration:(long long)a12 renderDelay:(long long)a13 renderInterval:(long long)a14 renderSmooth:(double)a15 renderJank:(long long)a16 renderStutter:(long long)a17 outerFrameElapse:(long long)a18 outerFrameCount:(long long)a19 outerFrameDropCount:(long long)a20 renderProcessor:(id)a21 reportInterval:(long long)a22;
- (void)monitorRenderElapseWithElapse:(long long)a0 frameDropCount:(long long)a1 frameReceiveCount:(long long)a2 frameRenderCount:(long long)a3 renderDelay:(long long)a4 renderInterval:(long long)a5 renderSmooth:(double)a6 renderJank:(long long)a7 renderStutter:(long long)a8 outerFrameElapse:(long long)a9 outerFrameCount:(long long)a10 outerFrameDropCount:(long long)a11 frameWidth:(long long)a12 frameHeight:(long long)a13 frameRotation:(long long)a14 frameType:(long long)a15 framePixelFormat:(long long)a16 reportInterval:(long long)a17 renderProcessor:(id)a18;
- (void)teaReportRenderErrorWithRenderCode:(long long)a0 renderMessage:(id)a1 renderProcessor:(id)a2 reportInterval:(long long)a3;
- (void)monitorRenderErrorWithCode:(long long)a0 message:(id)a1 frameWidth:(long long)a2 frameHeight:(long long)a3 frameRotation:(long long)a4 frameType:(long long)a5 framePixelFormat:(long long)a6 renderProcessor:(id)a7;
- (void)onRTCFrame:(id)a0;
- (void)onLMFrame:(id)a0;
- (float)welfordStandardDeviation:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (void)invalidate;
- (void)dealloc;

@end
