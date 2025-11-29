@class EAGLContext, CAEAGLLayer;

@interface VEImagePreview : UIView {
    unsigned int displayRenderbuffer;
    unsigned int displayFramebuffer;
    CAEAGLLayer *_eaglLayer;
    struct CGSize { double width; double height; } _sizeInPixels;
}

@property (nonatomic) unsigned long long aspectRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewBounds;
@property (nonatomic) unsigned long long fillMode;
@property (copy, nonatomic) id /* block */ frameUpdateBlock;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPixels;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) EAGLContext *context;
@property (copy, nonatomic) id /* block */ firstRenderCallback;
@property (readonly, nonatomic) struct CGSize { double width; double height; } scaleSize;

+ (Class)layerClass;

- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (BOOL)wantsMonochromeInput;
- (void)useAsCurrentContext;
- (void)createDisplayFramebuffer;
- (void)destroyDisplayFramebuffer;
- (void)presentFramebuffer;
- (void)recalculateViewGeometry;
- (void)setDisplayFramebuffer;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)clearBackground;

@end
