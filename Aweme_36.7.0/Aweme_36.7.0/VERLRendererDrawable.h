@class HTSGLContext, NSString, UIView;

@interface VERLRendererDrawable : NSObject <IVERendererDrawable>

@property (weak, nonatomic) HTSGLContext *context;
@property (weak, nonatomic) UIView *rlDrawable;
@property (nonatomic) BOOL needLayout;
@property (nonatomic) struct CGSize { double width; double height; } sizeInPixel;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutIfNeed;
- (BOOL)bindScreenFBO;
- (void)presentScreenFBO;
- (void)destoryFBO;
- (void)prepareFBO;
- (id)initWithDrawable:(id)a0 context:(id)a1;
- (void *)opaquePointer;
- (void).cxx_destruct;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;

@end
