@class VFMetalContext;
@protocol MTLComputePipelineState, MTLBuffer;

@interface GroupFeature : NSObject {
    double std_ti;
    double std_si;
    double std_blur;
}

@property (retain, nonatomic) VFMetalContext *context;
@property (retain, nonatomic) id<MTLComputePipelineState> pipeline;
@property (retain, nonatomic) id<MTLBuffer> resdata_ti;
@property (retain, nonatomic) id<MTLBuffer> resdata_si;
@property (retain, nonatomic) id<MTLBuffer> resdata_blur;

- (void)Release;
- (void)GetFeaturefromTexture:(id)a0 img_ref:(id)a1;
- (void)GetFeaturefromBuffer:(struct __CVBuffer { } *)a0 img_ref:(struct __CVBuffer { } *)a1;
- (id)Buffer2Texture:(struct __CVBuffer { } *)a0;
- (id)GetFeature:(void *)a0 img_ref:(void *)a1 intype:(int)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
