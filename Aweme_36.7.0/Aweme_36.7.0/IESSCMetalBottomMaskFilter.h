@class MTLRenderPipelineReflection, IESSCMetalRenderBuffer, IESSCMetalImage, IESSCMetalShaderUniformSettings;
@protocol MTLRenderPipelineState;

@interface IESSCMetalBottomMaskFilter : IESSCMetalFilter

@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) MTLRenderPipelineReflection *reflection;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettings;
@property (retain, nonatomic) IESSCMetalRenderBuffer *textureCoordinateBuffer;
@property (nonatomic) double bottomHeight;
@property (nonatomic) double height;
@property (nonatomic) double startAlpha;
@property (nonatomic) double endAlpha;
@property (retain, nonatomic) IESSCMetalImage *inputImage;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (void)renderWithParams:(id)a0;
- (void).cxx_destruct;

@end
