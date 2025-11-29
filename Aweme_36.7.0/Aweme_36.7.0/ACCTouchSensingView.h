@class NSMutableArray;

@interface ACCTouchSensingView : UIView

@property (retain, nonatomic) NSMutableArray *subscriberArray;

- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)removeSubscriber:(id)a0;

@end
