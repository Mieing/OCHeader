@class AVVideoCompositionRenderContext, WCLoopMetricsCollector, NSDictionary, NSString, NSObject, CIContext;
@protocol OS_dispatch_queue;

@interface WCAdAlphaVideoCompositing : NSObject <WCLoopMetricsCollectorDelegate, AVVideoCompositing>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderContextQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic) BOOL shouldCancelAllRequests;
@property (retain, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (retain, nonatomic) CIContext *ciContext;
@property (retain, nonatomic) WCLoopMetricsCollector *metricsCollector;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;

@end
