@class VFMetalContext;
@protocol MTLComputePipelineState;

@interface SceneCut : NSObject {
    BOOL isscenecut;
}

@property (retain, nonatomic) VFMetalContext *context;
@property (retain, nonatomic) id<MTLComputePipelineState> pipeline;

- (void)Release;
- (void)GetSceneCutfromTexture:(id)a0 img_ref:(id)a1;
- (void)GetSceneCutfromBuffer:(struct __CVBuffer { } *)a0 img_ref:(struct __CVBuffer { } *)a1;
- (id)Buffer2Texture:(struct __CVBuffer { } *)a0;
- (BOOL)IsSceneCut:(void *)a0 img_ref:(void *)a1 intype:(int)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
