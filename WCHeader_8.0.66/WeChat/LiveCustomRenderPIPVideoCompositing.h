@class CIContext, NSString, MMContext, WCPIPVideoFrame, NSDictionary, NSObject, AVVideoCompositionRenderContext;
@protocol OS_dispatch_queue;

@interface LiveCustomRenderPIPVideoCompositing : NSObject <AVVideoCompositing>

@property (retain, nonatomic) MMContext *context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic) BOOL shouldCancelAllRequests;
@property (retain, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (retain, nonatomic) CIContext *ciContext;
@property (retain, nonatomic) WCPIPVideoFrame *emptyVideoFrame;
@property (retain, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (retain, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)renderContextChanged:(id)a0;
- (void)startVideoCompositionRequest:(id)a0;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)defaultHandleVideoCompositionRequest:(id)a0;
- (void)finishVideoCompositionRequest:(id)a0 withPixelBuffer:(struct __CVBuffer { } *)a1;
- (struct __CVBuffer { } *)createEmptyPixelBuffer;
- (void)clearEmptyVideoFrame;
- (id)createCIContext;
- (void).cxx_destruct;

@end
