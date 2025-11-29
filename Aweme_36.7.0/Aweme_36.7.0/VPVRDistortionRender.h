@interface VPVRDistortionRender : NSObject {
    struct CardboardDistortionRenderer { } *_distortionRender;
}

+ (id)distortionRenderWithEyes:(id)a0;

- (void)renderToTexture:(id)a0 withCommandEncoder:(id)a1 leftEye:(id)a2 rightEye:(id)a3;
- (void)updateDistortionMeshWithEyes:(id)a0;
- (void)setupDistortionRenderer;
- (id)init;
- (void)dealloc;

@end
