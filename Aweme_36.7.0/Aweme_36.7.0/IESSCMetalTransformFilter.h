@class MTLRenderPipelineReflection, IESSCMetalRenderBuffer, IESSCMetalImage, IESSCMetalShaderUniformSettings;
@protocol MTLRenderPipelineState;

@interface IESSCMetalTransformFilter : IESSCMetalFilter

@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) MTLRenderPipelineReflection *reflection;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettings;
@property (retain, nonatomic) IESSCMetalRenderBuffer *textureCoordinateBuffer;
@property (retain, nonatomic) IESSCMetalImage *inputImage;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (void)renderWithParams:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })simdMatrixWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
