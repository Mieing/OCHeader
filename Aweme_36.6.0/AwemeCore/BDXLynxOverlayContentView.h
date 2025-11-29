@class LynxEventHandler;
@protocol BDXLynxOverlayContentViewDelegate;

@interface BDXLynxOverlayContentView : UIView

@property (retain, nonatomic) LynxEventHandler *eventHandler;
@property (nonatomic) BOOL eventsPassThrough;
@property (weak, nonatomic) id<BDXLynxOverlayContentViewDelegate> delegate;

- (void)handleEdgePanGesture:(id)a0;
- (void)ensureEventHandler;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
