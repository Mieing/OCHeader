@class MTLRenderPipelineReflection, IESSCMetalRenderBuffer, IESSCMetalShaderUniformSettings, IESSCYUVToRGBConversionParam;
@protocol MTLRenderPipelineState;

@interface IESSCYUVToRGBConversion : IESSCMetalFilter

@property (retain, nonatomic) IESSCMetalRenderBuffer *imageVertices;
@property (retain, nonatomic) IESSCMetalRenderBuffer *luminanceTextureCoordinate;
@property (retain, nonatomic) IESSCMetalRenderBuffer *chrominanceTextureCoordinate;
@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) MTLRenderPipelineReflection *reflection;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettings;
@property (retain, nonatomic) IESSCYUVToRGBConversionParam *param;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (void)renderWithParams:(id)a0;
- (id)initWithRenderingDevice:(id)a0 yuvType:(long long)a1 blendEnable:(BOOL)a2;
- (void).cxx_destruct;

@end
