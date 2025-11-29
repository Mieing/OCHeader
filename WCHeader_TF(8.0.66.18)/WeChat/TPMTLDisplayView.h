@class NSString, CAMetalLayer, TPMTLDisplayConfig;
@protocol CAMetalDrawable, MTLDevice;

@interface TPMTLDisplayView : UIView <TPMTLDrawable>

@property (weak) CAMetalLayer *metalLayer;
@property struct CGSize { double width; double height; } drawableSize;
@property double scaleFactor;
@property BOOL layerSizeUpdateFlag;
@property (retain) id<MTLDevice> mtlDeivce;
@property (retain, nonatomic) id<CAMetalDrawable> currentDrawable;
@property (retain) TPMTLDisplayConfig *displayCfg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 with:(id)a1;
- (void)dealloc;
- (void)setupLayer;
- (void)setContentScaleFactor:(double)a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)updateDrawableSize:(struct CGSize { double x0; double x1; })a0;
- (void)configDisplay:(id)a0;
- (id)getDisplayConfig;
- (void)prepareRenderResources;
- (void)cleanupRenderResources;
- (void).cxx_destruct;

@end
