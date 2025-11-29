@class MTLRenderPipelineReflection, IESSCMetalRenderBuffer, IESSCMetalImage, IESSCMetalShaderUniformSettings;
@protocol MTLRenderPipelineState;

@interface IESSCMetalBlendFilter : IESSCMetalFilter

@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) MTLRenderPipelineReflection *reflection;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettings;
@property (retain, nonatomic) IESSCMetalRenderBuffer *baseTextureCoordinateBuffer;
@property (retain, nonatomic) IESSCMetalRenderBuffer *blendTextureCoordinateBuffer;
@property (retain, nonatomic) IESSCMetalImage *baseTexture;
@property (retain, nonatomic) IESSCMetalImage *blendTexture;
@property (nonatomic) double opacity;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (void)renderWithParams:(id)a0;
- (void).cxx_destruct;

@end
