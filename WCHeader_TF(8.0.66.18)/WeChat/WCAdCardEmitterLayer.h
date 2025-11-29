@interface WCAdCardEmitterLayer : CAEmitterLayer

- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 particleInfo:(id)a1 more:(BOOL)a2 longitudeType:(long long)a3 contents:(id)a4;
- (void)dealloc;
- (void)onStopAction;
- (void)onRemoveAction;

@end
