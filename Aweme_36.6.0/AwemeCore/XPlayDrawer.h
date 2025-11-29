@class NSObject, NSString, Processor, RenderStats, UIView, MTKView;
@protocol MTLTexture, MTLBuffer, XPlayRenderProcessorType, MTLDevice, OS_dispatch_queue, MTLLibrary, OS_dispatch_semaphore, MTLRenderPipelineState, MTLCommandQueue, XPlayRenderFrameDelegate;

@interface XPlayDrawer : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLLibrary> mtlLibrary;
@property (retain, nonatomic) MTKView *mtkView;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) RenderStats *renderStats;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;
@property (retain, nonatomic) id<MTLRenderPipelineState> nv12PipelineState;
@property (retain, nonatomic) id<MTLRenderPipelineState> i420PipelineState;
@property (retain, nonatomic) id<MTLRenderPipelineState> bgraPipelineState;
@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (retain) id<MTLBuffer> fragmentBuffer;
@property (retain) id<MTLBuffer> enhanceBuffer;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) id<XPlayRenderProcessorType> processorType;
@property (retain) Processor *processor;
@property (retain) id<MTLTexture> offScreenTexture;
@property (retain) id<MTLTexture> offScreenTextureY;
@property (retain) id<MTLTexture> frameTexture;
@property (retain) id<MTLTexture> fakeTexture;
@property (nonatomic) BOOL isEnablePureDetect;
@property (nonatomic) double pureDetectThreshold;
@property (nonatomic) BOOL hasFrame;
@property (weak, nonatomic) id<XPlayRenderFrameDelegate> renderFrameDelegate;
@property struct __CVPixelBufferPool { } *pixelBufferPool;
@property BOOL hasRelease;
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
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *frameCallbackQueue;

+ (long long)offsetForRotation:(long long)a0;

- (void)setVideoFrameCallbackEnabled:(BOOL)a0;
- (void)updateFrameSizeWithWidth:(double)a0 height:(double)a1;
- (struct __CVBuffer { } *)convertToPixelBufferWithTexutre:(id)a0;
- (id)i420RenderEncodeWithFrame:(id)a0 renderPassDescriptor:(id)a1 commandBuffer:(id)a2;
- (id)nv12RenderEncodeWithFrame:(id)a0 renderPassDescriptor:(id)a1 commandBuffer:(id)a2;
- (id)bgraRenderEncodeWithTexture:(id)a0 rotation:(long long)a1 renderPassDescriptor:(id)a2 commandBuffer:(id)a3;
- (id)calculateViewPortWithIsOnScreen:(BOOL)a0 rotation:(long long)a1;
- (id)initWithMTKView:(id)a0 view:(id)a1 processorType:(id)a2 renderConfig:(id)a3 renderStats:(id)a4;
- (void)drawWithFrame:(id)a0 completion:(id /* block */)a1;
- (void)updateViewSizeWithWidth:(double)a0 height:(double)a1;
- (void)drawWithFrame:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;

@end
