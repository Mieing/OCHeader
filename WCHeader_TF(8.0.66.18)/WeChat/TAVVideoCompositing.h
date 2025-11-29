@class NSString, NSDictionary, TAVRenderReportData, NSObject, AVVideoCompositionRenderContext;
@protocol OS_dispatch_queue;

@interface TAVVideoCompositing : NSObject <AVVideoCompositing>

@property (class, retain, nonatomic) NSDictionary *globalSourcePixelBufferAttributes;
@property (class, retain, nonatomic) NSDictionary *globalRequiredPixelBufferAttributesForRenderContext;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderContextQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic) BOOL renderContextDidChange;
@property (nonatomic) BOOL shouldCancelAllRequests;
@property (retain, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (retain, nonatomic) TAVRenderReportData *renderReportData;
@property (retain, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (retain, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)renderContextChanged:(id)a0;
- (void)startVideoCompositionRequest:(id)a0;
- (void)cancelAllPendingVideoCompositionRequests;
- (struct __CVBuffer { } *)newRenderdPixelBufferForRequest:(id)a0;
- (struct __CVBuffer { } *)RBGBuffereCopyWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;

@end
