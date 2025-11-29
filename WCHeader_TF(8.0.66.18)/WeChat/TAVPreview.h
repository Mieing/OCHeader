@class GLKView, CIContext, TAVFrame, NSString, EAGLContext, CIImage, MTKView;
@protocol MTLCommandQueue, MTLDevice, TAVPreviewDelegate;

@interface TAVPreview : UIView <MTKViewDelegate, GLKViewDelegate>

@property (retain, nonatomic) MTKView *MTKView;
@property (retain, nonatomic) id<MTLCommandQueue> MTLCommandQueue;
@property (retain, nonatomic) id<MTLDevice> MTLDevice;
@property (retain, nonatomic) GLKView *GLKView;
@property (retain, nonatomic) EAGLContext *EAGLContext;
@property (retain, nonatomic) CIContext *CIContext;
@property (retain, nonatomic) TAVFrame *currentFrame;
@property (retain, nonatomic) CIImage *CIImage;
@property (nonatomic) unsigned long long imageMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (weak, nonatomic) id<TAVPreviewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportMetal;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentMode:(long long)a0;
- (void)dealloc;
- (void)initContext;
- (void)createMTLContext;
- (void)createEAGLContext;
- (void)updatePreviewWithFrame:(id)a0;
- (void)layoutSubviews;
- (void)setupPreviewIfNeeded;
- (void)setNeedsDisplay;
- (struct CGSize { double x0; double x1; })renderSize;
- (id)renderedCIImage;
- (id)resizeCIImageForDrawing:(id)a0;
- (id)createEmptyCIImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInMTKView:(id)a0;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)glkView:(id)a0 drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
