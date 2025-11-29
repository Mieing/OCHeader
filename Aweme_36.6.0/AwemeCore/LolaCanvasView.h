@class NSArray, LolaDrawContext, CAShapeLayer;

@interface LolaCanvasView : UIView

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) NSArray *currentDrawCommands;
@property (retain, nonatomic) LolaDrawContext *drawContext;

- (void)updateCanvas:(id)a0;
- (void)appendCanvas;
- (void).cxx_destruct;
- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
