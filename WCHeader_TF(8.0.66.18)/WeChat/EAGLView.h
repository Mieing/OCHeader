@protocol EJTouchDelegate;

@interface EAGLView : UIView

@property (nonatomic) unsigned int canvasId;
@property (weak, nonatomic) id<EJTouchDelegate> touchDelegate;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentScale:(float)a1 retainedBacking:(BOOL)a2 transparent:(BOOL)a3;
- (void)updateLayerParams:(double)a0 retainedBacking:(BOOL)a1 transparent:(BOOL)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)onExternalTouchEvent:(id)a0;
- (void).cxx_destruct;

@end
