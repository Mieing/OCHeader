@class MTLTextureDescriptor, NSArray, VFMetalContext;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface FeatureGLCMGPU : NSObject {
    int step_x[1];
    int step_y[1];
    NSArray *feature;
}

@property (retain, nonatomic) id<MTLComputePipelineState> pipeline_matrix;
@property (retain, nonatomic) id<MTLComputePipelineState> pipeline_feature;
@property (retain, nonatomic) VFMetalContext *context;
@property (retain, nonatomic) id<MTLBuffer> tonematrix;
@property (retain, nonatomic) id<MTLBuffer> feat_group;
@property (retain, nonatomic) MTLTextureDescriptor *descriptor;
@property (retain, nonatomic) id<MTLTexture> texture;

- (void)processtexture:(id)a0;
- (void)processmatrix:(id)a0;
- (void)GLCM:(id)a0;
- (void)Release;
- (void)processfeature:(id)a0;
- (id)GetFeature:(void *)a0 intype:(int)a1;
- (void).cxx_destruct;
- (void)processPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithContext:(id)a0;

@end
