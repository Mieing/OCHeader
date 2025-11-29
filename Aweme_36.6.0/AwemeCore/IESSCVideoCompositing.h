@class NSString, NSDictionary, NSObject, AVVideoCompositionRenderContext;
@protocol OS_dispatch_queue;

@interface IESSCVideoCompositing : NSObject <AVVideoCompositing>

@property (class, retain, nonatomic) NSDictionary *globalSourcePixelBufferAttributes;
@property (class, retain, nonatomic) NSDictionary *globalRequiredPixelBufferAttributesForRenderContext;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderContextQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic) BOOL renderContextDidChange;
@property (nonatomic) BOOL shouldCancelAllRequests;
@property (retain, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (nonatomic) double renderTime;
@property (nonatomic) long long renderCount;
@property (retain, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (retain, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL supportsSourceTaggedBuffers;
@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (struct __CVBuffer { } *)RBGBuffereCopyWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)newRenderdPixelBufferForRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)renderContextChanged:(id)a0;
- (void)startVideoCompositionRequest:(id)a0;
- (void)cancelAllPendingVideoCompositionRequests;

@end
