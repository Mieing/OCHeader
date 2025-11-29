@class UIImage, CAMetalLayer;
@protocol MTLDevice, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface HDRMTImageView : UIView

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (retain, nonatomic) CAMetalLayer *metalLayer;
@property (nonatomic) double screenBrightness;
@property (retain, nonatomic) UIImage *image;

- (void)brightnessDidChange:(id)a0;
- (void)setUpEnv;
- (void)setUpPipeline;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
