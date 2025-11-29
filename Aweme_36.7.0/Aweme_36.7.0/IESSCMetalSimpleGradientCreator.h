@class IESSCMetalPipelineStateInfo, CIColor, IESSCMetalRenderingDevice, IESSCMetalShaderUniformSettings;

@interface IESSCMetalSimpleGradientCreator : IESSCMetalCreator

@property (retain, nonatomic) IESSCMetalRenderingDevice *device;
@property (retain, nonatomic) IESSCMetalPipelineStateInfo *infoX;
@property (retain, nonatomic) IESSCMetalPipelineStateInfo *infoY;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettingsX;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettingsY;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (nonatomic) BOOL isVertical;
@property (retain, nonatomic) CIColor *sColors;
@property (retain, nonatomic) CIColor *eColors;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (id)renderImage:(id)a0;
- (void).cxx_destruct;

@end
