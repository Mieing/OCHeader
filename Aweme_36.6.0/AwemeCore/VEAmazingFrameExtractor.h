@class HTSGLFramebuffer;
@protocol IVEAmazingEffectProtocol;

@interface VEAmazingFrameExtractor : VEFilterFrameExtractor

@property (retain, nonatomic) id<IVEAmazingEffectProtocol> renderer;
@property (retain, nonatomic) HTSGLFramebuffer *inputFramebuffer;

- (id)init:(id)a0 context:(id)a1;
- (void)extractTexture:(id)a0 outputSize:(struct CGSize { double x0; double x1; })a1 time:(double)a2;
- (void)disableFeatures:(id)a0;
- (void)enableFeatures:(id)a0;
- (void)processWithDriver:(id)a0 frameBuffer:(id)a1 atTime:(double)a2;
- (void).cxx_destruct;

@end
