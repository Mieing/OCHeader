@class NSLock, NSMutableArray;
@protocol MTLTexture, MTLBuffer, MTLRenderPipelineState;

@interface MetalFilterDynamicGaussianBlurOpt : MetalFilterDefault {
    id<MTLBuffer> uniformBuffer;
    id<MTLBuffer> vertexBufferFirst;
    id<MTLBuffer> vertexBufferSecond;
    id<MTLBuffer> vertexBufferMerge;
    id<MTLBuffer> indexBufferFirst;
    id<MTLBuffer> indexBufferSecond;
    id<MTLBuffer> indexBufferMerge;
    id<MTLRenderPipelineState> renderToTextureRenderGaussBlurPipeline;
    id<MTLRenderPipelineState> renderToTextureRenderMergePipeline;
}

@property (nonatomic) float mSigma;
@property (nonatomic) int mBlurRadius;
@property (retain, nonatomic) NSMutableArray *mGaussiansWeights;
@property (nonatomic) BOOL mIsGaussianParameterSet;
@property (nonatomic) float mTexelWidthOffset;
@property (nonatomic) float mTexelHeightOffset;
@property (nonatomic) float mGaussianAlpha;
@property (retain, nonatomic) NSLock *mEffectParamsSetLock;
@property (nonatomic) float mBaseResolution;
@property (nonatomic) float mScaleRatio;
@property (nonatomic) float mTextureWidth;
@property (nonatomic) float mTextureHeight;
@property (nonatomic) int mViewWidht;
@property (nonatomic) int mViewHeight;
@property (nonatomic) unsigned int mViewSize;
@property (nonatomic) float mVideoRatio;
@property (nonatomic) float mViewRatio;
@property (nonatomic) float mBottom;
@property (nonatomic) float mTop;
@property (nonatomic) float mLeft;
@property (nonatomic) float mRight;
@property (nonatomic) float mVertexFirstMiddle;
@property (nonatomic) int mVertexCountFirst;
@property (nonatomic) int mVertexCountSecond;
@property (nonatomic) int mVertexCountMerge;
@property (nonatomic) BOOL mViewParamterSizeChange;
@property (nonatomic) float offsetx;
@property (nonatomic) float offsety;
@property (nonatomic) int gradientLength;
@property (nonatomic) int gaussianBlurTexWidth;
@property (nonatomic) int gaussianBlurTexHeight;
@property (retain, nonatomic) id<MTLTexture> mOutputTextureFirst;
@property (retain, nonatomic) id<MTLTexture> mOutputTextureSecond;
@property (nonatomic) BOOL widthFit;
@property (nonatomic) int gauBlurTexLength;
@property (nonatomic) unsigned int mGauBlurControlNum;
@property (nonatomic) unsigned long long mCount;
@property (nonatomic) BOOL mGauBlurHaveSucessful;
@property (nonatomic) BOOL mEnableOptVersion2;
@property (nonatomic) BOOL mEnableFixBlackLine;

- (void)updateGaussianWights:(float)a0;
- (void)setUpRenderPipeline;
- (id)createPiplineDescriptior:(id)a0 fragmetPro:(id)a1 label:(id)a2;
- (void)generateVertex;
- (void)generateUniformBuffer;
- (id)processGaussBlur:(id)a0 index:(long long)a1;
- (void)processMerge:(id)a0 frame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a1;
- (BOOL)checkIsRenderToMetalView;
- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0 format:(id)a1;
- (double)getGaussiansWeight:(float)a0 pos:(int)a1;
- (BOOL)supportRenderToMetalView;
- (id)getEffectPatameterStr;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (void)setEffect:(id)a0;
- (void)dealloc;
- (id)initWithDictionary:(id)a0 index:(int)a1;

@end
