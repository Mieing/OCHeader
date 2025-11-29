@class UIImageView, UIView, NSMutableArray, MagicBrushCore;

@interface MBViewBase : UIView

@property (retain, nonatomic) NSMutableArray *touchableRects;
@property (retain, nonatomic) UIImageView *snapshotImage;
@property (weak, nonatomic) UIView *locationInView;
@property (nonatomic) struct weak_ptr<magicbrush::MagicBrushCore> { struct MagicBrushCore *__ptr_; struct __shared_weak_count *__cntrl_; } mbCpp;
@property (weak, nonatomic) MagicBrushCore *mb;
@property (nonatomic) int canvasId;
@property (nonatomic) BOOL useRawAxis;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 canvasId:(int)a1 mb:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 canvasId:(int)a1 mbCpp:(struct shared_ptr<magicbrush::MagicBrushCore> { struct MagicBrushCore *x0; struct __shared_weak_count *x1; })a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct shared_ptr<magicbrush::MagicBrushTouchEvent> { struct MagicBrushTouchEvent *x0; struct __shared_weak_count *x1; })touchEventFromUITouch:(id)a0 withEvent:(id)a1 andAction:(int)a2 inView:(id)a3;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setTouchableRects:(const float *)a0 top:(const float *)a1 width:(const float *)a2 height:(const float *)a3 count:(unsigned int)a4;
- (id)getImage;
- (void)snapshotBegin;
- (void)snapshotEnd;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
