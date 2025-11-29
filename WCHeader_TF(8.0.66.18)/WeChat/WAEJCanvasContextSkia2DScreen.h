@class EAGLView;

@interface WAEJCanvasContextSkia2DScreen : WAEJCanvasContextSkia2D <EJPresentable>

@property (nonatomic) struct sk_sp<SkSurface> { struct SkSurface *fPtr; } onscreenSurface;
@property (nonatomic) unsigned int viewRenderbuffer;
@property (nonatomic) unsigned int viewFramebuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } style;
@property (readonly, nonatomic) EAGLView *view;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)resizeToWidth:(short)a0 height:(short)a1;
- (BOOL)notifyStyleChangedIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)create;
- (void)markDrawCall;
- (void)remove;
- (void)finish;
- (void)resetFramebuffer;
- (void)prepare;
- (void *)canvas;
- (id)captureImage;
- (id)getTexture;
- (void)present;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
