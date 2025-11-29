@protocol MTLComputePipelineState, MTLFunction;

@interface BuiltinPipeline : NSObject

@property (retain, nonatomic) id<MTLComputePipelineState> bitonicSortSharedF32;
@property (retain, nonatomic) id<MTLComputePipelineState> bitonicMergeGlobalF32;
@property (retain, nonatomic) id<MTLComputePipelineState> bitonicMergeSharedF32;
@property (retain, nonatomic) id<MTLComputePipelineState> bitonicSortSharedU32;
@property (retain, nonatomic) id<MTLComputePipelineState> bitonicMergeGlobalU32;
@property (retain, nonatomic) id<MTLComputePipelineState> bitonicMergeSharedU32;
@property (retain, nonatomic) id<MTLComputePipelineState> reverse32;
@property (retain, nonatomic) id<MTLComputePipelineState> convertYuvToRgb;
@property (retain, nonatomic) id<MTLFunction> emptyVertex;
@property (retain, nonatomic) id<MTLFunction> fullVertex;
@property (retain, nonatomic) id<MTLFunction> fullDepthVertex;
@property (retain, nonatomic) id<MTLFunction> clearColorsFragment;
@property (retain, nonatomic) id<MTLFunction> clearDepthFragment;
@property (retain, nonatomic) id<MTLFunction> blitNearestFragment;
@property (retain, nonatomic) id<MTLFunction> blitLinearFragment;
@property (retain, nonatomic) id<MTLComputePipelineState> blitNearestCompute;
@property (retain, nonatomic) id<MTLComputePipelineState> blitLinearCompute;
@property (retain, nonatomic) id<MTLComputePipelineState> addAlphaCompute;
@property (retain, nonatomic) id<MTLFunction> synchronizeFragmentColor;
@property (retain, nonatomic) id<MTLFunction> synchronizeFragmentColor2;
@property (retain, nonatomic) id<MTLFunction> synchronizeFragmentColor3;
@property (retain, nonatomic) id<MTLFunction> synchronizeFragmentColor4;
@property (retain, nonatomic) id<MTLFunction> synchronizeFragmentDepth;
@property (retain, nonatomic) id<MTLFunction> synchronizeFragmentResolveDepth;
@property (retain, nonatomic) id<MTLFunction> convertTriangleFanU16IndexVertex;
@property (retain, nonatomic) id<MTLFunction> convertTriangleFanU32IndexVertex;

- (id)initWithDevice:(id)a0;
- (id)device;
- (void)dealloc;

@end
