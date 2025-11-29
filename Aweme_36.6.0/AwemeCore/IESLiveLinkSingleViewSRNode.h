@class MTKView, NSString, IESLiveLinkVideoFrame;
@protocol IESLiveLinkLiveCore, MTLDevice, MTLFXSpatialScaler, MTLRenderPipelineState, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface IESLiveLinkSingleViewSRNode : IESLiveLinkBaseNode <IESLiveLinkInputNode> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) id<IESLiveLinkLiveCore> liveCoreClient;
@property (retain, nonatomic) IESLiveLinkVideoFrame *videoFrame;
@property (retain, nonatomic) id<MTLDevice> mtDevice;
@property (retain, nonatomic) id<MTLCommandQueue> mtCommandQueue;
@property (nonatomic) struct __CVMetalTextureCache { } *mtTextureCache;
@property (retain, nonatomic) id<MTLFXSpatialScaler> mtfxScaler;
@property (nonatomic) int mixInputWidth;
@property (nonatomic) int mixInputHeight;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (retain, nonatomic) MTKView *mtkView;
@property (retain, nonatomic) id<MTLBuffer> mixRenderVertices;
@property (nonatomic) unsigned long long mixRenderNumVertices;
@property (retain, nonatomic) id<MTLRenderPipelineState> mixRenderPipelineState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } curSingleViewCropRegion;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mixCropRegion;
@property (nonatomic) BOOL isSingleSRViewAdded;
@property (nonatomic) BOOL isInSrProcessing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)setSingleViewCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1 extra:(id)a2;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1 extra:(id)a2;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 extra:(id)a2;
- (long long)nextAvailableFrameIndex;
- (BOOL)ignoreRemoveAllTargets;
- (id)initWithLiveCore:(id)a0 singleViewCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 identifier:(id)a2;
- (void)disableMetalFXSingleViewSR;
- (void)doMetalFXSRRender:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)intMetalFXSingleViewSR;
- (void)realDoMetalFXSRRender:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
