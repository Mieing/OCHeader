@class MTLRenderPipelineReflection, IESSCMetalRenderBuffer, IESSCMetalImage, IESSCMetalShaderUniformSettings;
@protocol MTLRenderPipelineState;

@interface IESSCMetalAlphaFilter : IESSCMetalFilter

@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) MTLRenderPipelineReflection *reflection;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettings;
@property (retain, nonatomic) IESSCMetalRenderBuffer *imageTextureCoordinateBuffer;
@property (retain, nonatomic) IESSCMetalImage *inputImage;
@property (nonatomic) double alpha;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (void)renderWithParams:(id)a0;
- (void).cxx_destruct;

@end
