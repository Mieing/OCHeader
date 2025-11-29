@interface KryptonFeatureFlag : NSObject

@property (nonatomic) int gpuThreadGroup;
@property (nonatomic) BOOL needBindingRaf;
@property (nonatomic) BOOL firstOnScreenCanvasIsTheOnlyOnScreen;
@property (nonatomic) BOOL enablePerformanceStatisticsRelatedInterface;
@property (nonatomic) BOOL enableFirstFrameCallback;
@property (nonatomic) BOOL enableSar;
@property (nonatomic) BOOL enableDrawImageReuse;
@property (nonatomic) BOOL needProcessGesture;
@property (nonatomic) BOOL enableAfterFrameCallback;
@property (nonatomic) BOOL enableWebGLLowMemoryMode;
@property (nonatomic) BOOL disableOffscreenCanvasBlitToScreen;
@property (nonatomic) int canvas2DCommandBufferSize;
@property (nonatomic) BOOL useVsyncMonitorFromService;
@property (nonatomic) BOOL enablePath2dRelatedApiSkity;
@property (nonatomic) BOOL forceTextureBackend;
@property (nonatomic) BOOL enableDoFrameRefactor;
@property (nonatomic) BOOL exportExtraInfoInCanvasTouchEvent;
@property (nonatomic) BOOL useAurumAudioEngine;
@property (nonatomic) BOOL audioForceUseAdaptiveSampler;
@property (nonatomic) BOOL enableStbDecode;
@property (nonatomic) BOOL tryDrawToOnScreenDirectly;
@property (nonatomic) BOOL enableContextAttribute;
@property (nonatomic) BOOL useSkityAs2DBackend;
@property (nonatomic) BOOL enableEventReport;

- (id)init;

@end
