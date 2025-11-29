@class EAGLContext, WADynamicBackgroundGLContext;

@interface WADynamicBackgroundGLBaseViewController : GLKViewController

@property (retain, nonatomic) EAGLContext *context;
@property (retain, nonatomic) WADynamicBackgroundGLContext *glContext;
@property (nonatomic) float elapsedTime;

- (void)viewDidLoad;
- (void)setupContext;
- (void)setupGLContext;
- (id)getGLContext;
- (void)update;
- (void)glkView:(id)a0 drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
