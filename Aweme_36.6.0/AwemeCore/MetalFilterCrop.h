@protocol MTLComputePipelineState;

@interface MetalFilterCrop : MetalFilterDefault {
    id<MTLComputePipelineState> _computePipelineState;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _threadgroupSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _threadgroupCount;
    struct __CVMetalTextureCache { } *videoTextureCache;
}

@property (nonatomic) float mCropx;
@property (nonatomic) float mCropy;
@property (nonatomic) float mCropWidth;
@property (nonatomic) float mCropHeigth;
@property (nonatomic) int oldWidth;
@property (nonatomic) int oldHeight;
@property (nonatomic) BOOL onceHandle;

- (id)getFragmentShader;
- (id)getEffectPatameterStr;
- (long long)render:(id)a0 sourceTexture2:(id)a1 sourceTexture3:(id)a2 fboTexture:(id)a3 fboTexture2:(id)a4 fboTexture3:(id)a5;
- (long long)render:(id)a0 fboTexture:(id)a1;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (void)setEffect:(id)a0;
- (void)dealloc;
- (id)initWithDictionary:(id)a0 index:(int)a1;

@end
