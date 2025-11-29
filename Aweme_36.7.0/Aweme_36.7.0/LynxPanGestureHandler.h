@class LynxTouchEvent;

@interface LynxPanGestureHandler : LynxBaseGestureHandler

@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } lastPoint;
@property (nonatomic) BOOL isInvokedBegin;
@property (nonatomic) BOOL isInvokedStart;
@property (nonatomic) BOOL isInvokedEnd;
@property (retain, nonatomic) LynxTouchEvent *lastTouchEvent;
@property (nonatomic) float minDistance;

- (BOOL)shouldActive;
- (id)initWithSign:(long long)a0 context:(id)a1 member:(id)a2 detector:(id)a3;
- (BOOL)isGestureTypeMatched:(unsigned long long)a0;
- (void)onBegin:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (void)onEnd:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (void)onHandle:(id)a0 touches:(id)a1 event:(id)a2 touchEvent:(id)a3 flingPoint:(struct CGPoint { double x0; double x1; })a4 handleBySimultaneous:(BOOL)a5 extraBundle:(id)a6;
- (void)handleConfigMap:(id)a0;
- (void)onStart:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (id)eventParamsInActive:(id)a0;
- (void)onUpdate:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)end;
- (void)fail;

@end
