@class IESLiveAssetReaderOutput, IESLiveVideoGiftResourceInfo, NSString, MTKView;
@protocol MTLBuffer, IESLiveVideoSRHandlerAction, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface IESLiveMultiVideoMetalRenderer : NSObject <MTKViewDelegate>

@property (nonatomic) double framePlayDuration;
@property (nonatomic) int currentFrame;
@property (nonatomic) unsigned long long numVertices;
@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;
@property (nonatomic) void /* unknown type, empty encoding */ viewportSize;
@property (nonatomic) BOOL hasRegenerate;
@property (weak, nonatomic) MTKView *mtkView;
@property (copy, nonatomic) id /* block */ process;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) IESLiveAssetReaderOutput *output;
@property (retain, nonatomic) IESLiveVideoGiftResourceInfo *resourceModel;
@property (retain, nonatomic) id<MTLRenderPipelineState> videoPipelineState;
@property (retain, nonatomic) id<MTLRenderPipelineState> maskPipelineState;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (retain, nonatomic) id<MTLBuffer> vertices;
@property (retain, nonatomic) id<MTLBuffer> convertMatrix;
@property (retain, nonatomic) id<IESLiveVideoSRHandlerAction> srHandler;
@property (nonatomic) void /* unknown type, empty encoding */ renderPositionMultiFactor;
@property (nonatomic) unsigned long long nonFatalErrorReportLimitCount;
@property (nonatomic) BOOL fixColorOffset;
@property (copy, nonatomic) id /* block */ framePlayDurationCallBack;
@property (copy, nonatomic) id /* block */ frameCallBackBeforePlaying;
@property (copy, nonatomic) id /* block */ frameCallBackAfterPlaying;
@property (copy, nonatomic) id /* block */ frameCallBackAfterCmdBufCommit;
@property (nonatomic, getter=isUsingDrawTimer) BOOL useDrawTimer;
@property (nonatomic) BOOL enableVideoSR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupSR;
- (void)addNotification;
- (void)setupMatrix;
- (void)setupVertex;
- (void)setupMaskResources;
- (void)drainSampleBufferQueue;
- (void)setupVideoPipelineWithLibrary:(id)a0;
- (void)setupMaskPipelineWithLibrary:(id)a0;
- (id)videoVertexBuffer;
- (id)vertexBufferWithMask:(id)a0 resource:(id)a1;
- (void)_safeCheckRenderPositionMultiFactor;
- (void)didApplicationDidBecomeActive:(id)a0;
- (void)drawMasks:(id)a0 yTexture:(id)a1 uvTexture:(id)a2 encoder:(id)a3;
- (id)initWithMetalKitView:(id)a0 configuration:(id)a1;
- (void)renderOutput:(id)a0 resourceModel:(id)a1 process:(id /* block */)a2 completion:(id /* block */)a3;
- (void)renderMTKView;
- (void).cxx_destruct;
- (double)currentTime;
- (void)drawInMTKView:(id)a0;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)seekToTime:(double)a0;
- (void)dealloc;
- (void)setup;
- (void)setupPipeline;

@end
