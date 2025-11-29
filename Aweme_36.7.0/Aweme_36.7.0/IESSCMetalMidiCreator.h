@class IESSCMetalPipelineStateInfo, UIColor, NSArray, IESSCMetalRenderingDevice, IESSCMetalShaderUniformSettings;

@interface IESSCMetalMidiCreator : IESSCMetalCreator

@property (retain, nonatomic) IESSCMetalRenderingDevice *device;
@property (retain, nonatomic) IESSCMetalPipelineStateInfo *info;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettings;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (retain, nonatomic) UIColor *sColor;
@property (retain, nonatomic) UIColor *eColor;
@property (nonatomic) float corner;
@property (retain, nonatomic) NSArray *rects;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (id)renderImage:(id)a0;
- (void)rectTobytes:(float *)a0;
- (void).cxx_destruct;

@end
