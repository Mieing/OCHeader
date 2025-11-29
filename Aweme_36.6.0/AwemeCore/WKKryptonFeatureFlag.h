@interface WKKryptonFeatureFlag : NSObject

@property (nonatomic) int gpuThreadGroup;
@property (nonatomic) BOOL needBindingRaf;
@property (nonatomic) BOOL firstOnScreenCanvasIsTheOnlyOnScreen;
@property (nonatomic) BOOL enablePerformanceStatisticsRelatedInterface;
@property (nonatomic) BOOL enableSar;
@property (nonatomic) BOOL enableDrawImageReuse;
@property (nonatomic) BOOL needProcessGesture;
@property (nonatomic) BOOL enableAfterFrameCallback;
@property (nonatomic) BOOL enableWebGLLowMemoryMode;
@property (nonatomic) BOOL disableOffscreenCanvasBlitToScreen;
@property (nonatomic) int canvas2DCommandBufferSize;
@property (nonatomic) BOOL useVsyncMonitorFromService;
@property (nonatomic) BOOL enableWebGL2;
@property (nonatomic) BOOL forceTextureBackend;

- (id)init;

@end
