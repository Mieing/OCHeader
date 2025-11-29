@class IESSCMetalPipelineStateInfo, CIColor, IESSCMetalRenderingDevice, IESSCMetalShaderUniformSettings;

@interface IESSCMetalGradientCreator : IESSCMetalCreator

@property (retain, nonatomic) IESSCMetalRenderingDevice *device;
@property (retain, nonatomic) IESSCMetalPipelineStateInfo *info;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettings;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (nonatomic) struct CGPoint { double x; double y; } sPoint;
@property (nonatomic) struct CGPoint { double x; double y; } ePoint;
@property (retain, nonatomic) CIColor *sColors;
@property (retain, nonatomic) CIColor *eColors;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (id)renderImage:(id)a0;
- (void).cxx_destruct;

@end
