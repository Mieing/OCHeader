@class LynxEventHandler;
@protocol IESGCPDetailPageBottomSlotElementViewDelegate;

@interface IESGCPDetailPageBottomSlotElementView : UIView

@property (weak, nonatomic) id<IESGCPDetailPageBottomSlotElementViewDelegate> delegate;
@property (retain, nonatomic) LynxEventHandler *eventHandler;

- (void)ensureEventHandler;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
