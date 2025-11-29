@class MTLRenderPipelineReflection, IESSCMetalRenderBuffer, IESSCMetalImage, IESSCMetalShaderUniformSettings;
@protocol MTLRenderPipelineState;

@interface IESSCMetalConcatFilter : IESSCMetalFilter

@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) MTLRenderPipelineReflection *reflection;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettings;
@property (retain, nonatomic) IESSCMetalRenderBuffer *firstTextureCoordinateBuffer;
@property (retain, nonatomic) IESSCMetalRenderBuffer *secondTextureCoordinateBuffer;
@property (retain, nonatomic) IESSCMetalImage *firstTexture;
@property (retain, nonatomic) IESSCMetalImage *secondTexture;
@property (nonatomic) double clipWidth;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (void)renderWithParams:(id)a0;
- (void).cxx_destruct;

@end
