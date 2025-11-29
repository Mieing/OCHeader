@class EAGLView;

@interface WAEJCanvasContextWebGLScreen : WAEJCanvasContextWebGL <EJPresentable> {
    BOOL needResumeUpdate;
    int gCurrFrameBuffer;
    int gCurrRenderBuffer;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } style;
@property (readonly, nonatomic) EAGLView *view;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)resizeToWidth:(short)a0 height:(short)a1;
- (BOOL)notifyStyleChangedIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onLayerReady:(id)a0;
- (void)finish;
- (void)resetFramebuffer;
- (id)captureImage;
- (void)present;
- (id)texture;
- (void)resumeUpdate:(BOOL)a0;
- (void)remove;
- (id)getTexture;

@end
