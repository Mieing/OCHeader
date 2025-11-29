@class CAMetalLayer, MTLRenderPassDescriptor;
@protocol CAMetalDrawable, MTLDevice, TPMTKViewDelegate;

@interface TPMTKView : UIView

@property (weak) CAMetalLayer *metalLayer;
@property (nonatomic) BOOL layerSizeDidUpdate;
@property (nonatomic) BOOL enableColorManage;
@property (nonatomic) double scaleFactor;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (nonatomic) int layerColorSpace;
@property (nonatomic) int lucidMode;
@property (weak, nonatomic) id<TPMTKViewDelegate> delegate;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<CAMetalDrawable> currentDrawable;
@property (readonly, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)setAlpha:(double)a0;
- (void)initCommon;
- (void)initMetal:(id)a0;
- (void)initMetal:(id)a0 withColor:(BOOL)a1;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)setupMetalLayerForLucid:(int)a0;
- (void)setupRenderPassDescriptorForTexture:(id)a0;
- (void)display;
- (void)configViewColorSpace:(int)a0;
- (void)configColorspace:(struct __CFString { } *)a0;
- (void)setContentScaleFactor:(double)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
