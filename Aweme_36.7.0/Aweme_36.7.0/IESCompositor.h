@class NSString, NSDictionary, NSObject, AVVideoCompositionRenderContext;
@protocol OS_dispatch_queue;

@interface IESCompositor : NSObject <AVVideoCompositing>

@property (nonatomic) BOOL shouldCancelAllRequests;
@property (nonatomic) BOOL renderContextDidChange;
@property (retain, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic) struct __CVBuffer { } *previousPixelBuffer;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)renderContextChanged:(id)a0;
- (void)startVideoCompositionRequest:(id)a0;
- (void)cancelAllPendingVideoCompositionRequests;

@end
