@interface LynxFlingGestureHandler : LynxBaseGestureHandler

@property (nonatomic) BOOL isInvokedBegin;
@property (nonatomic) BOOL isInvokedStart;
@property (nonatomic) BOOL isInvokedEnd;

- (id)initWithSign:(long long)a0 context:(id)a1 member:(id)a2 detector:(id)a3;
- (BOOL)isGestureTypeMatched:(unsigned long long)a0;
- (void)onBegin:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (void)onUpdate:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (void)onEnd:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (void)onHandle:(id)a0 touches:(id)a1 event:(id)a2 touchEvent:(id)a3 flingPoint:(struct CGPoint { double x0; double x1; })a4;
- (void)handleConfigMap:(id)a0;
- (void)onStart:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (id)eventParamsInActive:(struct CGPoint { double x0; double x1; })a0;
- (void)reset;
- (void)end;
- (void)fail;

@end
